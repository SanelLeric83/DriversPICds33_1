#ifndef _128MC506AREGSV1_H_
#define _128MC506AREGSV1_H_
#include <stdint.h>

#define _IO volatile uint16_t

#define STATUS_BASE       0x0042
#define CORCON_BASE       0x0044
#define MODCON_BASE       0x0046
#define XMODSRT_BASE      0x0048
#define XMODEND_BASE      0x004A
#define YMODSRT_BASE      0x004C
#define YMODEND_BASE      0x004E
#define XBREV_BASE        0x0050
#define DISICNT_BASE      0x0052
#define BSRAM_BASE        0x0750
#define SSRAM_BASE        0x0752

#define CNEN1_BASE        0x0060
#define CNEN2_BASE        0x0062
#define CNPU1_BASE        0x0068
#define CNPU2_BASE        0x006A

#define INTCON1_BASE      0x0080
#define INTCON2_BASE      0x0082
#define IFS0_BASE         0x0084
#define IFS1_BASE         0x0086
#define IFS2_BASE         0x0088
#define IFS3_BASE         0x008A
#define IFS4_BASE         0x008C
#define IEC0_BASE         0x0094
#define IEC1_BASE         0x0096
#define IEC2_BASE         0x0098
#define IEC3_BASE         0x009A
#define IEC4_BASE         0x009C
#define IPC0_BASE         0x00A4
#define IPC1_BASE         0x00A6
#define IPC2_BASE         0x00A8
#define IPC3_BASE         0x00AA
#define IPC4_BASE         0x00AC
#define IPC5_BASE         0x00AE
#define IPC6_BASE         0x00B0
#define IPC7_BASE         0x00B2
#define IPC8_BASE         0x00B4
#define IPC9_BASE         0x00B6
#define IPC10_BASE        0x00B8
#define IPC11_BASE        0x00BA
#define IPC12_BASE        0x00BC
#define IPC13_BASE        0x00BE
#define IPC14_BASE        0x00C0
#define IPC15_BASE        0x00C2
#define IPC16_BASE        0x00C4
#define IPC17_BASE        0x00C6
#define INTTREG_BASE      0x00E0


#define TMR1_BASE         0x0100
#define PR1_BASE          0x0102
#define T1CON_BASE        0x0104
#define TMR2_BASE         0x0106
#define TMR3HLD_BASE      0x0108
#define TMR3_BASE         0x010A
#define PR2_BASE          0x010C
#define PR3_BASE          0x010E
#define T2CON_BASE        0x0110
#define T3CON_BASE        0x0112
#define TMR4_BASE         0x0114
#define TMR5HLD_BASE      0x0116
#define TMR5_BASE         0x0118
#define PR4_BASE          0x011A
#define PR5_BASE          0x011C
#define T4CON_BASE        0x011E
#define T5CON_BASE        0x0120
#define TMR6_BASE         0x0122
#define TMR7HLD_BASE      0x0124
#define TMR7_BASE         0x0126
#define PR6_BASE          0x0128
#define PR7_BASE          0x012A
#define T6CON_BASE        0x012C
#define T7CON_BASE        0x012E
#define TMR8_BASE         0x0130
#define TMR9HLD_BASE      0x0132
#define TMR9_BASE         0x0134
#define PR8_BASE          0x0136
#define PR9_BASE          0x0138
#define T8CON_BASE        0x013A
#define T9CON_BASE        0x013C

#define IC1BUF_BASE       0x0140
#define IC1CON_BASE       0x0142
#define IC2BUF_BASE       0x0144
#define IC2CON_BASE       0x0146
#define IC3BUF_BASE       0x0148
#define IC3CON_BASE       0x014A
#define IC4BUF_BASE       0x014C
#define IC4CON_BASE       0x014E
#define IC5BUF_BASE       0x0150
#define IC5CON_BASE       0x0152
#define IC6BUF_BASE       0x0154
#define IC6CON_BASE       0x0156
#define IC7BUF_BASE       0x0158
#define IC7CON_BASE       0x015A
#define IC8BUF_BASE       0x015C
#define IC8CON_BASE       0x015E

#define OC1RS_BASE        0x0180
#define OC1R_BASE         0x0182
#define OC1CON_BASE       0x0184
#define OC2RS_BASE        0x0186
#define OC2R_BASE         0x0188
#define OC2CON_BASE       0x018A
#define OC3RS_BASE        0x018C
#define OC3R_BASE         0x018E
#define OC3CON_BASE       0x0190
#define OC4RS_BASE        0x0192
#define OC4R_BASE         0x0194
#define OC4CON_BASE       0x0196
#define OC5RS_BASE        0x0198
#define OC5R_BASE         0x019A
#define OC5CON_BASE       0x019C
#define OC6RS_BASE        0x019E
#define OC6R_BASE         0x01A0
#define OC6CON_BASE       0x01A2
#define OC7RS_BASE        0x01A4
#define OC7R_BASE         0x01A6
#define OC7CON_BASE       0x01A8
#define OC8RS_BASE        0x01AA
#define OC8R_BASE         0x01AC
#define OC8CON_BASE       0x01AE

#define P1TCON_BASE       0x01C0
#define P1TMR_BASE        0x01C2
#define P1TPER_BASE       0x01C4
#define P1SECMP_BASE      0x01C6
#define PWM1CON1_BASE     0x01C8
#define PWM1CON2_BASE     0x01CA
#define P1DTCON1_BASE     0x01CC
#define P1DTCON2_BASE     0x01CE
#define P1FLTACON_BASE    0x01D0
#define P1FLTBCON_BASE    0x01D2
#define P1OVDCON_BASE     0x01D4
#define P1DC1_BASE        0x01D6
#define P1DC2_BASE        0x01D8
#define P1DC3_BASE        0x01DA
#define P1DC4_BASE        0x01DC

#define QEI1CON_BASE      0x01E0
#define DFLT1CON_BASE     0x01E2
#define POS1CNT_BASE      0x01E4
#define MAX1CNT_BASE      0x01E6


#define I2C1RCV_BASE      0x0200
#define I2C1TRN_BASE      0x0202
#define I2C1BRG_BASE      0x0204
#define I2C1CON_BASE      0x0206
#define I2C1STAT_BASE     0x0208
#define I2C1ADD_BASE      0x020A
#define I2C1MSK_BASE      0x020C

#define I2C2RCV_BASE      0x0210
#define I2C2TRN_BASE      0x0212
#define I2C2BRG_BASE      0x0214
#define I2C2CON_BASE      0x0216
#define I2C2STAT_BASE     0x0218
#define I2C2ADD_BASE      0x021A
#define I2C2MSK_BASE      0x021C

#define U1MODE_BASE       0x0220
#define U1STA_BASE        0x0222
#define U1TXREG_BASE      0x0224
#define U1RXREG_BASE      0x0226
#define U1BRG_BASE        0x0228

#define U2MODE_BASE       0x0230
#define U2STA_BASE        0x0232
#define U2TXREG_BASE      0x0234
#define U2RXREG_BASE      0x0236
#define U2BRG_BASE        0x0238

#define SPI1STAT_BASE     0x0240
#define SPI1CON1_BASE     0x0242
#define SPI1CON2_BASE     0x0244
#define SPI1BUF_BASE      0x0248

#define SPI2STAT_BASE     0x0260
#define SPI2CON1_BASE     0x0262
#define SPI2CON2_BASE     0x0264
#define SPI2BUF_BASE      0x0268

#define ADC1BUF0_BASE     0x0300
#define AD1CON1_BASE      0x0320
#define AD1CON2_BASE      0x0322
#define AD1CON3_BASE      0x0324
#define AD1CHS123_BASE    0x0326
#define AD1CHS0_BASE      0x0328
#define AD1PCFGH_BASE     0x032A
#define AD1PCFGL_BASE     0x032C
#define AD1CSSH_BASE      0x032E
#define AD1CSSL_BASE      0x0330
#define AD1CON4_BASE      0x0332

#define DMA0CON_BASE      0x0380
#define DMA0REQ_BASE      0x0382
#define DMA0STA_BASE      0x0384
#define DMA0STB_BASE      0x0386
#define DMA0PAD_BASE      0x0388
#define DMA0CNT_BASE      0x038A

#define DMA1CON_BASE      0x038C
#define DMA1REQ_BASE      0x038E
#define DMA1STA_BASE      0x0390
#define DMA1STB_BASE      0x0392
#define DMA1PAD_BASE      0x0394
#define DMA1CNT_BASE      0x0396

#define DMA2CON_BASE      0x0398
#define DMA2REQ_BASE      0x039A
#define DMA2STA_BASE      0x039C
#define DMA2STB_BASE      0x039E
#define DMA2PAD_BASE      0x03A0
#define DMA2CNT_BASE      0x03A2

#define DMA3CON_BASE      0x03A4
#define DMA3REQ_BASE      0x03A6
#define DMA3STA_BASE      0x03A8
#define DMA3STB_BASE      0x03AA
#define DMA3PAD_BASE      0x03AC
#define DMA3CNT_BASE      0x03AE

#define DMA4CON_BASE      0x03B0
#define DMA4REQ_BASE      0x03B2
#define DMA4STA_BASE      0x03B4
#define DMA4STB_BASE      0x03B6
#define DMA4PAD_BASE      0x03B8
#define DMA4CNT_BASE      0x03BA

#define DMA5CON_BASE      0x03BC
#define DMA5REQ_BASE      0x03BE
#define DMA5STA_BASE      0x03C0
#define DMA5STB_BASE      0x03C2
#define DMA5PAD_BASE      0x03C4
#define DMA5CNT_BASE      0x03C6

#define DMA6CON_BASE      0x03C8
#define DMA6REQ_BASE      0x03CA
#define DMA6STA_BASE      0x03CC
#define DMA6STB_BASE      0x03CE
#define DMA6PAD_BASE      0x03D0
#define DMA6CNT_BASE      0x03D2

#define DMA7CON_BASE      0x03D4
#define DMA7REQ_BASE      0x03D6
#define DMA7STA_BASE      0x03D8
#define DMA7STB_BASE      0x03DA
#define DMA7PAD_BASE      0x03DC
#define DMA7CNT_BASE      0x03DE

#define DMACS0_BASE       0x03E0
#define DMACS1_BASE       0x03E2
#define DSADR_BASE        0x03E4

/*Preskoceni potuno ECAN1 i ECAN2 moduli*/

#define TRISB_BASE      0x02C6
#define PORTB_BASE      0x02C8
#define LATB_BASE       0x02CA


#define TRISC_BASE      0x02CC
#define PORTC_BASE      0x02CE
#define LATC_BASE       0x02D0

#define TRISD_BASE      0x02D2
#define PORTD_BASE      0x02D4
#define LATD_BASE       0x02D6
#define ODCD_BASE       0x06D2

#define TRISE_BASE      0x02D8
#define PORTE_BASE      0x02DA
#define LATE_BASE       0x02DC

#define TRISF_BASE      0x02DE
#define PORTF_BASE      0x02E0
#define LATF_BASE       0x02E2
#define ODCF_BASE       0x06DE

#define TRISG_BASE      0x02E4
#define PORTG_BASE      0x02E6
#define LATG_BASE       0x02E8
#define ODCG_BASE       0x06E4

#define RCON_BASE         0x0740
#define OSCCON_BASE       0x0742
#define CLKDIV_BASE       0x0744
#define PLLFBD_BASE       0x0746
#define OSCTUN_BASE       0x0748

#define NVMCON_BASE       0x0760
#define NVMKEY_BASE       0x0766

#define PMD1_BASE         0x0770
#define PMD2_BASE         0x0772
#define PMD3_BASE         0x0774

/*Sada dolazi definicija svih registara preko struktura podataka 'union' i 
                                                           'struct'*/
/*                 ALU kontrolni registri:                  */         
typedef union{
    struct {
            _IO C:1;
            _IO Z:1;
            _IO OV:1;
            _IO N:1;
            _IO RA:1;
            _IO IPL:3;
            _IO DC:1;
            _IO DA:1;
            _IO SAB:1;
            _IO OAB:1;
            _IO SB:1;
            _IO SA:1;
            _IO OB:1;
            _IO OA:1;
            };
    struct {
            _IO :5;
            _IO IPL0:1;
            _IO IPL1:1;
            _IO IPL2:1;
             };
}STATUSbits;
                                                           
#define STATUS    ((STATUSbits*)(STATUS_BASE))
/*****************************************************************************/                                                           
typedef union{
    struct {
            _IO IFb:1;
            _IO RND:1;
            _IO PSV:1;
            _IO IPL3:1;
            _IO ACCSAT:1;
            _IO SATDW:1;
            _IO SATB:1;
            _IO SATA:1;
            _IO DL:3;
            _IO EDT:1;
            _IO US:1;
            };
    struct {
            _IO :8;
            _IO DL0:1;
            _IO DL1:1;
            _IO DL2:1;
            };
}CORCONbits;                                                           
                                                           
#define CORCON    ((CORCONbits*)(CORCON_BASE))
/*****************************************************************************/                                                           
typedef union{
    struct {
            _IO XWM:4;
            _IO YWM:4;
            _IO BWM:4;
            _IO :2;
            _IO YMODEN:1;
            _IO XMODEN:1;
            };
    struct {
            _IO XWM0:1;
            _IO XWM1:1;
            _IO XWM2:1;
            _IO XWM3:1;
            _IO YWM0:1;
            _IO YWM1:1;
            _IO YWM2:1;
            _IO YWM3:1;
            _IO BWM0:1;
            _IO BWM1:1;
            _IO BWM2:1;
            _IO BWM3:1;
            };
}MODCONbits;                                                           
                                                           
#define MODCON    ((MODCONbits*)(MODCON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO       :1 ;
     _IO MODSRT:15;
    };
  }XMODSRTbits;

#define XMODSRT   ((XMODSRTbits*)(XMODSRT_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO       :1 ;
     _IO MODEND:15;
    };
  }XMODENDbits;

#define XMODEND   ((XMODENDbits*)(XMODEND_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO       :1 ;
     _IO MODSRT:15;
    };
  }YMODSRTbits;

#define YMODSRT   ((YMODSRTbits*)(YMODSRT_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO       :1 ;
     _IO MODEND:15;
    };
  }YMODENDbits;

#define YMODEND   ((YMODENDbits*)(YMODEND_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO XB:15;
            _IO BREN:1;
            };
    struct {
            _IO XB0:1;
            _IO XB1:1;
            _IO XB2:1;
            _IO XB3:1;
            _IO XB4:1;
            _IO XB5:1;
            _IO XB6:1;
            _IO XB7:1;
            _IO XB8:1;
            _IO XB9:1;
            _IO XB10:1;
            _IO XB11:1;
            _IO XB12:1;
            _IO XB13:1;
            _IO XB14:1;
              };
}XBREVbits;

#define XBREV    ((XBREVbits*)(XBREV_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DICNT:14;
    };
  }DISICNTbits;

#define DISICNT   ((DISICNTbits*)(DISICNT_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO RLBSR:1;
     _IO IRBSR:1;
     _IO IWBSR:1;
    };
  }BSRAMbits;

#define BSRAM   ((BSRAMbits*)(BSRAM_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO RLSSR:1;
     _IO IRSSR:1;
     _IO IWSSR:1;
    };
  }SSRAMbits;

#define SSRAM   ((SSRAMbits*)(SSRAM_BASE))
/*****************************************************************************/
//             STRUKTURE ZA KONTROLU CHANGE NOTIFICATION MODULA:
//
/*****************************************************************************/
typedef union{
  struct{
         _IO CNEN:16;  
         };
  struct{
         _IO CN0IE:1;
         _IO CN1IE:1;
         _IO CN2IE:1;
         _IO CN3IE:1;
         _IO CN4IE:1;
         _IO CN5IE:1;
         _IO CN6IE:1;
         _IO CN7IE:1;
         _IO CN8IE:1;
         _IO CN9IE:1;
         _IO CN10IE:1;
         _IO CN11IE:1;
         _IO CN12IE:1;
         _IO CN13IE:1;
         _IO CN14IE:1;
         _IO CN15IE:1;
          };
}CNEN1bits;

#define CNEN1    ((CNEN1bits*)(CNEN1_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO CNEN16_18:3;  
         };
  struct{
         _IO CN16IE:1;
         _IO CN17IE:1;
         _IO CN18IE:1;
         };
}CNEN2bits;

#define CNEN2    ((CNEN2bits*)(CNEN2_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO CNPU:16;     
        };
  struct{
         _IO CN0PUE:1;
         _IO CN1PUE:1;
         _IO CN2PUE:1;
         _IO CN3PUE:1;
         _IO CN4PUE:1;
         _IO CN5PUE:1;
         _IO CN6PUE:1;
         _IO CN7PUE:1;
         _IO CN8PUE:1;
         _IO CN9PUE:1;
         _IO CN10PUE:1;
         _IO CN11PUE:1;
         _IO CN12PUE:1;
         _IO CN13PUE:1;
         _IO CN14PUE:1;
         _IO CN15PUE:1;
            };
}CNPU1bits;

#define CNPU1    ((CNPU1bits*)(CNPU1_BASE))
/*****************************************************************************/
typedef union{
  struct{
      _IO CNPU16_18:3;     
        };
  struct{
         _IO CN16PUE:1;
         _IO CN17PUE:1;
         _IO CN18PUE:1;
          };
}CNPU2bits;

#define CNPU2    ((CNPU2bits*)(CNPU2_BASE))
/*****************************************************************************/
//              STRUKTURE I REGISTR ZA KONTROLU I STATUS PREKIDA:
//
/*****************************************************************************/
typedef union{
  struct{
         _IO :1;
         _IO OSCFAIL:1;
         _IO STKERR:1;
         _IO ADDRERR:1;
         _IO MATHERR:1;
         _IO DMACERR:1;
         _IO DIV0ERR:1;
         _IO SFTACERR:1;
         _IO COVTE:1;
         _IO OVBTE:1;
         _IO OVATE:1;
         _IO COVBERR:1;
         _IO COVAERR:1;
         _IO OVBERR:1;
         _IO OVAERR:1;
         _IO NSTDIS:1;
          };
}INTCON1bits;

#define INTCON1    ((INTCON1bits*)(INTCON1_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO INT0EP:1;
         _IO INT1EP:1;
         _IO INT2EP:1;
         _IO INT3EP:1;
         _IO INT4EP:1;
         _IO :9;
         _IO DISI:1;
         _IO ALTIVT:1;
         };
}INTCON2bits;

#define INTCON2    ((INTCON2bits*)(INTCON2_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO INT0IF:1;
         _IO IC1IF:1;
         _IO OC1IF:1;
         _IO T1IF:1;
         _IO DMA0IF:1;
         _IO IC2IF:1;
         _IO OC2IF:1;
         _IO T2IF:1;
         _IO T3IF:1;
         _IO SPI1EIF:1;
         _IO SPI1IF:1;
         _IO U1RXIF:1;
         _IO U1TXIF:1;
         _IO AD1IF:1;
         _IO DMA1IF:1;
           };
}IFS0bits;

#define IFS0    ((IFS0bits*)(IFS0_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO SI2C1IF:1;
            _IO MI2C1IF:1;
            _IO :1;
            _IO CNIF:1;
            _IO INT1IF:1;
            _IO :1;
            _IO IC7IF:1;
            _IO IC8IF:1;
            _IO DMA2IF:1;
            _IO OC3IF:1;
            _IO OC4IF:1;
            _IO T4IF:1;
            _IO T5IF:1;
            _IO INT2IF:1;
            _IO U2RXIF:1;
            _IO U2TXIF:1;
             };
    struct {
            _IO SI2CIF:1;
            };
}IFS1bits;

#define IFS1    ((IFS1bits*)(IFS1_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO SPI2EIF:1;
         _IO SPI2IF:1;
         _IO C1RXIF:1;
         _IO C1IF:1;
         _IO DMA3IF:1;
         _IO IC3IF:1;
         _IO IC4IF:1;
         _IO IC5IF:1;
         _IO IC6IF:1;
         _IO OC5IF:1;
         _IO OC6IF:1;
         _IO OC7IF:1;
         _IO OC8IF:1;
         _IO :1;
         _IO DMA4IF:1;
         _IO T6IF:1;
            };
}IFS2bits;

#define IFS2    ((IFS2bits*)(IFS2_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO T7IF:1;
         _IO SI2C2IF:1;
         _IO MI2C2IF:1;
         _IO T8IF:1;
         _IO T9IF:1;
         _IO INT3IF:1;
         _IO INT4IF:1;
         _IO :2;
         _IO PWMIF:1;
         _IO QEIIF:1;
         _IO :2;
         _IO DMA5IF:1;
         _IO :1;
         _IO FLTAIF:1;
            };
}IFS3bits;

#define IFS3    ((IFS3bits*)(IFS3_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO FLTBIF:1;
         _IO U1EIF:1;
         _IO U2EIF:1;
         _IO :1;
         _IO DMA6IF:1;
         _IO DMA7IF:1;
         _IO C1TXIF:1;
          };
}IFS4bits;

#define IFS4    ((IFS4bits*)(IFS4_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO INT0IE:1;
         _IO IC1IE:1;
         _IO OC1IE:1;
         _IO T1IE:1;
         _IO DMA0IE:1;
         _IO IC2IE:1;
         _IO OC2IE:1;
         _IO T2IE:1;
         _IO T3IE:1;
         _IO SPI1EIE:1;
         _IO SPI1IE:1;
         _IO U1RXIE:1;
         _IO U1TXIE:1;
         _IO AD1IE:1;
         _IO DMA1IE:1;
           };
}IEC0bits;

#define IEC0    ((IEC0bits*)(IEC0_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO SI2C1IE:1;
            _IO MI2C1IE:1;
            _IO :1;
            _IO CNIE:1;
            _IO INT1IE:1;
            _IO :1;
            _IO IC7IE:1;
            _IO IC8IE:1;
            _IO DMA2IE:1;
            _IO OC3IE:1;
            _IO OC4IE:1;
            _IO T4IE:1;
            _IO T5IE:1;
            _IO INT2IE:1;
            _IO U2RXIE:1;
            _IO U2TXIE:1;
             };
    struct {
            _IO SI2CIE:1;
            };
}IEC1bits;

#define IEC1    ((IEC1bits*)(IEC1_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO SPI2EIE:1;
         _IO SPI2IE:1;
         _IO C1RXIE:1;
         _IO C1IE:1;
         _IO DMA3IE:1;
         _IO IC3IE:1;
         _IO IC4IE:1;
         _IO IC5IE:1;
         _IO IC6IE:1;
         _IO OC5IE:1;
         _IO OC6IE:1;
         _IO OC7IE:1;
         _IO OC8IE:1;
         _IO :1;
         _IO DMA4IE:1;
         _IO T6IE:1;
          };
}IEC2bits;

#define IEC2    ((IEC2bits*)(IEC2_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO T7IE:1;
         _IO SI2C2IE:1;
         _IO MI2C2IE:1;
         _IO T8IE:1;
         _IO T9IE:1;
         _IO INT3IE:1;
         _IO INT4IE:1;
         _IO :2;
         _IO PWMIE:1;
         _IO QEIIE:1;
         _IO :2;
         _IO DMA5IE:1;
         _IO :1;
         _IO FLTAIE:1;
         };
}IEC3bits;

#define IEC3    ((IEC3bits*)(IEC3_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO FLTBIE:1;
         _IO U1EIE:1;
         _IO U2EIE:1;
         _IO :1;
         _IO DMA6IE:1;
         _IO DMA7IE:1;
         _IO C1TXIE:1;
         };
}IEC4bits;

#define IEC4    ((IEC4bits*)(IEC4_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO INT0IP:3;
            _IO :1;
            _IO IC1IP:3;
            _IO :1;
            _IO OC1IP:3;
            _IO :1;
            _IO T1IP:3;
            };
    struct {
            _IO INT0IP0:1;
            _IO INT0IP1:1;
            _IO INT0IP2:1;
            _IO :1;
            _IO IC1IP0:1;
            _IO IC1IP1:1;
            _IO IC1IP2:1;
            _IO :1;
            _IO OC1IP0:1;
            _IO OC1IP1:1;
            _IO OC1IP2:1;
            _IO :1;
            _IO T1IP0:1;
            _IO T1IP1:1;
            _IO T1IP2:1;
             };
}IPC0bits;

#define IPC0    ((IPC0bits*)(IPC0_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO DMA0IP:3;
            _IO :1;
            _IO IC2IP:3;
            _IO :1;
            _IO OC2IP:3;
            _IO :1;
            _IO T2IP:3;
            };
    struct {
            _IO DMA0IP0:1;
            _IO DMA0IP1:1;
            _IO DMA0IP2:1;
            _IO :1;
            _IO IC2IP0:1;
            _IO IC2IP1:1;
            _IO IC2IP2:1;
            _IO :1;
            _IO OC2IP0:1;
            _IO OC2IP1:1;
            _IO OC2IP2:1;
            _IO :1;
            _IO T2IP0:1;
            _IO T2IP1:1;
            _IO T2IP2:1;
              };
}IPC1bits;

#define IPC1    ((IPC1bits*)(IPC1_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO T3IP:3;
            _IO :1;
            _IO SPI1EIP:3;
            _IO :1;
            _IO SPI1IP:3;
            _IO :1;
            _IO U1RXIP:3;
            };
    struct {
            _IO T3IP0:1;
            _IO T3IP1:1;
            _IO T3IP2:1;
            _IO :1;
            _IO SPI1EIP0:1;
            _IO SPI1EIP1:1;
            _IO SPI1EIP2:1;
            _IO :1;
            _IO SPI1IP0:1;
            _IO SPI1IP1:1;
            _IO SPI1IP2:1;
            _IO :1;
            _IO U1RXIP0:1;
            _IO U1RXIP1:1;
            _IO U1RXIP2:1;
             };
}IPC2bits;

#define IPC2    ((IPC2bits*)(IPC2_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO U1TXIP:3;
            _IO :1;
            _IO AD1IP:3;
            _IO :1;
            _IO DMA1IP:3;
             };
    struct {
            _IO U1TXIP0:1;
            _IO U1TXIP1:1;
            _IO U1TXIP2:1;
            _IO :1;
            _IO AD1IP0:1;
            _IO AD1IP1:1;
            _IO AD1IP2:1;
            _IO :1;
            _IO DMA1IP0:1;
            _IO DMA1IP1:1;
            _IO DMA1IP2:1;
             };
}IPC3bits;

#define IPC3    ((IPC3bits*)(IPC3_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO SI2C1IP:3;
            _IO :1;
            _IO MI2C1IP:3;
            _IO :5;
            _IO CNIP:3;
            };
    struct {
            _IO SI2C1IP0:1;
            _IO SI2C1IP1:1;
            _IO SI2C1IP2:1;
            _IO :1;
            _IO MI2C1IP0:1;
            _IO MI2C1IP1:1;
            _IO MI2C1IP2:1;
            _IO :5;
            _IO CNIP0:1;
            _IO CNIP1:1;
            _IO CNIP2:1;
             };
}IPC4bits;

#define IPC4    ((IPC4bits*)(IPC4_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO INT1IP:3;
            _IO :5;
            _IO IC7IP:3;
            _IO :1;
            _IO IC8IP:3;
            };
    struct {
            _IO INT1IP0:1;
            _IO INT1IP1:1;
            _IO INT1IP2:1;
            _IO :5;
            _IO IC7IP0:1;
            _IO IC7IP1:1;
            _IO IC7IP2:1;
            _IO :1;
            _IO IC8IP0:1;
            _IO IC8IP1:1;
            _IO IC8IP2:1;
             };
}IPC5bits;

#define IPC5    ((IPC5bits*)(IPC5_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO DMA2IP:3;
            _IO :1;
            _IO OC3IP:3;
            _IO :1;
            _IO OC4IP:3;
            _IO :1;
            _IO T4IP:3;
            };
    struct {
            _IO DMA2IP0:1;
            _IO DMA2IP1:1;
            _IO DMA2IP2:1;
            _IO :1;
            _IO OC3IP0:1;
            _IO OC3IP1:1;
            _IO OC3IP2:1;
            _IO :1;
            _IO OC4IP0:1;
            _IO OC4IP1:1;
            _IO OC4IP2:1;
            _IO :1;
            _IO T4IP0:1;
            _IO T4IP1:1;
            _IO T4IP2:1;
              };
}IPC6bits;

#define IPC6    ((IPC6bits*)(IPC6_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO T5IP:3;
            _IO :1;
            _IO INT2IP:3;
            _IO :1;
            _IO U2RXIP:3;
            _IO :1;
            _IO U2TXIP:3;
            };
    struct {
            _IO T5IP0:1;
            _IO T5IP1:1;
            _IO T5IP2:1;
            _IO :1;
            _IO INT2IP0:1;
            _IO INT2IP1:1;
            _IO INT2IP2:1;
            _IO :1;
            _IO U2RXIP0:1;
            _IO U2RXIP1:1;
            _IO U2RXIP2:1;
            _IO :1;
            _IO U2TXIP0:1;
            _IO U2TXIP1:1;
            _IO U2TXIP2:1;
             };
}IPC7bits;

#define IPC7    ((IPC7bits*)(IPC7_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO SPI2EIP:3;
            _IO :1;
            _IO SPI2IP:3;
            _IO :1;
            _IO C1RXIP:3;
            _IO :1;
            _IO C1IP:3;
            };
    struct {
            _IO SPI2EIP0:1;
            _IO SPI2EIP1:1;
            _IO SPI2EIP2:1;
            _IO :1;
            _IO SPI2IP0:1;
            _IO SPI2IP1:1;
            _IO SPI2IP2:1;
            _IO :1;
            _IO C1RXIP0:1;
            _IO C1RXIP1:1;
            _IO C1RXIP2:1;
            _IO :1;
            _IO C1IP0:1;
            _IO C1IP1:1;
            _IO C1IP2:1;
             };
}IPC8bits;

#define IPC8    ((IPC8bits*)(IPC8_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO DMA3IP:3;
            _IO :1;
            _IO IC3IP:3;
            _IO :1;
            _IO IC4IP:3;
            _IO :1;
            _IO IC5IP:3;
            };
    struct {
            _IO DMA3IP0:1;
            _IO DMA3IP1:1;
            _IO DMA3IP2:1;
            _IO :1;
            _IO IC3IP0:1;
            _IO IC3IP1:1;
            _IO IC3IP2:1;
            _IO :1;
            _IO IC4IP0:1;
            _IO IC4IP1:1;
            _IO IC4IP2:1;
            _IO :1;
            _IO IC5IP0:1;
            _IO IC5IP1:1;
            _IO IC5IP2:1;
              };
}IPC9bits;

#define IPC9    ((IPC9bits*)(IPC9_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO IC6IP:3;
            _IO :1;
            _IO OC5IP:3;
            _IO :1;
            _IO OC6IP:3;
            _IO :1;
            _IO OC7IP:3;
             };
    struct {
            _IO IC6IP0:1;
            _IO IC6IP1:1;
            _IO IC6IP2:1;
            _IO :1;
            _IO OC5IP0:1;
            _IO OC5IP1:1;
            _IO OC5IP2:1;
            _IO :1;
            _IO OC6IP0:1;
            _IO OC6IP1:1;
            _IO OC6IP2:1;
            _IO :1;
            _IO OC7IP0:1;
            _IO OC7IP1:1;
            _IO OC7IP2:1;
             };
}IPC10bits;

#define IPC10    ((IPC10bits*)(IPC10_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO OC8IP:3;
            _IO :5;
            _IO DMA4IP:3;
            _IO :1;
            _IO T6IP:3;
            };
    struct {
            _IO OC8IP0:1;
            _IO OC8IP1:1;
            _IO OC8IP2:1;
            _IO :5;
            _IO DMA4IP0:1;
            _IO DMA4IP1:1;
            _IO DMA4IP2:1;
            _IO :1;
            _IO T6IP0:1;
            _IO T6IP1:1;
            _IO T6IP2:1;
            };
}IPC11bits;

#define IPC11    ((IPC11bits*)(IPC11_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO T7IP:3;
            _IO :1;
            _IO SI2C2IP:3;
            _IO :1;
            _IO MI2C2IP:3;
            _IO :1;
            _IO T8IP:3;
            };
    struct {
            _IO T7IP0:1;
            _IO T7IP1:1;
            _IO T7IP2:1;
            _IO :1;
            _IO SI2C2IP0:1;
            _IO SI2C2IP1:1;
            _IO SI2C2IP2:1;
            _IO :1;
            _IO MI2C2IP0:1;
            _IO MI2C2IP1:1;
            _IO MI2C2IP2:1;
            _IO :1;
            _IO T8IP0:1;
            _IO T8IP1:1;
            _IO T8IP2:1;
             };
}IPC12bits;

#define IPC12    ((IPC12bits*)(IPC12_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO T9IP:3;
            _IO :1;
            _IO INT3IP:3;
            _IO :1;
            _IO INT4IP:3;
            };
    struct {
            _IO T9IP0:1;
            _IO T9IP1:1;
            _IO T9IP2:1;
            _IO :1;
            _IO INT3IP0:1;
            _IO INT3IP1:1;
            _IO INT3IP2:1;
            _IO :1;
            _IO INT4IP0:1;
            _IO INT4IP1:1;
            _IO INT4IP2:1;
             };
}IPC13bits;

#define IPC13    ((IPC13bits*)(IPC13_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO :4;
            _IO PWMIP:3;
            _IO :1;
            _IO QEIIP:3;
            };
    struct {
            _IO :4;
            _IO PWMIP0:1;
            _IO PWMIP1:1;
            _IO PWMIP2:1;
            _IO :1;
            _IO QEIIP0:1;
            _IO QEIIP1:1;
            _IO QEIIP2:1;
             };
}IPC14bits;

#define IPC14    ((IPC14bits*)(IPC14_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO :4;
            _IO DMA5IP:3;
            _IO :5;
            _IO FLTAIP:3;
            };
    struct {
            _IO :4;
            _IO DMA5IP0:1;
            _IO DMA5IP1:1;
            _IO DMA5IP2:1;
            _IO :5;
            _IO FLTAIP0:1;
            _IO FLTAIP1:1;
            _IO FLTAIP2:1;
             };
}IPC15bits;

#define IPC15    ((IPC15bits*)(IPC15_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO FLTBIP:3;
            _IO :1;
            _IO U1EIP:3;
            _IO :1;
            _IO U2EIP:3;
            };
    struct {
            _IO FLTBIP0:1;
            _IO FLTBIP1:1;
            _IO FLTBIP2:1;
            _IO :1;
            _IO U1EIP0:1;
            _IO U1EIP1:1;
            _IO U1EIP2:1;
            _IO :1;
            _IO U2EIP0:1;
            _IO U2EIP1:1;
            _IO U2EIP2:1;
             };
}IPC16bits;

#define IPC16    ((IPC16bits*)(IPC16_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO DMA6IP:3;
            _IO :1;
            _IO DMA7IP:3;
            _IO :1;
            _IO C1TXIP:3;
            };
    struct {
            _IO DMA6IP0:1;
            _IO DMA6IP1:1;
            _IO DMA6IP2:1;
            _IO :1;
            _IO DMA7IP0:1;
            _IO DMA7IP1:1;
            _IO DMA7IP2:1;
            _IO :1;
            _IO C1TXIP0:1;
            _IO C1TXIP1:1;
            _IO C1TXIP2:1;
              };
}IPC17bits;

#define IPC17    ((IPC17bits*)(IPC17_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO VECNUM:7;
            _IO :1;
            _IO ILR:4;
            };
    struct {
            _IO VECNUM0:1;
            _IO VECNUM1:1;
            _IO VECNUM2:1;
            _IO VECNUM3:1;
            _IO VECNUM4:1;
            _IO VECNUM5:1;
            _IO VECNUM6:1;
            _IO :1;
            _IO ILR0:1;
            _IO ILR1:1;
            _IO ILR2:1;
            _IO ILR3:1;
              };
}INTTREGbits;

#define INTTREG    ((INTTREGbits*)(INTTREG_BASE))
/*****************************************************************************/
//             STRUKTURE I REGISTRI ZA KONTROLU I STATUS TIMER-a:(31 registar)
//                            (SVI TIMERI)
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMR:16;//BUG!!!
    };
  }TMR1bits;

#define TMR1   ((TMR1bits*)(TMR1_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PR:16;//BUG!!!
    };
  }PR1bits;

#define PR1   ((PR1bits*)(PR1_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO :1;
            _IO TCS:1;
            _IO TSYNC:1;
            _IO :1;
            _IO TCKPS:2;
            _IO TGATE:1;
            _IO :6;
            _IO TSIDL:1;
            _IO :1;
            _IO TON:1;
             };
    struct {
            _IO :4;
            _IO TCKPS0:1;
            _IO TCKPS1:1;
            };
}T1CONbits;

#define T1CON    ((T1CONbits*)(T1CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMR:16;//BUG!!!
    };
  }TMR2bits;

#define TMR2   ((TMR2bits*)(TMR2_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMRHLD:16;//BUG!!!
    };
  }TMR3HLDbits;

#define TMR3HLD   ((TMR3HLDbits*)(TMR3HLD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMR:16;//BUG!!!
    };
  }TMR3bits;

#define TMR3   ((TMR3bits*)(TMR3_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PR:16;//BUG!!!
    };
  }PR2bits;

#define PR2   ((PR2bits*)(PR2_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PR:16;//BUG!!!
    };
  }PR3bits;

#define PR3   ((PR3bits*)(PR3_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO :1;
            _IO TCS:1;
            _IO :1;
            _IO T32:1;
            _IO TCKPS:2;
            _IO TGATE:1;
            _IO :6;
            _IO TSIDL:1;
            _IO :1;
            _IO TON:1;
            };
    struct {
            _IO :4;
            _IO TCKPS0:1;
            _IO TCKPS1:1;
            };
}T2CONbits;

#define T2CON    ((T2CONbits*)(T2CON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO :1;
            _IO TCS:1;
            _IO :2;
            _IO TCKPS:2;
            _IO TGATE:1;
            _IO :6;
            _IO TSIDL:1;
            _IO :1;
            _IO TON:1;
            };
    struct {
            _IO :4;
            _IO TCKPS0:1;
            _IO TCKPS1:1;
            };
}T3CONbits;

#define T3CON    ((T3CONbits*)(T3CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMR:16;//BUG!!!
    };
  }TMR4bits;

#define TMR4   ((TMR4bits*)(TMR4_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMRHLD:16;//BUG!!!
    };
  }TMR5HLDbits;

#define TMR5HLD   ((TMR5HLDbits*)(TMR5HLD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMR:16;//BUG!!!
    };
  }TMR5bits;

#define TMR5   ((TMR5bits*)(TMR5_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PR:16;//BUG!!!
    };
  }PR4bits;

#define PR4   ((PR4bits*)(PR4_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PR:16;//BUG!!!
    };
  }PR5bits;

#define PR5   ((PR5bits*)(PR5_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO :1;
            _IO TCS:1;
            _IO :1;
            _IO T32:1;
            _IO TCKPS:2;
            _IO TGATE:1;
            _IO :6;
            _IO TSIDL:1;
            _IO :1;
            _IO TON:1;
             };
    struct {
            _IO :4;
            _IO TCKPS0:1;
            _IO TCKPS1:1;
            };
}T4CONbits;

#define T4CON    ((T4CONbits*)(T4CON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO :1;
            _IO TCS:1;
            _IO :2;
            _IO TCKPS:2;
            _IO TGATE:1;
            _IO :6;
            _IO TSIDL:1;
            _IO :1;
            _IO TON:1;
            };
    struct {
            _IO :4;
            _IO TCKPS0:1;
            _IO TCKPS1:1;
            };
}T5CONbits;

#define T5CON    ((T5CONbits*)(T5CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMR:16;//BUG!!!
    };
  }TMR6bits;

#define TMR6   ((TMR6bits*)(TMR6_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMRHLD:16;//BUG!!!
    };
  }TMR7HLDbits;

#define TMR7HLD   ((TMR7HLDbits*)(TMR7HLD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMR:16;//BUG!!!
    };
  }TMR7bits;

#define TMR7   ((TMR7bits*)(TMR7_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PR:16;//BUG!!!
    };
  }PR6bits;

#define PR6   ((PR6bits*)(PR6_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PR:16;//BUG!!!
    };
  }PR7bits;

#define PR7   ((PR7bits*)(PR7_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO :1;
            _IO TCS:1;
            _IO :1;
            _IO T32:1;
            _IO TCKPS:2;
            _IO TGATE:1;
            _IO :6;
            _IO TSIDL:1;
            _IO :1;
            _IO TON:1;
             };
    struct {
            _IO :4;
            _IO TCKPS0:1;
            _IO TCKPS1:1;
            };
}T6CONbits;

#define T6CON    ((T6CONbits*)(T6CON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO :1;
            _IO TCS:1;
            _IO :2;
            _IO TCKPS:2;
            _IO TGATE:1;
            _IO :6;
            _IO TSIDL:1;
            _IO :1;
            _IO TON:1;
            };
    struct {
            _IO :4;
            _IO TCKPS0:1;
            _IO TCKPS1:1;
            };
}T7CONbits;

#define T7CON    ((T7CONbits*)(T7CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMR:16;//BUG!!!
    };
  }TMR8bits;

#define TMR8   ((TMR8bits*)(TMR8_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMRHLD:16;//BUG!!!
    };
  }TMR9HLDbits;

#define TMR9HLD   ((TMR9HLDbits*)(TMR9HLD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMR:16;//BUG!!!
    };
  }TMR9bits;

#define TMR9   ((TMR9bits*)(TMR9_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PR:16;//BUG!!!
    };
  }PR8bits;

#define PR8   ((PR8bits*)(PR8_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PR:16;//BUG!!!
    };
  }PR9bits;

#define PR9   ((PR9bits*)(PR9_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO :1;
            _IO TCS:1;
            _IO :1;
            _IO T32:1;
            _IO TCKPS:2;
            _IO TGATE:1;
            _IO :6;
            _IO TSIDL:1;
            _IO :1;
            _IO TON:1;
            };
    struct {
            _IO :4;
            _IO TCKPS0:1;
            _IO TCKPS1:1;
            };
}T8CONbits;

#define T8CON    ((T8CONbits*)(T8CON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO :1;
            _IO TCS:1;
            _IO :2;
            _IO TCKPS:2;
            _IO TGATE:1;
            _IO :6;
            _IO TSIDL:1;
            _IO :1;
            _IO TON:1;
            };
    struct {
            _IO :4;
            _IO TCKPS0:1;
            _IO TCKPS1:1;
            };
}T9CONbits;

#define T9CON    ((T9CONbits*)(T9CON_BASE))
/*****************************************************************************/
//              STRUKTURE I REGISTRI ZA INPUT CAPTURE MODULA:(16 registara)
//
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ICBUF:16;//BUG!!!
    };
  }IC1BUFbits;

#define IC1BUF   ((IC1BUFbits*)(IC1BUF_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO ICM:3;
            _IO ICBNE:1;
            _IO ICOV:1;
            _IO ICI:2;
            _IO ICTMR:1;
            _IO :5;
            _IO ICSIDL:1;
             };
    struct {
            _IO ICM0:1;
            _IO ICM1:1;
            _IO ICM2:1;
            _IO :2;
            _IO ICI0:1;
            _IO ICI1:1;
            };
}IC1CONbits;

#define IC1CON   ((IC1CONbits*)(IC1CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ICBUF:16;//BUG!!!
    };
  }IC2BUFbits;

#define IC2BUF   ((IC2BUFbits*)(IC2BUF_BASE))
/*****************************************************************************/
typedef union {
    struct {
             _IO ICM:3;
           _IO ICBNE:1;
            _IO ICOV:1;
             _IO ICI:2;
           _IO ICTMR:1;
                _IO :5;
          _IO ICSIDL:1;
            };
    struct {
            _IO ICM0:1;
            _IO ICM1:1;
            _IO ICM2:1;
                _IO :2;
            _IO ICI0:1;
            _IO ICI1:1;
           };
}IC2CONbits;

#define IC2CON   ((IC2CONbits*)(IC2CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ICBUF:16;//BUG!!!
    };
  }IC3BUFbits;

#define IC3BUF   ((IC3BUFbits*)(IC3BUF_BASE))
/*****************************************************************************/
typedef union {
    struct {
             _IO ICM:3;
           _IO ICBNE:1;
            _IO ICOV:1;
             _IO ICI:2;
           _IO ICTMR:1;
                _IO :5;
          _IO ICSIDL:1;
            };
    struct {
           _IO ICM0:1;
           _IO ICM1:1;
           _IO ICM2:1;
               _IO :2;
           _IO ICI0:1;
           _IO ICI1:1;
            };
}IC3CONbits;

#define IC3CON   ((IC3CONbits*)(IC3CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ICBUF:16;//BUG!!!
    };
  }IC4BUFbits;

#define IC4BUF   ((IC4BUFbits*)(IC4BUF_BASE))
/*****************************************************************************/
typedef union {
    struct {
             _IO ICM:3;
           _IO ICBNE:1;
            _IO ICOV:1;
             _IO ICI:2;
           _IO ICTMR:1;
                _IO :5;
          _IO ICSIDL:1;
            };
    struct {
            _IO ICM0:1;
            _IO ICM1:1;
            _IO ICM2:1;
                _IO :2;
            _IO ICI0:1;
            _IO ICI1:1;
            };
}IC4CONbits;

#define IC4CON   ((IC4CONbits*)(IC4CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO ICBUF:16;//BUG!!!
    };
  }IC5BUFbits;

#define IC5BUF   ((IC5BUFbits*)(IC5BUF_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO ICM:3;
            _IO ICBNE:1;
            _IO ICOV:1;
            _IO ICI:2;
            _IO ICTMR:1;
            _IO :5;
            _IO ICSIDL:1;
           };
    struct {
            _IO ICM0:1;
            _IO ICM1:1;
            _IO ICM2:1;
            _IO :2;
            _IO ICI0:1;
            _IO ICI1:1;
          };
}IC5CONbits;

#define IC5CON   ((IC5CONbits*)(IC5CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO ICBUF:16;//BUG!!!
    };
  }IC6BUFbits;

#define IC6BUF   ((IC6BUFbits*)(IC6BUF_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO ICM:3;
            _IO ICBNE:1;
            _IO ICOV:1;
            _IO ICI:2;
            _IO ICTMR:1;
            _IO :5;
            _IO ICSIDL:1;
           };
    struct {
            _IO ICM0:1;
            _IO ICM1:1;
            _IO ICM2:1;
                _IO :2;
            _IO ICI0:1;
            _IO ICI1:1;
            };
}IC6CONbits;

#define IC6CON   ((IC6CONbits*)(IC6CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO ICBUF:16;//BUG!!!
    };
  }IC7BUFbits;

#define IC7BUF   ((IC7BUFbits*)(IC7BUF_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO ICM:3;
            _IO ICBNE:1;
            _IO ICOV:1;
            _IO ICI:2;
            _IO ICTMR:1;
            _IO :5;
            _IO ICSIDL:1;
            };
    struct {
            _IO ICM0:1;
            _IO ICM1:1;
            _IO ICM2:1;
            _IO :2;
            _IO ICI0:1;
            _IO ICI1:1;
            };
}IC7CONbits;

#define IC7CON   ((IC7CONbits*)(IC7CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO IC8BUFR:16;//BUG!!!
    };
  }IC8BUFbits;

#define IC8BUF   ((IC8BUFbits*)(IC8BUF_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO ICM:3;
            _IO ICBNE:1;
            _IO ICOV:1;
            _IO ICI:2;
            _IO ICTMR:1;
            _IO :5;
            _IO ICSIDL:1;
            };
    struct {
            _IO ICM0:1;
            _IO ICM1:1;
            _IO ICM2:1;
            _IO :2;
            _IO ICI0:1;
            _IO ICI1:1;
            };
}IC8CONbits;

#define IC8CON   ((IC8CONbits*)(IC8CON_BASE))
/*****************************************************************************/
//              STRUKTURE I REGISTRI ZA OUTPUT COMPARE MODUL:
//                    (24 registra=8x3 registra)
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO OCRS:16;
    };
  }OC1RSbits;

#define OC1RS   ((OC1RSbits*)(OC1RS_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO OCR:16;
    };
  }OC1Rbits;

#define OC1R   ((OC1Rbits*)(OC1R_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO OCM:3;
            _IO OCTSEL:1;
            _IO OCFLT:1;
            _IO :8;
            _IO OCSIDL:1;
             };
    struct {
            _IO OCM0:1;
            _IO OCM1:1;
            _IO OCM2:1;
           };
}OC1CONbits;

#define OC1CON   ((OC1CONbits*)(OC1CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO OCRS:16;//BUG!!!
    };
  }OC2RSbits;

#define OC2RS   ((OC2RSbits*)(OC2RS_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO OCR:16;//BUG!!!
    };
  }OC2Rbits;

#define OC2R   ((OC2Rbits*)(OC2R_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO OCM:3;
            _IO OCTSEL:1;
            _IO OCFLT:1;
            _IO :8;
            _IO OCSIDL:1;
             };
    struct {
            _IO OCM0:1;
            _IO OCM1:1;
            _IO OCM2:1;
             };
}OC2CONbits;

#define OC2CON   ((OC2CONbits*)(OC2CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO OCRS:16;//BUG!!!
    };
  }OC3RSbits;

#define OC3RS   ((OC3RSbits*)(OC3RS_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO OCR:16;//BUG!!!
    };
  }OC3Rbits;

#define OC3R   ((OC3Rbits*)(OC3R_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO OCM:3;
            _IO OCTSEL:1;
            _IO OCFLT:1;
            _IO :8;
            _IO OCSIDL:1;
            };
    struct {
            _IO OCM0:1;
            _IO OCM1:1;
            _IO OCM2:1;
            };
}OC3CONbits;

#define OC3CON   ((OC3CONbits*)(OC3CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO OCRS:16;//BUG!!!
    };
  }OC4RSbits;

#define OC4RS   ((OC4RSbits*)(OC4RS_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO OCR:16;//BUG!!!
    };
  }OC4Rbits;

#define OC4R   ((OC4Rbits*)(OC4R_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO OCM:3;
            _IO OCTSEL:1;
            _IO OCFLT:1;
            _IO :8;
            _IO OCSIDL:1;
            };
    struct {
            _IO OCM0:1;
            _IO OCM1:1;
            _IO OCM2:1;
           };
}OC4CONbits;

#define OC4CON   ((OC4CONbits*)(OC4CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO OCRS:16;//BUG!!!
    };
  }OC5RSbits;

#define OC5RS   ((OC5RSbits*)(OC5RS_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO OCR:16;//BUG!!!
    };
  }OC5Rbits;

#define OC5R   ((OC5Rbits*)(OC5R_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO OCM:3;
            _IO OCTSEL:1;
            _IO OCFLT:1;
            _IO :8;
            _IO OCSIDL:1;
            };
    struct {
            _IO OCM0:1;
            _IO OCM1:1;
            _IO OCM2:1;
            };
}OC5CONbits;

#define OC5CON   ((OC5CONbits*)(OC5CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO OCRS:16;//BUG!!!
    };
  }OC6RSbits;

#define OC6RS   ((OC6RSbits*)(OC6RS_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO OCR:16;//BUG!!!
    };
  }OC6Rbits;

#define OC6R   ((OC6Rbits*)(OC6R_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO OCM:3;
            _IO OCTSEL:1;
            _IO OCFLT:1;
            _IO :8;
            _IO OCSIDL:1;
            };
    struct {
            _IO OCM0:1;
            _IO OCM1:1;
            _IO OCM2:1;
            };
}OC6CONbits;

#define OC6CON   ((OC6CONbits*)(OC6CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO OCRS:16;//BUG!!!
    };
  }OC7RSbits;

#define OC7RS   ((OC7RSbits*)(OC7RS_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO OCR:16;//BUG!!!
    };
  }OC7Rbits;

#define OC7R   ((OC7Rbits*)(OC7R_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO OCM:3;
            _IO OCTSEL:1;
            _IO OCFLT:1;
            _IO :8;
            _IO OCSIDL:1;
            };
    struct {
            _IO OCM0:1;
            _IO OCM1:1;
            _IO OCM2:1;
            };
}OC7CONbits;

#define OC7CON   ((OC7CONbits*)(OC7CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO OCRS:16;//BUG!!!
    };
  }OC8RSbits;

#define OC8RS   ((OC8RSbits*)(OC8RS_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO OCR:16;//BUG!!!
    };
  }OC8Rbits;

#define OC8R   ((OC8Rbits*)(OC8R_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO OCM:3;
            _IO OCTSEL:1;
            _IO OCFLT:1;
            _IO :8;
            _IO OCSIDL:1;
            };
    struct {
            _IO OCM0:1;
            _IO OCM1:1;
            _IO OCM2:1;
            };
}OC8CONbits;

#define OC8CON   ((OC8CONbits*)(OC8CON_BASE))
/*****************************************************************************/
//              8-IZLAZNI MOTOR CONTROL PWM MODUL:(15 registara)
//                  
/*****************************************************************************/
typedef union{
    struct {
            _IO PTMOD: 2;
            _IO PTCKPS:2;
            _IO PTOPS: 4;
            _IO :      5;
            _IO PTSIDL:1;
            _IO :      1;
            _IO PTEN:  1;
           };
    struct {
            _IO PTMOD0: 1;
            _IO PTMOD1: 1;
            _IO PTCKPS0:1;
            _IO PTCKPS1:1;
            _IO PTOPS0: 1;
            _IO PTOPS1: 1;
            _IO PTOPS2: 1;
            _IO PTOPS3: 1;
            };
}P1TCONbits;

#define P1TCON   ((P1TCONbits*)(P1TCON_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO PTMR:15;
         _IO PTDIR:1;
         };
}P1TMRbits;

#define P1TMR   ((P1TMRbits*)(P1TMR_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO PTPER:15;
         };
}P1TPERbits;

#define P1TPER   ((P1TPERbits*)(P1TPER_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO SEVTCMP:15;
         _IO SEVTDIR:1;
         };
}P1SECMPbits;

#define P1SECMP   ((P1SECMPbits*)(P1SECMP_BASE))
/*****************************************************************************/
typedef union{
    struct{
           _IO PENL:  4;
           _IO PENH:  4;
           _IO PMOD:  4;
           };
    struct {
            _IO PEN1L: 1;
            _IO PEN2L: 1;
            _IO PEN3L: 1;
            _IO PEN4L: 1;
            _IO PEN1H: 1;
            _IO PEN2H: 1;
            _IO PEN3H: 1;
            _IO PEN4H: 1;
            _IO PMOD1: 1;
            _IO PMOD2: 1;
            _IO PMOD3: 1;
            _IO PMOD4: 1;
            };
    struct {
            _IO :      8;
            _IO PTMOD1:1;
            _IO PTMOD2:1;
            _IO PTMOD3:1;
            _IO PTMOD4:1;
            };
}PWM1CON1bits;

#define PWM1CON1   ((PWM1CON1bits*)(PWM1CON1_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO UDIS:   1;
            _IO OSYNC:  1;
            _IO IUE:    1;
            _IO :       5;
            _IO SEVOPS: 4;
            };
    struct {
            _IO :       8;
            _IO SEVOPS0:1;
            _IO SEVOPS1:1;
            _IO SEVOPS2:1;
            _IO SEVOPS3:1;
            };
}PWM1CON2bits;

#define PWM1CON2   ((PWM1CON2bits*)(PWM1CON2_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO DTA:    6;
            _IO DTAPS:  2;
            _IO DTB:    6;
            _IO DTBPS:  2;
            };
    struct {
            _IO DTA0:   1;
            _IO DTA1:   1;
            _IO DTA2:   1;
            _IO DTA3:   1;
            _IO DTA4:   1;
            _IO DTA5:   1;
            _IO DTAPS0: 1;
            _IO DTAPS1: 1;
            _IO DTB0:   1;
            _IO DTB1:   1;
            _IO DTB2:   1;
            _IO DTB3:   1;
            _IO DTB4:   1;
            _IO DTB5:   1;
            _IO DTBPS0: 1;
            _IO DTBPS1: 1;
           };
}P1DTCON1bits;

#define P1DTCON1   ((P1DTCON1bits*)(P1DTCON1_BASE))
/*****************************************************************************/
typedef union{
   struct{
          _IO DTS:   8;
          };
   struct{
          _IO DTS1:  2;
          _IO DTS2:  2;
          _IO DTS3:  2;
          _IO DTS4:  2;
          };
   struct {
           _IO DTS1I:1;
           _IO DTS1A:1;
           _IO DTS2I:1;
           _IO DTS2A:1;
           _IO DTS3I:1;
           _IO DTS3A:1;
           _IO DTS4I:1;
           _IO DTS4A:1;
            };
}P1DTCON2bits;

#define P1DTCON2   ((P1DTCON2bits*)(P1DTCON2_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO FAEN:  4;
         _IO :      4;
         _IO FAOV:  8;
         };
  struct{
         _IO FAEN1: 1;
         _IO FAEN2: 1;
         _IO FAEN3: 1;
         _IO FAEN4: 1;
         _IO :      3;
         _IO FLTAM: 1;
         _IO FAOV1L:1;
         _IO FAOV1H:1;
         _IO FAOV2L:1;
         _IO FAOV2H:1;
         _IO FAOV3L:1;
         _IO FAOV3H:1;
         _IO FAOV4L:1;
         _IO FAOV4H:1;
          };
}P1FLTACONbits;

#define P1FLTACON   ((P1FLTACONbits*)(P1FLTACON_BASE))
/*****************************************************************************/
typedef union{
   struct{
         _IO FBEN:  4;
         _IO :      4;
         _IO FBOV:  8;
         };
  struct{
         _IO FBEN1: 1;
         _IO FBEN2: 1;
         _IO FBEN3: 1;
         _IO FBEN4: 1;
         _IO :      3;
         _IO FLTBM: 1;
         _IO FBOV1L:1;
         _IO FBOV1H:1;
         _IO FBOV2L:1;
         _IO FBOV2H:1;
         _IO FBOV3L:1;
         _IO FBOV3H:1;
         _IO FBOV4L:1;
         _IO FBOV4H:1;
          };
}P1FLTBCONbits;

#define P1FLTBCON   ((P1FLTBCONbits*)(P1FLTBCON_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO POUT6:6;
         _IO      :2;
         _IO POVD6:6;
         _IO      :2;
         };
  struct{
         _IO POUT:8;
         _IO POVD:8;
         };
  struct{
       _IO POUT1L:1;
       _IO POUT1H:1;
       _IO POUT2L:1;
       _IO POUT2H:1;
       _IO POUT3L:1;
       _IO POUT3H:1;
       _IO POUT4L:1;
       _IO POUT4H:1;
       _IO POVD1L:1;
       _IO POVD1H:1;
       _IO POVD2L:1;
       _IO POVD2H:1;
       _IO POVD3L:1;
       _IO POVD3H:1;
       _IO POVD4L:1;
       _IO POVD4H:1;
           };
}P1OVDCONbits;

#define P1OVDCON   ((P1OVDCONbits*)(P1OVDCON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PDC1:16;//BUG!!!
    };
  }P1DC1bits;

#define P1DC1   ((P1DC1bits*)(P1DC1_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PDC2:16;//BUG!!!
    };
  }P1DC2bits;

#define P1DC2   ((P1DC2bits*)(P1DC2_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PDC3:16;//BUG!!!
    };
  }P1DC3bits;

#define P1DC3   ((P1DC3bits*)(P1DC3_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PDC4:16;//BUG!!!
    };
  }P1DC4bits;

#define P1DC4   ((P1DC4bits*)(P1DC4_BASE))
/*****************************************************************************/
//             MOTION FEEDBACK MODUL (KVADRATURNI ENKODER):(4 registra)
//                  
/*****************************************************************************/
typedef union {
    struct {
            _IO UPDN_SRC:  1;
            _IO TQCS:      1;
            _IO POSRES:    1;
            _IO TQCKPS0:   1;
            _IO TQCKPS1:   1;
            _IO TQGATE:    1;
            _IO PCDOUT:    1;
            _IO SWPAB:     1;
            _IO QEIM0:     1;
            _IO QEIM1:     1;
            _IO QEIM2:     1;
            _IO UPDN:      1;
            _IO INDX:      1;
            _IO QEISIDL:   1;
            _IO :          1;
            _IO CNTERR:    1;
             };
    struct {
            _IO :          3;
            _IO TQCKPS:    2;
            _IO :          3;
            _IO QEIM:      3;
            };
}QEI1CONbits;

#define QEI1CON   ((QEI1CONbits*)(QEI1CON_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO :      4;
            _IO QECK0: 1;
            _IO QECK1: 1;
            _IO QECK2: 1;
            _IO QEOUT: 1;
            _IO CEID:  1;
            _IO IMV0:  1;
            _IO IMV1:  1;
            };
    struct {
            _IO :      4;
            _IO QECK:  3;
            _IO :      2;
            _IO IMV:   2;
            };
}DFLT1CONbits;

#define DFLT1CON   ((DFLT1CONbits*)(DFLT1CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO POSCNT:16;//BUG!!!
    };
  }POS1CNTbits;

#define POS1CNT   ((POS1CNTbits*)(POS1CNT_BASE))
/*****************************************************************************/
  typedef union
   {
    struct
      {
        _IO MAXCNT:16;//BUG!!!
       };
  }MAX1CNTbits;

#define MAX1CNT   ((MAX1CNTbits*)(MAX1CNT_BASE))
/*****************************************************************************/
//                     I2C1 MODUL (2-ZICANI SERIJSKI INTERFEJS):(7 registara)
//                  
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO I2CRCV:8;
    };
  }I2C1RCVbits;

#define I2C1RCV   ((I2C1RCVbits*)(I2C1RCV_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO I2CTRN:8;
    };
  }I2C1TRNbits;

#define I2C1TRN   ((I2C1TRNbits*)(I2C1TRN_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO I2CBRG:9;//BUG!!!
    };
  }I2C1BRGbits;

#define I2C1BRG   ((I2C1BRGbits*)(I2C1BRG_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO SEN:     1;
         _IO RSEN:    1;
         _IO PEN:     1;
         _IO RCEN:    1;
         _IO ACKEN:   1;
         _IO ACKDT:   1;
         _IO STREN:   1;
         _IO GCEN:    1;
         _IO SMEN:    1;
         _IO DISSLW:  1;
         _IO A10M:    1;
         _IO IPMIEN:  1;
         _IO SCLREL:  1;
         _IO I2CSIDL: 1;
         _IO :        1;
         _IO I2CEN:   1;
  };
}I2C1CONbits;

#define I2C1CON   ((I2C1CONbits*)(I2C1CON_BASE))
/*****************************************************************************/
typedef union{
              _IO TBF:    1;
              _IO RBF:    1;
              _IO R_W:    1;
              _IO S:      1;
              _IO P:      1;
              _IO D_A:    1;
              _IO I2COV:  1;
              _IO IWCOL:  1;
              _IO ADD10:  1;
              _IO GCSTAT: 1;
              _IO BCL:    1;
              _IO :       3;
              _IO TRSTAT: 1;
              _IO ACKSTAT:1;
}I2C1STATbits;

#define I2C1STAT   ((I2C1STATbits*)(I2C1STAT_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO I2CADD:10;//BUG!!!
    };
  }I2C1ADDbits;

#define I2C1ADD   ((I2C1ADDbits*)(I2C1ADD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO I2CMSK:10;//BUG!!!
    };
  }I2C1MSKbits;

#define I2C1MSK   ((I2C1MSKbits*)(I2C1MSK_BASE))
/*****************************************************************************/
//                     I2C2 MODUL (2-ZICANI SERIJSKI INTERFEJS):(7 registara)
//                  
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO I2CRCV:8;//BUG!!!
    };
  }I2C2RCVbits;

#define I2C2RCV   ((I2C2RCVbits*)(I2C2RCV_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO I2CTRN:8;//BUG!!!
    };
  }I2C2TRNbits;

#define I2C2TRN   ((I2C2TRNbits*)(I2C2TRN_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO I2CBRG:9;//BUG!!!
    };
  }I2C2BRGbits;

#define I2C2BRG   ((I2C2BRGbits*)(I2C2BRG_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO SEN:    1;
         _IO RSEN:   1;
         _IO PEN:    1;
         _IO RCEN:   1;
         _IO ACKEN:  1;
         _IO ACKDT:  1;
         _IO STREN:  1;
         _IO GCEN:   1;
         _IO SMEN:   1;
         _IO DISSLW: 1;
         _IO A10M:   1;
         _IO IPMIEN: 1;
         _IO SCLREL: 1;
         _IO I2CSIDL:1;
         _IO :       1;
         _IO I2CEN:  1;
           };
}I2C2CONbits;

#define I2C2CON   ((I2C2CONbits*)(I2C2CON_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO TBF:    1;
         _IO RBF:    1;
         _IO R_W:    1;
         _IO S:      1;
         _IO P:      1;
         _IO D_A:    1;
         _IO I2COV:  1;
         _IO IWCOL:  1;
         _IO ADD10:  1;
         _IO GCSTAT: 1;
         _IO BCL:    1;
         _IO :       3;
         _IO TRSTAT: 1;
         _IO ACKSTAT:1;
         };
}I2C2STATbits;

#define I2C2STAT   ((I2C2STATbits*)(I2C2STAT_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO I2CADD:10;//BUG!!!
    };
  }I2C2ADDbits;

#define I2C2ADD   ((I2C2ADDbits*)(I2C2ADD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO I2CMSK:10;//BUG!!!
    };
  }I2C2MSKbits;

#define I2C2MSK   ((I2C2MSKbits*)(I2C2MSK_BASE))
/*****************************************************************************/
//                     USART1 MODUL (SERIJSKI INTERFEJS):(5 registara)
//                  
/*****************************************************************************/
typedef union{
    struct {
            _IO STSEL:    1;
            _IO PDSEL:    2;
            _IO BRGH:     1;
            _IO URXINV:   1;
            _IO ABAUD:    1;
            _IO LPBACK:   1;
            _IO WAKE:     1;
            _IO UEN:      2;
            _IO :         1;
            _IO RTSMD:    1;
            _IO IREN:     1;
            _IO USIDL:    1;
            _IO :         1;
            _IO UARTEN:   1;
             };
    struct {
            _IO :         1;
            _IO PDSEL0:   1;
            _IO PDSEL1:   1;
            _IO :         5;
            _IO UEN0:     1;
            _IO UEN1:     1;
            };
}U1MODEbits;

#define U1MODE   ((U1MODEbits*)(U1MODE_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO URXDA:     1;
            _IO OERR:      1;
            _IO FERR:      1;
            _IO PERR:      1;
            _IO RIDLE:     1;
            _IO ADDEN:     1;
            _IO URXISEL:   2;
            _IO TRMT:      1;
            _IO UTXBF:     1;
            _IO UTXEN:     1;
            _IO UTXBRK:    1;
            _IO :          1;
            _IO UTXISEL0:  1;
            _IO UTXINV:    1;
            _IO UTXISEL1:  1;
             };
    struct {
            _IO :          6;
            _IO URXISEL0:  1;
            _IO URXISEL1:  1;
           };
}U1STAbits;

#define U1STA   ((U1STAbits*)(U1STA_BASE))
/*****************************************************************************/
typedef union{
   struct{
          _IO UTXREG: 9;
         };
  struct{
         _IO UTXREG0:   1;
         _IO UTXREG1:   1;
         _IO UTXREG2:   1;
         _IO UTXREG3:   1;
         _IO UTXREG4:   1;
         _IO UTXREG5:   1;
         _IO UTXREG6:   1;
         _IO UTXREG7:   1;
         _IO UTXREG8:   1;
          };
}U1TXREGbits;

#define U1TXREG   ((U1TXREGbits*)(U1TXREG_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO URXREG:   9;
         };
  struct{
         _IO URXREG0:    1;
         _IO URXREG1:    1;
         _IO URXREG2:    1;
         _IO URXREG3:    1;
         _IO URXREG4:    1;
         _IO URXREG5:    1;
         _IO URXREG6:    1;
         _IO URXREG7:    1;
         _IO URXREG8:    1;
         };
}U1RXREGbits;

#define U1RXREG   ((U1RXREGbits*)(U1RXREG_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO UBRG:16;
    };
  }U1BRGbits;

#define U1BRG   ((U1BRGbits*)(U1BRG_BASE))
/*****************************************************************************/
//                     USART2 MODUL (SERIJSKI INTERFEJS):(5 registara)
//                  
/*****************************************************************************/
typedef union{
    struct {
            _IO STSEL:      1;
            _IO PDSEL:      2;
            _IO BRGH:       1;
            _IO URXINV:     1;
            _IO ABAUD:      1;
            _IO LPBACK:     1;
            _IO WAKE:       1;
            _IO UEN:        2;
            _IO :           1;
            _IO RTSMD:      1;
            _IO IREN:       1;
            _IO USIDL:      1;
            _IO :           1;
            _IO UARTEN:     1;
           };
    struct {
            _IO :           1;
            _IO PDSEL0:     1;
            _IO PDSEL1:     1;
            _IO :           5;
            _IO UEN0:       1;
            _IO UEN1:       1;
           };
}U2MODEbits;

#define U2MODE   ((U2MODEbits*)(U2MODE_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO URXDA:      1;
            _IO OERR:       1;
            _IO FERR:       1;
            _IO PERR:       1;
            _IO RIDLE:      1;
            _IO ADDEN:      1;
            _IO URXISEL:    2;
            _IO TRMT:       1;
            _IO UTXBF:      1;
            _IO UTXEN:      1;
            _IO UTXBRK:     1;
            _IO :           1;
            _IO UTXISEL0:   1;
            _IO UTXINV:     1;
            _IO UTXISEL1:   1;
             };
    struct {
            _IO :           6;
            _IO URXISEL0:   1;
            _IO URXISEL1:   1;
            };
}U2STAbits;

#define U2STA   ((U2STAbits*)(U2STA_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO UTXREG:        9;
         };
  struct{
         _IO UTXREG0:       1;
         _IO UTXREG1:       1;
         _IO UTXREG2:       1;
         _IO UTXREG3:       1;
         _IO UTXREG4:       1;
         _IO UTXREG5:       1;
         _IO UTXREG6:       1;
         _IO UTXREG7:       1;
         _IO UTXREG8:       1;
          };
}U2TXREGbits;

#define U2TXREG   ((U2TXREGbits*)(U2TXREG_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO URXREG:         9;
         };
  struct{
         _IO URXREG0:        1;
         _IO URXREG1:        1;
         _IO URXREG2:        1;
         _IO URXREG3:        1;
         _IO URXREG4:        1;
         _IO URXREG5:        1;
         _IO URXREG6:        1;
         _IO URXREG7:        1;
         _IO URXREG8:        1;
          };
}U2RXREGbits;

#define U2RXREG   ((U2RXREGbits*)(U2RXREG_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO UBRG:16;
    };
  }U2BRGbits;

#define U2BRG   ((U2BRGbits*)(U2BRG_BASE))
/*****************************************************************************/
//                     SPI1 MODUL (SERIJSKI INTERFEJS):(4 registra)
//                  
/*****************************************************************************/
typedef union{
  struct{
         _IO SPIRBF:     1;
         _IO SPITBF:     1;
         _IO :           4;
         _IO SPIROV:     1;
         _IO :           6;
         _IO SPISIDL:    1;
         _IO :           1;
         _IO SPIEN:      1;
         };
}SPI1STATbits;

#define SPI1STAT   ((SPI1STATbits*)(SPI1STAT_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO PPRE:     2;
            _IO SPRE:     3;
            _IO MSTEN:    1;
            _IO CKP:      1;
            _IO SSEN:     1;
            _IO CKE:      1;
            _IO SMP:      1;
            _IO MODE16:   1;
            _IO DISSDO:   1;
            _IO DISSCK:   1;
            };
    struct {
            _IO PPRE0:    1;
            _IO PPRE1:    1;
            _IO SPRE0:    1;
            _IO SPRE1:    1;
            _IO SPRE2:    1;
            };
}SPI1CON1bits;

#define SPI1CON1   ((SPI1CON1bits*)(SPI1CON1_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO :         1;
            _IO FRMDLY:   1;
            _IO :        11;
            _IO FRMPOL:   1;
            _IO SPIFSD:   1;
            _IO FRMEN:    1;
             };
    struct {
            _IO :        14;
            _IO FRMSYNC:  1;
            };
}SPI1CON2bits;

#define SPI1CON2   ((SPI1CON2bits*)(SPI1CON2_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO SPIBUF:          16;
    };
  }SPI1BUFbits;

#define SPI1BUF   ((SPI1BUFbits*)(SPI1BUF_BASE))
/*****************************************************************************/
//                     SPI2 MODUL (SERIJSKI INTERFEJS):(4 registra)
//                  
/*****************************************************************************/
typedef union{
  struct{
         _IO SPIRBF:      1;
         _IO SPITBF:      1;
         _IO :            4;
         _IO SPIROV:      1;
         _IO :            6;
         _IO SPISIDL:     1;
         _IO :            1;
         _IO SPIEN:       1;
         };
}SPI2STATbits;

#define SPI2STAT   ((SPI2STATbits*)(SPI2STAT_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO PPRE:     2;
            _IO SPRE:     3;
            _IO MSTEN:    1;
            _IO CKP:      1;
            _IO SSEN:     1;
            _IO CKE:      1;
            _IO SMP:      1;
            _IO MODE16:   1;
            _IO DISSDO:   1;
            _IO DISSCK:   1;
            };
    struct {
            _IO PPRE0:    1;
            _IO PPRE1:    1;
            _IO SPRE0:    1;
            _IO SPRE1:    1;
            _IO SPRE2:    1;
            };
}SPI2CON1bits;

#define SPI2CON1   ((SPI2CON1bits*)(SPI2CON1_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO:           1;
            _IO FRMDLY:    1;
            _IO:          11;
            _IO FRMPOL:    1;
            _IO SPIFSD:    1;
            _IO FRMEN:     1;
           };
    struct {
            _IO:          14;
            _IO FRMSYNC:   1;
           };
}SPI2CON2bits;

#define SPI2CON2   ((SPI2CON2bits*)(SPI2CON2_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO SPIBUF:            16;
    };
  }SPI2BUFbits;

#define SPI2BUF   ((SPI2BUFbits*)(SPI2BUF_BASE))
/*****************************************************************************/
//                           ADC1 MODUL:(11 registara)
//                  (MODUL ANALOGNO-DIGITALNOG PRETVARACA)
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO ADCBUF0:            16;
    };
  }ADC1BUF0bits;

#define ADC1BUF0   ((ADC1BUF0bits*)(ADC1BUF0_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO DONE:         1;
            _IO SAMP:         1;
            _IO ASAM:         1;
            _IO SIMSAM:       1;
            _IO :             1;
            _IO SSRC:         3;
            _IO FORM:         2;
            _IO AD12B:        1;
            _IO :             1;
            _IO ADDMABM:      1;
            _IO ADSIDL:       1;
            _IO :             1;
            _IO ADON:         1;
             };
    struct {
            _IO :             5;
            _IO SSRC0:        1;
            _IO SSRC1:        1;
            _IO SSRC2:        1;
            _IO FORM0:        1;
            _IO FORM1:        1;
           };
}AD1CON1bits;

#define AD1CON1   ((AD1CON1bits*)(AD1CON1_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO ALTS:          1;
            _IO BUFM:          1;
            _IO SMPI:          4;
            _IO :              1;
            _IO BUFS:          1;
            _IO CHPS:          2;
            _IO CSCNA:         1;
            _IO :              2;
            _IO VCFG:          3;
            };
    struct {
            _IO :              2;
            _IO SMPI0:         1;
            _IO SMPI1:         1;
            _IO SMPI2:         1;
            _IO SMPI3:         1;
            _IO :              2;
            _IO CHPS0:         1;
            _IO CHPS1:         1;
            _IO :              3;
            _IO VCFG0:         1;
            _IO VCFG1:         1;
            _IO VCFG2:         1;
             };
}AD1CON2bits;

#define AD1CON2   ((AD1CON2bits*)(AD1CON2_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO ADCS:          8;
            _IO SAMC:          5;
            _IO :              2;
            _IO ADRC:          1;
            };
    struct {
           _IO ADCS0:          1;
           _IO ADCS1:          1;
           _IO ADCS2:          1;
           _IO ADCS3:          1;
           _IO ADCS4:          1;
           _IO ADCS5:          1;
           _IO ADCS6:          1;
           _IO ADCS7:          1;
           _IO SAMC0:          1;
           _IO SAMC1:          1;
           _IO SAMC2:          1;
           _IO SAMC3:          1;
           _IO SAMC4:          1;
            };
}AD1CON3bits;

#define AD1CON3   ((AD1CON3bits*)(AD1CON3_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO DMABL:         3;
            };
    struct {
            _IO DMABL0:        1;
            _IO DMABL1:        1;
            _IO DMABL2:        1;
           };
}AD1CON4bits;

#define AD1CON4   ((AD1CON4bits*)(AD1CON4_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO CH123SA:       1;
            _IO CH123NA:       2;
            _IO :              5;
            _IO CH123SB:       1;
            _IO CH123NB:       2;
            };
    struct {
            _IO :              1;
            _IO CH123NA0:      1;
            _IO CH123NA1:      1;
            _IO :              6;
            _IO CH123NB0:      1;
            _IO CH123NB1:      1;
            };
}AD1CHS123bits;

#define AD1CHS123   ((AD1CHS123bits*)(AD1CHS123_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO CH0SA:         5;
            _IO :              2;
            _IO CH0NA:         1;
            _IO CH0SB:         5;
            _IO :              2;
            _IO CH0NB:         1;
            };
    struct {
           _IO CH0SA0:         1;
           _IO CH0SA1:         1;
           _IO CH0SA2:         1;
           _IO CH0SA3:         1;
           _IO CH0SA4:         1;
                 _IO:          3;
           _IO CH0SB0:         1;
           _IO CH0SB1:         1;
           _IO CH0SB2:         1;
           _IO CH0SB3:         1;
           _IO CH0SB4:         1;
             };
}AD1CHS0bits;

#define AD1CHS0   ((AD1CHS0bits*)(AD1CHS0_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO PCFG:            16;
         };
  struct{
         _IO PCFG0:            1;
         _IO PCFG1:            1;
         _IO PCFG2:            1;
         _IO PCFG3:            1;
         _IO PCFG4:            1;
         _IO PCFG5:            1;
         _IO PCFG6:            1;
         _IO PCFG7:            1;
         _IO PCFG8:            1;
         _IO PCFG9:            1;
         _IO PCFG10:           1;
         _IO PCFG11:           1;
         _IO PCFG12:           1;
         _IO PCFG13:           1;
         _IO PCFG14:           1;
         _IO PCFG15:           1;
           };
}AD1PCFGLbits;

#define AD1PCFGL   ((AD1PCFGLbits*)(AD1PCFGL_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO PCFG:            16;
         };
  struct{
         _IO PCFG16:           1;
         _IO PCFG17:           1;
         _IO PCFG18:           1;
         _IO PCFG19:           1;
         _IO PCFG20:           1;
         _IO PCFG21:           1;
         _IO PCFG22:           1;
         _IO PCFG23:           1;
         _IO PCFG24:           1;
         _IO PCFG25:           1;
         _IO PCFG26:           1;
         _IO PCFG27:           1;
         _IO PCFG28:           1;
         _IO PCFG29:           1;
         _IO PCFG30:           1;
         _IO PCFG31:           1;
           };
}AD1PCFGHbits;

#define AD1PCFGH   ((AD1PCFGHbits*)(AD1PCFGH_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO CSSL:            16;
         };
  struct{
         _IO CSS0:             1;
         _IO CSS1:             1;
         _IO CSS2:             1;
         _IO CSS3:             1;
         _IO CSS4:             1;
         _IO CSS5:             1;
         _IO CSS6:             1;
         _IO CSS7:             1;
         _IO CSS8:             1;
         _IO CSS9:             1;
         _IO CSS10:            1;
         _IO CSS11:            1;
         _IO CSS12:            1;
         _IO CSS13:            1;
         _IO CSS14:            1;
         _IO CSS15:            1;
         };
}AD1CSSLbits;

#define AD1CSSL   ((AD1CSSLbits*)(AD1CSSL_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO CSSH:            16;
         };
  struct{
         _IO CSS16:            1;
         _IO CSS17:            1;
         _IO CSS18:            1;
         _IO CSS19:            1;
         _IO CSS20:            1;
         _IO CSS21:            1;
         _IO CSS22:            1;
         _IO CSS23:            1;
         _IO CSS24:            1;
         _IO CSS25:            1;
         _IO CSS26:            1;
         _IO CSS27:            1;
         _IO CSS28:            1;
         _IO CSS29:            1;
         _IO CSS30:            1;
         _IO CSS31:            1;
         };
}AD1CSSHbits;

#define AD1CSSH   ((AD1CSSHbits*)(AD1CSSH_BASE))
/*****************************************************************************/
//                             DMA MODUL:(51 registar)
//                     (MODUL ZA DIREKTNI PRISTUP MEMORIJI)
/*****************************************************************************/
typedef union{
    struct {
            _IO MODE:          2;
            _IO :              2;
            _IO AMODE:         2;
            _IO :              5;
            _IO NULLW:         1;
            _IO HALF:          1;
            _IO DIR:           1;
            _IO SIZE:          1;
            _IO CHEN:          1;
            };
    struct {
           _IO MODE0:          1;
           _IO MODE1:          1;
           _IO :               2;
           _IO AMODE0:         1;
           _IO AMODE1:         1;
            };
}DMA0CONbits;

#define DMA0CON   ((DMA0CONbits*)(DMA0CON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO IRQSEL:        7;
            _IO :              8;
            _IO FORCE:         1;
           };
    struct {
            _IO IRQSEL0:       1;
            _IO IRQSEL1:       1;
            _IO IRQSEL2:       1;
            _IO IRQSEL3:       1;
            _IO IRQSEL4:       1;
            _IO IRQSEL5:       1;
            _IO IRQSEL6:       1;
            };
}DMA0REQbits;

#define DMA0REQ   ((DMA0REQbits*)(DMA0REQ_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMASTA:               16;
    };
  }DMA0STAbits;

#define DMA0STA   ((DMA0STAbits*)(DMA0STA_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMASTB:                16;
    };
  }DMA0STBbits;

#define DMA0STB   ((DMA0STBbits*)(DMA0STB_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMAPAD:                16;
    };
  }DMA0PADbits;

#define DMA0PAD   ((DMA0PADbits*)(DMA0PAD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMACNT:              10;
    };
  }DMA0CNTbits;

#define DMA0CNT   ((DMA0CNTbits*)(DMA0CNT_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO MODE:          2;
            _IO :              2;
            _IO AMODE:         2;
            _IO :              5;
            _IO NULLW:         1;
            _IO HALF:          1;
            _IO DIR:           1;
            _IO SIZE:          1;
            _IO CHEN:          1;
             };
    struct {
            _IO MODE0:         1;
            _IO MODE1:         1;
            _IO :              2;
            _IO AMODE0:        1;
            _IO AMODE1:        1;
            };
}DMA1CONbits;

#define DMA1CON   ((DMA1CONbits*)(DMA1CON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO IRQSEL:        7;
            _IO :              8;
            _IO FORCE:         1;
            };
    struct {
            _IO IRQSEL0:       1;
            _IO IRQSEL1:       1;
            _IO IRQSEL2:       1;
            _IO IRQSEL3:       1;
            _IO IRQSEL4:       1;
            _IO IRQSEL5:       1;
            _IO IRQSEL6:       1;
            };
}DMA1REQbits;

#define DMA1REQ   ((DMA1REQbits*)(DMA1REQ_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMASTA:              16;
    };
  }DMA1STAbits;

#define DMA1STA   ((DMA1STAbits*)(DMA1STA_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMASTB:              16;
    };
  }DMA1STBbits;

#define DMA1STB   ((DMA1STBbits*)(DMA1STB_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMAPAD:             16;
    };
  }DMA1PADbits;

#define DMA1PAD   ((DMA1PADbits*)(DMA1PAD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMACNT:              10;
    };
  }DMA1CNTbits;

#define DMA1CNT   ((DMA1CNTbits*)(DMA1CNT_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO MODE:          2;
            _IO :              2;
            _IO AMODE:         2;
            _IO :              5;
            _IO NULLW:         1;
            _IO HALF:          1;
            _IO DIR:           1;
            _IO SIZE:          1;
            _IO CHEN:          1;
            };
    struct {
           _IO MODE0:          1;
           _IO MODE1:          1;
                 _IO:          2;
          _IO AMODE0:          1;
          _IO AMODE1:          1;
           };
}DMA2CONbits;

#define DMA2CON   ((DMA2CONbits*)(DMA2CON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO IRQSEL:        7;
            _IO :              8;
            _IO FORCE:         1;
            };
    struct {
            _IO IRQSEL0:       1;
            _IO IRQSEL1:       1;
            _IO IRQSEL2:       1;
            _IO IRQSEL3:       1;
            _IO IRQSEL4:       1;
            _IO IRQSEL5:       1;
            _IO IRQSEL6:       1;
            };
}DMA2REQbits;

#define DMA2REQ   ((DMA2REQbits*)(DMA2REQ_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMASTA:             16;
    };
  }DMA2STAbits;

#define DMA2STA   ((DMA2STAbits*)(DMA2STA_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMASTB:                16;
    };
  }DMA2STBbits;

#define DMA2STB   ((DMA2STBbits*)(DMA2STB_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMAPAD:             16;
    };
  }DMA2PADbits;

#define DMA2PAD   ((DMA2PADbits*)(DMA2PAD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMACNT:             10;
    };
  }DMA2CNTbits;

#define DMA2CNT   ((DMA2CNTbits*)(DMA2CNT_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO MODE:         2;
            _IO :             2;
            _IO AMODE:        2;
            _IO :             5;
            _IO NULLW:        1;
            _IO HALF:         1;
            _IO DIR:          1;
            _IO SIZE:         1;
            _IO CHEN:         1;
            };
    struct {
           _IO MODE0:         1;
           _IO MODE1:         1;
           _IO :              2;
           _IO AMODE0:        1;
           _IO AMODE1:        1;
           };
}DMA3CONbits;

#define DMA3CON   ((DMA3CONbits*)(DMA3CON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO IRQSEL:       7;
            _IO :             8;
            _IO FORCE:        1;
            };
    struct {
            _IO IRQSEL0:      1;
            _IO IRQSEL1:      1;
            _IO IRQSEL2:      1;
            _IO IRQSEL3:      1;
            _IO IRQSEL4:      1;
            _IO IRQSEL5:      1;
            _IO IRQSEL6:      1;
            };
}DMA3REQbits;

#define DMA3REQ   ((DMA3REQbits*)(DMA3REQ_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMASTA:             16;
    };
  }DMA3STAbits;

#define DMA3STA   ((DMA3STAbits*)(DMA3STA_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMASTB:             16;
    };
  }DMA3STBbits;

#define DMA3STB   ((DMA3STBbits*)(DMA3STB_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMAPAD:              16;
    };
  }DMA3PADbits;

#define DMA3PAD   ((DMA3PADbits*)(DMA3PAD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMACNT:               10;
    };
  }DMA3CNTbits;

#define DMA3CNT   ((DMA3CNTbits*)(DMA3CNT_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO MODE:           2;
            _IO :               2;
            _IO AMODE:          2;
            _IO :               5;
            _IO NULLW:          1;
            _IO HALF:           1;
            _IO DIR:            1;
            _IO SIZE:           1;
            _IO CHEN:           1;
             };
    struct {
            _IO MODE0:          1;
            _IO MODE1:          1;
            _IO :               2;
            _IO AMODE0:         1;
            _IO AMODE1:         1;
            };
}DMA4CONbits;

#define DMA4CON   ((DMA4CONbits*)(DMA4CON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO IRQSEL:         7;
            _IO :               8;
            _IO FORCE:          1;
            };
    struct {
            _IO IRQSEL0:        1;
            _IO IRQSEL1:        1;
            _IO IRQSEL2:        1;
            _IO IRQSEL3:        1;
            _IO IRQSEL4:        1;
            _IO IRQSEL5:        1;
            _IO IRQSEL6:        1;
            };
}DMA4REQbits;

#define DMA4REQ   ((DMA4REQbits*)(DMA4REQ_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMASTA:                16;
    };
  }DMA4STAbits;

#define DMA4STA   ((DMA4STAbits*)(DMA4STA_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMASTB:                16;
    };
  }DMA4STBbits;

#define DMA4STB   ((DMA4STBbits*)(DMA4STB_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMAPAD:                16;
    };
  }DMA4PADbits;

#define DMA4PAD   ((DMA4PADbits*)(DMA4PAD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO DMACNT:                10;
    };
  }DMA4CNTbits;

#define DMA4CNT   ((DMA4CNTbits*)(DMA4CNT_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO MODE:            2;
            _IO :                2;
            _IO AMODE:           2;
            _IO :                5;
            _IO NULLW:           1;
            _IO HALF:            1;
            _IO DIR:             1;
            _IO SIZE:            1;
            _IO CHEN:            1;
             };
    struct {
           _IO MODE0:            1;
           _IO MODE1:            1;
                _IO:             2;
          _IO AMODE0:            1;
          _IO AMODE1:            1;
           };
}DMA5CONbits;

#define DMA5CON   ((DMA5CONbits*)(DMA5CON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO IRQSEL:          7;
            _IO:                 8;
            _IO FORCE:           1;
            };
    struct {
            _IO IRQSEL0:         1;
            _IO IRQSEL1:         1;
            _IO IRQSEL2:         1;
            _IO IRQSEL3:         1;
            _IO IRQSEL4:         1;
            _IO IRQSEL5:         1;
            _IO IRQSEL6:         1;
            };
}DMA5REQbits;

#define DMA5REQ   ((DMA5REQbits*)(DMA5REQ_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMASTA:                 16;
    };
  }DMA5STAbits;

#define DMA5STA   ((DMA5STAbits*)(DMA5STA_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMASTB:                 16;
    };
  }DMA5STBbits;

#define DMA5STB   ((DMA5STBbits*)(DMA5STB_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMAPAD:                  16;
    };
  }DMA5PADbits;

#define DMA5PAD   ((DMA5PADbits*)(DMA5PAD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMACNT:                 10;
    };
  }DMA5CNTbits;

#define DMA5CNT   ((DMA5CNTbits*)(DMA5CNT_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO MODE:            2;
            _IO:                 2;
            _IO AMODE:           2;
            _IO:                 5;
            _IO NULLW:           1;
            _IO HALF:            1;
            _IO DIR:             1;
            _IO SIZE:            1;
            _IO CHEN:            1;
             };
    struct {
            _IO MODE0:           1;
            _IO MODE1:           1;
            _IO:                 2;
            _IO AMODE0:          1;
           _IO AMODE1:           1;
            };
}DMA6CONbits;

#define DMA6CON   ((DMA6CONbits*)(DMA6CON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO IRQSEL:          7;
            _IO:                 8;
            _IO FORCE:           1;
           };
    struct {
            _IO IRQSEL0:         1;
            _IO IRQSEL1:         1;
            _IO IRQSEL2:         1;
            _IO IRQSEL3:         1;
            _IO IRQSEL4:         1;
            _IO IRQSEL5:         1;
            _IO IRQSEL6:         1;
            };
}DMA6REQbits;

#define DMA6REQ   ((DMA6REQbits*)(DMA6REQ_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMASTA:                16;
    };
  }DMA6STAbits;

#define DMA6STA   ((DMA6STAbits*)(DMA6STA_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMASTB:                 16;
    };
  }DMA6STBbits;

#define DMA6STB   ((DMA6STBbits*)(DMA6STB_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMAPAD:                 16;
    };
  }DMA6PADbits;

#define DMA6PAD   ((DMA6PADbits*)(DMA6PAD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMACNT:                 10;
    };
  }DMA6CNTbits;

#define DMA6CNT   ((DMA6CNTbits*)(DMA6CNT_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO MODE:            2;
            _IO:                 2;
            _IO AMODE:           2;
            _IO :                5;
            _IO NULLW:           1;
            _IO HALF:            1;
            _IO DIR:             1;
            _IO SIZE:            1;
            _IO CHEN:            1;
             };
    struct {
            _IO MODE0:           1;
            _IO MODE1:           1;
            _IO:                 2;
            _IO AMODE0:          1;
            _IO AMODE1:          1;
             };
}DMA7CONbits;

#define DMA7CON   ((DMA7CONbits*)(DMA7CON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO IRQSEL:          7;
            _IO:                 8;
            _IO FORCE:           1;
            };
    struct {
            _IO IRQSEL0:         1;
            _IO IRQSEL1:         1;
            _IO IRQSEL2:         1;
            _IO IRQSEL3:         1;
            _IO IRQSEL4:         1;
            _IO IRQSEL5:         1;
            _IO IRQSEL6:         1;
            };
}DMA7REQbits;

#define DMA7REQ   ((DMA7REQbits*)(DMA7REQ_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMASTA:                 16;
    };
  }DMA7STAbits;

#define DMA7STA   ((DMA7STAbits*)(DMA7STA_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMASTB:               16;
    };
  }DMA7STBbits;

#define DMA7STB   ((DMA7STBbits*)(DMA7STB_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMAPAD:                16;
    };
  }DMA7PADbits;

#define DMA7PAD   ((DMA7PADbits*)(DMA7PAD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DMACNT:                 10;
    };
  }DMA7CNTbits;

#define DMA7CNT   ((DMA7CNTbits*)(DMA7CNT_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO XWCOL0:           1;
            _IO XWCOL1:           1;
            _IO XWCOL2:           1;
            _IO XWCOL3:           1;
            _IO XWCOL4:           1;
            _IO XWCOL5:           1;
            _IO XWCOL6:           1;
            _IO XWCOL7:           1;
            _IO PWCOL0:           1;
            _IO PWCOL1:           1;
            _IO PWCOL2:           1;
            _IO PWCOL3:           1;
            _IO PWCOL4:           1;
            _IO PWCOL5:           1;
            _IO PWCOL6:           1;
            _IO PWCOL7:           1;
              };
    struct {
            _IO XWCOL:            8;
            _IO PWCOL:            8;
            };
}DMACS0bits;

#define DMACS0   ((DMACS0bits*)(DMACS0_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO PPST0:            1;
            _IO PPST1:            1;
            _IO PPST2:            1;
            _IO PPST3:            1;
            _IO PPST4:            1;
            _IO PPST5:            1;
            _IO PPST6:            1;
            _IO PPST7:            1;
            _IO LSTCH:            4;
             };
    struct {
            _IO PPST:             8;
            _IO LSTCH0:           1;
            _IO LSTCH1:           1;
            _IO LSTCH2:           1;
            _IO LSTCH3:           1;
            };
}DMACS1bits;

#define DMACS1   ((DMACS1bits*)(DMACS1_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO DSADRR:                  16;
    };
  }DSADRbits;

#define DSADR   ((DSADRbits*)(DSADR_BASE))
/*****************************************************************************/
//                     GPIO (PORT) REGISTRI:(21 registar)
//                     (KONTROLA DIGITALNIH I/O PINOVA)
/*****************************************************************************/
typedef union{
  struct{
         _IO TRIS:               16;          
         };
  struct{
         _IO TRISB0:              1;
         _IO TRISB1:              1;
         _IO TRISB2:              1;
         _IO TRISB3:              1;
         _IO TRISB4:              1;
         _IO TRISB5:              1;
         _IO TRISB6:              1;
         _IO TRISB7:              1;
         _IO TRISB8:              1;
         _IO TRISB9:              1;
         _IO TRISB10:             1;
         _IO TRISB11:             1;
         _IO TRISB12:             1;
         _IO TRISB13:             1;
         _IO TRISB14:             1;
         _IO TRISB15:             1;
          };
}TRISBbits;

#define TRISB   ((TRISBbits*)(TRISB_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO PORT:               16;      
         };
  struct{
         _IO RB0:                 1;
         _IO RB1:                 1;
         _IO RB2:                 1;
         _IO RB3:                 1;
         _IO RB4:                 1;
         _IO RB5:                 1;
         _IO RB6:                 1;
         _IO RB7:                 1;
         _IO RB8:                 1;
         _IO RB9:                 1;
         _IO RB10:                1;
         _IO RB11:                1;
         _IO RB12:                1;
         _IO RB13:                1;
         _IO RB14:                1;
         _IO RB15:                1;
          };
}PORTBbits;

#define PORTB   ((PORTBbits*)(PORTB_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO LAT:                 16;      
         };
  struct{
         _IO LB0:                  1;
         _IO LB1:                  1;
         _IO LB2:                  1;
         _IO LB3:                  1;
         _IO LB4:                  1;
         _IO LB5:                  1;
         _IO LB6:                  1;
         _IO LB7:                  1;
         _IO LB8:                  1;
         _IO LB9:                  1;
         _IO LB10:                 1;
         _IO LB11:                 1;
         _IO LB12:                 1;
         _IO LB13:                 1;
         _IO LB14:                 1;
         _IO LB15:                 1;
         };
  struct{
         _IO LATB0:                1;
         _IO LATB1:                1;
         _IO LATB2:                1;
         _IO LATB3:                1;
         _IO LATB4:                1;
         _IO LATB5:                1;
         _IO LATB6:                1;
         _IO LATB7:                1;
         _IO LATB8:                1;
         _IO LATB9:                1;
         _IO LATB10:               1;
         _IO LATB11:               1;
         _IO LATB12:               1;
         _IO LATB13:               1;
         _IO LATB14:               1;
         _IO LATB15:               1;
           };
}LATBbits;

#define LATB   ((LATBbits*)(LATB_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO:                    12;
         _IO TRIS:                4;      
        };
  struct{
         _IO:                    12;
         _IO TRISC12:             1;
         _IO TRISC13:             1;
         _IO TRISC14:             1;
         _IO TRISC15:             1;
          };
}TRISCbits;

#define TRISC   ((TRISCbits*)(TRISC_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO:                    12;
         _IO PORT:                4;      
         };
  struct{
         _IO:                    12;
      _IO RC12:                   1;
      _IO RC13:                   1;
      _IO RC14:                   1;
      _IO RC15:                   1;
         };
}PORTCbits;

#define PORTC   ((PORTCbits*)(PORTC_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO:                    12;
         _IO LAT:                 4;      
        };
  struct{
         _IO:                    12;
         _IO LC12:                1;
         _IO LC13:                1;
         _IO LC14:                1;
         _IO LC15:                1;         
        };
  struct{
         _IO:                    12;
         _IO LATC12:              1;
         _IO LATC13:              1;
         _IO LATC14:              1;
         _IO LATC15:              1;
         };
}LATCbits;

#define LATC   ((LATCbits*)(LATC_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO TRIS:               12;      
         };
  struct{
         _IO TRISD0:              1;
         _IO TRISD1:              1;
         _IO TRISD2:              1;
         _IO TRISD3:              1;
         _IO TRISD4:              1;
         _IO TRISD5:              1;
         _IO TRISD6:              1;
         _IO TRISD7:              1;
         _IO TRISD8:              1;
         _IO TRISD9:              1;
         _IO TRISD10:             1;
         _IO TRISD11:             1;
        };
}TRISDbits;

#define TRISD   ((TRISDbits*)(TRISD_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO PORT:               12;      
         };
  struct{
         _IO RD0:                 1;
         _IO RD1:                 1;
         _IO RD2:                 1;
         _IO RD3:                 1;
         _IO RD4:                 1;
         _IO RD5:                 1;
         _IO RD6:                 1;
         _IO RD7:                 1;
         _IO RD8:                 1;
         _IO RD9:                 1;
         _IO RD10:                1;
         _IO RD11:                1;
          };
}PORTDbits;

#define PORTD   ((PORTDbits*)(PORTD_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO LAT:                12;      
         };
  struct{
         _IO LD0:                 1;
         _IO LD1:                 1;
         _IO LD2:                 1;
         _IO LD3:                 1;
         _IO LD4:                 1;
         _IO LD5:                 1;
         _IO LD6:                 1;
         _IO LD7:                 1;
         _IO LD8:                 1;
         _IO LD9:                 1;
         _IO LD10:                1;
         _IO LD11:                1;
         };
  struct{
         _IO LATD0:               1;
         _IO LATD1:               1;
         _IO LATD2:               1;
         _IO LATD3:               1;
         _IO LATD4:               1;
         _IO LATD5:               1;
         _IO LATD6:               1;
         _IO LATD7:               1;
         _IO LATD8:               1;
         _IO LATD9:               1;
         _IO LATD10:              1;
         _IO LATD11:              1;
          };
}LATDbits;

#define LATD   ((LATDbits*)(LATD_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO ODC:                12;      
         };
  struct{
         _IO ODCD0:               1;
         _IO ODCD1:               1;
         _IO ODCD2:               1;
         _IO ODCD3:               1;
         _IO ODCD4:               1;
         _IO ODCD5:               1;
         _IO ODCD6:               1;
         _IO ODCD7:               1;
         _IO ODCD8:               1;
         _IO ODCD9:               1;
         _IO ODCD10:              1;
         _IO ODCD11:              1;
          };
}ODCDbits;

#define ODCD   ((ODCDbits*)(ODCD_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO TRIS:                8;      
         };
  struct{
         _IO TRISE0:              1;
         _IO TRISE1:              1;
         _IO TRISE2:              1;
         _IO TRISE3:              1;
         _IO TRISE4:              1;
         _IO TRISE5:              1;
         _IO TRISE6:              1;
         _IO TRISE7:              1;
          };
}TRISEbits;

#define TRISE   ((TRISEbits*)(TRISE_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO PORT:                8;      
         };
  struct{
         _IO RE0:                 1;
         _IO RE1:                 1;
         _IO RE2:                 1;
         _IO RE3:                 1;
         _IO RE4:                 1;
         _IO RE5:                 1;
         _IO RE6:                 1;
         _IO RE7:                 1;
         };
}PORTEbits;

#define PORTE   ((PORTEbits*)(PORTE_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO LAT:                 8;      
         };
  struct{
         _IO LE0:                 1;
         _IO LE1:                 1;
         _IO LE2:                 1;
         _IO LE3:                 1;
         _IO LE4:                 1;
         _IO LE5:                 1;
         _IO LE6:                 1;
         _IO LE7:                 1;
         };
  struct{
         _IO LATE0:               1;
         _IO LATE1:               1;
         _IO LATE2:               1;
         _IO LATE3:               1;
         _IO LATE4:               1;
         _IO LATE5:               1;
         _IO LATE6:               1;
         _IO LATE7:               1;
         };
}LATEbits;

#define LATE   ((LATEbits*)(LATE_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO TRIS:                7;      
         };
  struct{
         _IO TRISF0:              1;
         _IO TRISF1:              1;
         _IO TRISF2:              1;
         _IO TRISF3:              1;
         _IO TRISF4:              1;
         _IO TRISF5:              1;
         _IO TRISF6:              1;
         };
}TRISFbits;

#define TRISF   ((TRISFbits*)(TRISF_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO PORT:                7;      
         };
  struct{
         _IO RF0:                 1;
         _IO RF1:                 1;
         _IO RF2:                 1;
         _IO RF3:                 1;
         _IO RF4:                 1;
         _IO RF5:                 1;
         _IO RF6:                 1;
         };
}PORTFbits;

#define PORTF   ((PORTFbits*)(PORTF_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO LAT:                 7;      
         };
  struct{
         _IO LF0:                 1;
         _IO LF1:                 1;
         _IO LF2:                 1;
         _IO LF3:                 1;
         _IO LF4:                 1;
         _IO LF5:                 1;
         _IO LF6:                 1;       
         };
  struct{
         _IO LATF0:               1;
         _IO LATF1:               1;
         _IO LATF2:               1;
         _IO LATF3:               1;
         _IO LATF4:               1;
         _IO LATF5:               1;
         _IO LATF6:               1;
         };
}LATFbits;

#define LATF   ((LATFbits*)(LATF_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO ODC:                 7;      
         };
  struct{
         _IO ODCF0:               1;
         _IO ODCF1:               1;
         _IO ODCF2:               1;
         _IO ODCF3:               1;
         _IO ODCF4:               1;
         _IO ODCF5:               1;
         _IO ODCF6:               1;
         };
}ODCFbits;

#define ODCF   ((ODCFbits*)(ODCF_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO:                     2;
         _IO TRISL:               2;  
         _IO:                     2;
         _IO TRISH:               4;
         };
  struct{
         _IO:                     2;
         _IO TRISG2:              1;
         _IO TRISG3:              1;
         _IO:                     2;
         _IO TRISG6:              1;
         _IO TRISG7:              1;
         _IO TRISG8:              1;
         _IO TRISG9:              1;
         };
}TRISGbits;

#define TRISG   ((TRISGbits*)(TRISG_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO:                     2;
         _IO PORTL:               2;
         _IO :                    2;
         _IO PORTH:               4;
         };
  struct{
         _IO:                     2;
         _IO RG2:                 1;
         _IO RG3:                 1;
         _IO:                     2;
         _IO RG6:                 1;
         _IO RG7:                 1;
         _IO RG8:                 1;
         _IO RG9:                 1;
         };
}PORTGbits;

#define PORTG   ((PORTGbits*)(PORTG_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO:                     2;
         _IO LATL:                2;
         _IO:                     2;
         _IO LATH:                4;
         };
  struct{
         _IO:                     2;
         _IO LG2:                 1;
         _IO LG3:                 1;
         _IO:                     2;
         _IO LG6:                 1;
         _IO LG7:                 1;
         _IO LG8:                 1;
         _IO LG9:                 1;
         };
  struct{
         _IO:                     2;
         _IO LATG2:               1;
         _IO LATG3:               1;
         _IO:                     2;
         _IO LATG6:               1;
         _IO LATG7:               1;
         _IO LATG8:               1;
         _IO LATG9:               1;
         };
}LATGbits;

#define LATG   ((LATGbits*)(LATG_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO:                     2;
         _IO ODCL:                2;
         _IO:                     2;
         _IO ODCH:                4;
         };
  struct{
         _IO:                     2;
         _IO ODCG2:               1;
         _IO ODCG3:               1;
         _IO:                     2;
         _IO ODCG6:               1;
         _IO ODCG7:               1;
         _IO ODCG8:               1;
         _IO ODCG9:               1;
         };
}ODCGbits;

#define ODCG   ((ODCGbits*)(ODCG_BASE))
/*****************************************************************************/
//                  KONTROLNI REGISTRI SISTEMA (7 registara):
//
/*****************************************************************************/
typedef union{
  struct{
         _IO POR:                 1;
         _IO BOR:                 1;
         _IO IDLE:                1;
         _IO SLEEP:               1;
         _IO WDTO:                1;
         _IO SWDTEN:              1;
         _IO SWR:                 1;
         _IO EXTR:                1;
         _IO VREGS:               1;
         _IO:                     5;
         _IO IOPUWR:              1;
         _IO TRAPR:               1;
          };
}RCONbits;

#define RCON   ((RCONbits*)(RCON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO OSWEN:            1;
            _IO LPOSCEN:          1;
            _IO:                  1;
            _IO CF:               1;
            _IO:                  1;
            _IO LOCK:             1;
            _IO:                  1;
            _IO CLKLOCK:          1;
            _IO NOSC:             3;
            _IO:                  1;
            _IO COSC:             3;
            };
    struct {
            _IO:                  8;
            _IO NOSC0:            1;
            _IO NOSC1:            1;
            _IO NOSC2:            1;
            _IO:                  1;
            _IO COSC0:            1;
            _IO COSC1:            1;
            _IO COSC2:            1;
            };
}OSCCONbits;

#define OSCCON   ((OSCCONbits*)(OSCCON_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO PLLPRE:           5;
            _IO:                  1;
            _IO PLLPOST:          2;
            _IO FRCDIV:           3;
            _IO DOZEN:            1;
            _IO DOZE:             3;
            _IO ROI:              1;
            };
    struct {
            _IO PLLPRE0:          1;
            _IO PLLPRE1:          1;
            _IO PLLPRE2:          1;
            _IO PLLPRE3:          1;
            _IO PLLPRE4:          1;
            _IO:                  1;
            _IO PLLPOST0:         1;
            _IO PLLPOST1:         1;
            _IO FRCDIV0:          1;
            _IO FRCDIV1:          1;
            _IO FRCDIV2:          1;
            _IO:                  1;
            _IO DOZE0:            1;
            _IO DOZE1:            1;
            _IO DOZE2:            1;
             };
}CLKDIVbits;

#define CLKDIV   ((CLKDIVbits*)(CLKDIV_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO PLLDIV:           9;
            };
    struct {
            _IO PLLDIV0:          1;
            _IO PLLDIV1:          1;
            _IO PLLDIV2:          1;
            _IO PLLDIV3:          1;
            _IO PLLDIV4:          1;
            _IO PLLDIV5:          1;
            _IO PLLDIV6:          1;
            _IO PLLDIV7:          1;
            _IO PLLDIV8:          1;
             };
}PLLFBDbits;

#define PLLFBD   ((PLLFBDbits*)(PLLFBD_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO TUN:              6;
            };
    struct {
            _IO TUN0:             1;
            _IO TUN1:             1;
            _IO TUN2:             1;
            _IO TUN3:             1;
            _IO TUN4:             1;
            _IO TUN5:             1;
             };
}OSCTUNbits;

#define OSCTUN   ((OSCTUNbits*)(OSCTUN_BASE))
/*****************************************************************************/
typedef union{
    struct {
            _IO NVMOP:            4;
            _IO:                  2;
            _IO ERASE:            1;
            _IO:                  6;
            _IO WRERR:            1;
            _IO WREN:             1;
            _IO WR:               1;
            };
    struct {
            _IO NVMOP0:           1;
            _IO NVMOP1:           1;
            _IO NVMOP2:           1;
            _IO NVMOP3:           1;
             };
}NVMCONbits;

#define NVMCON   ((NVMCONbits*)(NVMCON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
    _IO NVMKEYR:                  8;
    };
  }NVMKEYbits;

#define NVMKEY   ((NVMKEYbits*)(NVMKEY_BASE))
/*****************************************************************************/
//                        PMD KONTROLNI REGISTRI:(3 registra)
//                        (ONEMOGUCAVANJE MODULA PERIFERALA)   
/*****************************************************************************/
typedef union{
 struct{
        _IO AD1MD:                1;
        _IO C1MD:                 1;
        _IO :                     1;
        _IO SPI1MD:               1;
        _IO SPI2MD:               1;
        _IO U1MD:                 1;
        _IO U2MD:                 1;
        _IO I2C1MD:               1;
        _IO:                      1;
        _IO PWMMD:                1;
        _IO QEIMD:                1;
        _IO T1MD:                 1;
        _IO T2MD:                 1;
        _IO T3MD:                 1;
        _IO T4MD:                 1;
        _IO T5MD:                 1;
          };
}PMD1bits;

#define PMD1   ((PMD1bits*)(PMD1_BASE))
/*****************************************************************************/
typedef union{
  struct{
         _IO OC1MD:               1;
         _IO OC2MD:               1;
         _IO OC3MD:               1;
         _IO OC4MD:               1;
         _IO OC5MD:               1;
         _IO OC6MD:               1;
         _IO OC7MD:               1;
         _IO OC8MD:               1;
         _IO IC1MD:               1;
         _IO IC2MD:               1;
         _IO IC3MD:               1;
         _IO IC4MD:               1;
         _IO IC5MD:               1;
         _IO IC6MD:               1;
         _IO IC7MD:               1;
         _IO IC8MD:               1;
           };
}PMD2bits;

#define PMD2   ((PMD2bits*)(PMD2_BASE))
/*****************************************************************************/
typedef union{
 struct{
        _IO:                      1;
        _IO I2C2MD:               1;
        _IO:                     10;
        _IO T6MD:                 1;
        _IO T7MD:                 1;
        _IO T8MD:                 1;
        _IO T9MD:                 1;
         };
}PMD3bits;

#define PMD3   ((PMD3bits*)(PMD3_BASE))
/*****************************************************************************/

#endif
