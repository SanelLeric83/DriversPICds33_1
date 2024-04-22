#include <33FJ32MC204.h>
#include "32MC204RegsV1.h"
#FUSES NOWDT                    //No Watch Dog Timer
#FUSES CKSFSM                   //Clock Switching is enabled, fail Safe clock monitor is enabled
#FUSES NOJTAG,PR_PLL                   //JTAG disabled

/*
Izgleda da je za AN0 i AN1, da uzimaju iz BUF0 i BUF1 potrebno za
CH0 pojacalo staviti AN1, a za CH1, AN0, u respektivnim CHS0A i CH123 
registrima.

Ovo radi, hvala Allahu dž.š. Naredni primjeri, kao nastavak ovoga bi trebali
da ukljuce ostale kanale.
Nakon toga, aBd, ostale nacine rada ADC-a, tj. prekidi, skeniranje kanala
i alternativno skeniranje.

Trebam imati 4 ili makar 3 konverzije kanala na raspolaganju, za punu 
kontrolu motora, poput FOC ili recimao za mjerenje temperature modula
ili struje i napona mosta itd.


*/



#device ICSP=1
#use delay(crystal=10M,clock=40M)

volatile unsigned int  ADCValue,ADResultAN ;
void PORT_Init(void);
void ADC_Init(void);


void main()
{

   PORT_Init();
   ADC_Init();
   while(TRUE)
   {
     AD1CON1.SAMP = 1;
     delay_us(30);
     AD1CON1.SAMP = 0;
     while(!AD1CON1.DONE);
     ADResultAN = ADC1BUF1.ADCBUF;
     ADCValue=ADC1BUF0.ADCBUF;
     LATC.LAT=ADCValue;
     LATB.LAT=ADResultAN;
     }
       
    }

void PORT_Init(void)
 {
  TRISA.TRISA0=1;//Ulazni pin
  TRISA.TRISA1=1;//Ulazni pin
  TRISB.TRIS=0x0000;
  TRISC.TRIS=0x0000;//PORTC je izlazni.
  AD1PCFGL.PCFG=0b111111111;//Pocetno, svi digitalni pinovi.
  AD1PCFGL.PCFG0=0;//Analogni pin.
  AD1PCFGL.PCFG1=0;//Analogni pin.
  }
  
 void ADC_Init(void)
  {
   AD1CON1.ADON=0;//Iskljucimo AD dok se konfigurise.
   AD1CON1.ADCON1=0x0000;
   AD1CON1.AD12B=0;//10-bitna konverzija.
   AD1CON1.FORM=0b00;//Integer bez znaka format
   AD1CON1.SSRC=0;//Internal counter ends sampling and starts conversion
                      //(auto-convert)
   //AD1CON1.SIMSAM=1;
   AD1CON2.CHPS=0b11;
   AD1CON1.ASAM=0;//0 = Sampling begins when SAMP bit is set
   AD1CON2.ALTS=0;//Always uses channel input selects for Sample A
   AD1CON2.VCFG=100;//AVdd-AVss=Vref+--Vref-
   AD1CON3.ADCS=0x3F;//Tad=64xTcy=12.8ms, za odabrani clock od 10MHz.
   AD1CON3.ADRC=0;//0 = Clock derived from system clock
   AD1CON3.SAMC=31;
   AD1CHS0.CH0NA=0;//0 = Channel 0 negative input is VREF-
   AD1CHS0.CH0SA=0b0001;//00000 = Channel 0 positive input is AN1
   AD1CHS123.CH123NA=0b00;//00 = CH1, CH2, CH3 negative input is VREF-
   AD1CHS123.CH123SA=0;//0 = CH1 positive input is AN0, CH2 positive input 
                       //is AN1, CH3 positive input is AN2
   //AD1CHS123.CH123NB=0b00;//00 = CH1, CH2, CH3 negative input is VREF-
   //AD1CHS123.CH123SB=0;//1 = CH1 positive input is AN3, CH2 positive 
                           //input is AN4, CH3 positive input is AN5
   AD1CON1.SAMP= 0;                        
   AD1CON1.ADON=1;
   }

  


