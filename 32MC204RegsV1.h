#ifndef _32MC204REGSV1_H_
#define _32MC204REGSV1_H_
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


#define CNEN1_BASE        0x0060
#define CNEN2_BASE        0x0062
#define CNPU1_BASE        0x0068
#define CNPU2_BASE        0x006A



#define INTCON1_BASE      0x0080
#define INTCON2_BASE      0x0082
#define IFS0_BASE         0x0084
#define IFS1_BASE         0x0086
#define IFS3_BASE         0x008A
#define IFS4_BASE         0x008C
#define IEC0_BASE         0x0094
#define IEC1_BASE         0x0096
#define IEC3_BASE         0x009A
#define IEC4_BASE         0x009C
#define IPC0_BASE         0x00A4
#define IPC1_BASE         0x00A6
#define IPC2_BASE         0x00A8
#define IPC3_BASE         0x00AA
#define IPC4_BASE         0x00AC
#define IPC5_BASE         0x00AE
#define IPC7_BASE         0x00B2
#define IPC14_BASE        0x00C0
#define IPC15_BASE        0x00C2
#define IPC16_BASE        0x00C8
#define IPC18_BASE        0x00A4
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

#define IC1BUF_BASE       0x0140
#define IC1CON_BASE       0x0142
#define IC2BUF_BASE       0x0144
#define IC2CON_BASE       0x0146
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

#define P1TCON_BASE       0x01C0
#define P1TMR_BASE        0x01C2
#define P1TPER_BASE       0x01C4
#define P1SECMP_BASE      0x01C6
#define PWM1CON1_BASE     0x01C8
#define PWM1CON2_BASE     0x01CA
#define P1DTCON1_BASE     0x01CC
#define P1DTCON2_BASE     0x01CE
#define P1FLTACON_BASE    0x01D0
#define P1OVDCON_BASE     0x01D4
#define P1DC1_BASE        0x01D6
#define P1DC2_BASE        0x01D8
#define P1DC3_BASE        0x01DA

#define P2TCON_BASE       0x05C0
#define P2TMR_BASE        0x05C2
#define P2TPER_BASE       0x05C4
#define P2SECMP_BASE      0x05C6
#define PWM2CON1_BASE     0x05C8
#define PWM2CON2_BASE     0x05CA
#define P2DTCON1_BASE     0x05CC
#define P2DTCON2_BASE     0x05CE
#define P2FLTACON_BASE    0x05D0
#define P2OVDCON_BASE     0x05D4
#define P2DC1_BASE        0x05D6

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

#define U1MODE_BASE      0x0220
#define U1STA_BASE       0x0222
#define U1TXREG_BASE     0x0224
#define U1RXREG_BASE     0x0226
#define U1BRG_BASE       0x0228

#define SPI1STAT_BASE    0x0240
#define SPI1CON1_BASE    0x0242
#define SPI1CON2_BASE    0x0244
#define SPI1BUF_BASE     0x0248

#define ADC1BUF0_BASE    0x0300
#define ADC1BUF1_BASE    0x0302
#define ADC1BUF2_BASE    0x0304
#define ADC1BUF3_BASE    0x0306
#define ADC1BUF4_BASE    0x0308
#define ADC1BUF5_BASE    0x030A
#define ADC1BUF6_BASE    0x030C
#define ADC1BUF7_BASE    0x030E
#define ADC1BUF8_BASE    0x0310
#define ADC1BUF9_BASE    0x0312
#define ADC1BUFA_BASE    0x0314
#define ADC1BUFB_BASE    0x0316
#define ADC1BUFC_BASE    0x0318
#define ADC1BUFD_BASE    0x031A
#define ADC1BUFE_BASE    0x031C
#define ADC1BUFF_BASE    0x031E
#define AD1CON1_BASE     0x0320
#define AD1CON2_BASE     0x0322
#define AD1CON3_BASE     0x0324
#define AD1CHS123_BASE   0x0326
#define AD1CHS0_BASE     0x0328
#define AD1PCFGL_BASE    0x032C
#define AD1CSSL_BASE     0x0330

#define RPINR0_BASE      0x0680
#define RPINR1_BASE      0x0682
#define RPINR3_BASE      0x0686
#define RPINR7_BASE      0x068E
#define RPINR10_BASE     0x0694
#define RPINR11_BASE     0x0696
#define RPINR12_BASE     0x0698
#define RPINR13_BASE     0x069A
#define RPINR14_BASE     0x069C
#define RPINR15_BASE     0x069E
#define RPINR18_BASE     0x06A4
#define RPINR20_BASE     0x06A8
#define RPINR21_BASE     0x06AA

#define RPOR0_BASE      0x06C0
#define RPOR1_BASE      0x06C2
#define RPOR2_BASE      0x06C4
#define RPOR3_BASE      0x06C6
#define RPOR4_BASE      0x06C8
#define RPOR5_BASE      0x06CA
#define RPOR6_BASE      0x06CC
#define RPOR7_BASE      0x06CE
#define RPOR8_BASE      0x06D0
#define RPOR9_BASE      0x06D2
#define RPOR10_BASE     0x06D4
#define RPOR11_BASE     0x06D6
#define RPOR12_BASE     0x06D8

#define TRISA_BASE      0x02C0
#define PORTA_BASE      0x02C2
#define LATA_BASE       0x02C4
#define ODCA_BASE       0x02C6

#define TRISB_BASE      0x02C8
#define PORTB_BASE      0x02CA
#define LATB_BASE       0x02CC
#define ODCB_BASE       0x02CE

#define TRISC_BASE      0x02D0
#define PORTC_BASE      0x02D2
#define LATC_BASE       0x02D4
#define ODCC_BASE       0x02D6

#define RCON_BASE       0x0740
#define OSCCON_BASE     0x0742
#define CLKDIV_BASE     0x0744
#define PLLFBD_BASE     0x0746
#define OSCTUN_BASE     0x0748

#define NVMCON_BASE     0x0760
#define NVMKEY_BASE     0x0766

#define PMD1_BASE       0x0770
#define PMD2_BASE       0x0772
#define PMD3_BASE       0x0774

/*******************Strukture opisa registara********************************/
 typedef union {
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
typedef union {
    struct {
           _IO IFb:1;//Morao sam mu iz 'IF' promijeniti naziv u 'IFb'.
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
typedef union {
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
typedef union {
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
//             STRUKTURE ZA KONTROLU CHANGE NOTIFICATION MODULA:
//
/*****************************************************************************/
typedef union {
 struct{
     _IO CNEN1R:16;  
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
typedef union {
 struct {
      _IO CNEN2R:15;     
         };
 struct {
       _IO CN16IE:1;
       _IO CN17IE:1;
       _IO CN18IE:1;
       _IO CN19IE:1;
       _IO CN20IE:1;
       _IO CN21IE:1;
       _IO CN22IE:1;
       _IO CN23IE:1;
       _IO CN24IE:1;
       _IO CN25IE:1;
       _IO CN26IE:1;
       _IO CN27IE:1;
       _IO CN28IE:1;
       _IO CN29IE:1;
       _IO CN30IE:1;
   };
}CNEN2bits;

#define CNEN2    ((CNEN2bits*)(CNEN2_BASE))
/*****************************************************************************/
typedef union{
struct{
      _IO CNPU1R:16;     
        };
struct{
       _IO CN0PUE:1;
       _IO CN1PUE:1;
       _IO CN2PUE:1;
       _IO CN3PUE:1;
       _IO CN4PUE:1;
       _IO CN5PUE:1;
       _IO CN6PUE:1;
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
typedef union {
struct {
       _IO CNPU2R:15;       
         };
struct {
       _IO CN16PUE:1;
       _IO CN17PUE:1;
       _IO CN18PUE:1;
       _IO CN19PUE:1;
       _IO CN20PUE:1;
       _IO CN21PUE:1;
       _IO CN22PUE:1;
       _IO CN23PUE:1;
       _IO CN24PUE:1;
       _IO CN25PUE:1;
       _IO CN26PUE:1;
       _IO CN27PUE:1;
       _IO CN28PUE:1;
       _IO CN29PUE:1;
       _IO CN30PUE:1;
         };
}CNPU2bits;

#define CNPU2    ((CNPU2bits*)(CNPU2_BASE))
/*****************************************************************************/
//              STRUKTURE I REGISTR ZA KONTROLU I STATUS PREKIDA:
//
/*****************************************************************************/
typedef union{
struct {
    _IO INTCON1R :16;
         };
struct{
              _IO :1;
       _IO OSCFAIL:1;
        _IO STKERR:1;
       _IO ADDRERR:1;
       _IO MATHERR:1;
              _IO :1;
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
typedef union {
 struct{
          _IO INT0EP:1;
          _IO INT1EP:1;
          _IO INT2EP:1;
               _IO :11;
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
                  _IO :1;
             _IO IC2IF:1;
             _IO OC2IF:1;
              _IO T2IF:1;
              _IO T3IF:1;
           _IO SPI1EIF:1;
            _IO SPI1IF:1;
            _IO U1RXIF:1;
            _IO U1TXIF:1;
             _IO AD1IF:1;
             };
}IFS0bits;

#define IFS0    ((IFS0bits*)(IFS0_BASE))
/*****************************************************************************/
typedef  union {
    struct {
              _IO SI2C1IF:1;
              _IO MI2C1IF:1;
                     _IO :1;
                 _IO CNIF:1;
               _IO INT1IF:1;
                     _IO :1;
                _IO IC7IF:1;
                _IO IC8IF:1;
                     _IO :5;
               _IO INT2IF:1;
                };
    struct {
               _IO SI2CIF:1;
            };       
}IFS1bits;

#define IFS1    ((IFS1bits*)(IFS1_BASE))
/*****************************************************************************/
typedef union{
struct{
                _IO :9;
          _IO PWM1IF:1;
           _IO QEIIF:1;
                _IO :4;
         _IO FLTA1IF:1;
     };
}IFS3bits;

#define IFS3    ((IFS3bits*)(IFS3_BASE))
/*****************************************************************************/
typedef union{
   struct{
                  _IO :1;
             _IO U1EIF:1;
                  _IO :7;
            _IO PWM2IF:1;
           _IO FLTA2IF:1;
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
               _IO :1;
          _IO IC2IE:1;
          _IO OC2IE:1;
           _IO T2IE:1;
           _IO T3IE:1;
        _IO SPI1EIE:1;
         _IO SPI1IE:1;
         _IO U1RXIE:1;
         _IO U1TXIE:1;
          _IO AD1IE:1;
          };
}IEC0bits;

#define IEC0    ((IEC0bits*)(IEC0_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO SI2C1IE:1;
           _IO MI2C1IE:1;
                  _IO :1;
              _IO CNIE:1;
            _IO INT1IE:1;
                  _IO :1;
             _IO IC7IE:1;
             _IO IC8IE:1;
                  _IO :5;
            _IO INT2IE:1;
             };
    struct {
            _IO SI2CIE:1;
           };
}IEC1bits;

#define IEC1    ((IEC1bits*)(IEC1_BASE))
/*****************************************************************************/
typedef union {
     struct{
                _IO :9;
          _IO PWM1IE:1;
           _IO QEIIE:1;
                _IO :4;
         _IO FLTA1IE:1;
           };
}IEC3bits;

#define IEC3    ((IEC3bits*)(IEC3_BASE))
/*****************************************************************************/
typedef union{
struct{
                  _IO :1;
             _IO U1EIE:1;
                  _IO :7;
            _IO PWM2IE:1;
           _IO FLTA2IE:1;
        };
}IEC4bits;

#define IEC4    ((IEC4bits*)(IEC4_BASE))
/*****************************************************************************/
typedef  union {
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
typedef union {
    struct {
                      _IO :4;
                 _IO IC2IP:3;
                      _IO :1;
                 _IO OC2IP:3;
                      _IO :1;
                  _IO T2IP:3;
             };
    struct {
                       _IO :4;
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
typedef union {
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
typedef union {
    struct {
                  _IO U1TXIP:3;
                        _IO :1;
                   _IO AD1IP:3;
             };
    struct {
                 _IO U1TXIP0:1;
                 _IO U1TXIP1:1;
                 _IO U1TXIP2:1;
                        _IO :1;
                  _IO AD1IP0:1;
                  _IO AD1IP1:1;
                  _IO AD1IP2:1;
             };
}IPC3bits;

#define IPC3    ((IPC3bits*)(IPC3_BASE))
/*****************************************************************************/
typedef union {
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
typedef union {
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
typedef union {
    struct {
                    _IO :4;
              _IO INT2IP:3;
            };
    struct {
                     _IO :4;
              _IO INT2IP0:1;
              _IO INT2IP1:1;
              _IO INT2IP2:1;
            };
}IPC7bits;

#define IPC7    ((IPC7bits*)(IPC7_BASE))
/*****************************************************************************/
typedef union {
    struct {
                    _IO :4;
              _IO PWM1IP:3;
                    _IO :1;
               _IO QEIIP:3;
            };
    struct {
                     _IO :4;
              _IO PWM1IP0:1;
              _IO PWM1IP1:1;
              _IO PWM1IP2:1;
                     _IO :1;
               _IO QEIIP0:1;
               _IO QEIIP1:1;
               _IO QEIIP2:1;
            };
}IPC14bits;

#define IPC14    ((IPC14bits*)(IPC14_BASE))
/*****************************************************************************/
typedef union {
    struct {
                    _IO :12;
              _IO FLTA1IP:3;
            };
    struct {
                     _IO :12;
              _IO FLTA1IP0:1;
              _IO FLTA1IP1:1;
              _IO FLTA1IP2:1;
           };
}IPC15bits;

#define IPC15    ((IPC15bits*)(IPC15_BASE))
/*****************************************************************************/
typedef union {
    struct {
                   _IO :4;
              _IO U1EIP:3;
            };
    struct {
                    _IO :4;
              _IO U1EIP0:1;
              _IO U1EIP1:1;
              _IO U1EIP2:1;
            };
}IPC16bits;

#define IPC16    ((IPC16bits*)(IPC16_BASE))
/*****************************************************************************/
typedef union {
    struct {
                    _IO :4;
              _IO PWM2IP:3;
                    _IO :1;
             _IO FLTA2IP:3;
           };
    struct {
                   _IO :4;
            _IO PWM2IP0:1;
            _IO PWM2IP1:1;
            _IO PWM2IP2:1;
                   _IO :1;
           _IO FLTA2IP0:1;
           _IO FLTA2IP1:1;
           _IO FLTA2IP2:1;
          };
}IPC18bits;

#define IPC18    ((IPC18bits*)(IPC18_BASE))
/*****************************************************************************/
typedef union {
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
//              STRUKTURE I REGISTRI ZA KONTROLU I STATUS TIMER-a:
//
/*****************************************************************************/
typedef union {
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
typedef union {
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
typedef union {
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
     _IO TMR1:16;//BUG!!!
    };
  }TMR1bits;

#define TMR1R   ((TMR1bits*)(TMR1_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PR1:16;//BUG!!!
    };
  }PR1bits;

#define PR1R   ((PR1bits*)(PR1_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMR2:16;//BUG!!!
    };
  }TMR2bits;

#define TMR2R   ((TMR2bits*)(TMR2_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PR2:16;//BUG!!!
    };
  }PR2bits;

#define PR2R   ((PR2bits*)(PR2_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMR3:16;//BUG!!!
    };
  }TMR3bits;

#define TMR3R   ((TMR3bits*)(TMR3_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PR3:16;//BUG!!!
    };
  }PR3bits;

#define PR3R   ((PR3bits*)(PR3_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO TMR3HLD:16;//BUG!!!
    };
  }TMR3HLDbits;

#define TMR3HLDR   ((TMR3HLDbits*)(TMR3HLD_BASE))
/*****************************************************************************/
//              STRUKTURE I REGISTRI ZA INPUT CAPTURE MODULA:
//
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO IC1BUF:16;//BUG!!!
    };
  }IC1BUFbits;

#define IC1BUFR   ((IC1BUFbits*)(IC1BUF_BASE))
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
}IC1CONbits;

#define IC1CON   ((IC1CONbits*)(IC1CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO IC2BUF:16;//BUG!!!
    };
  }IC2BUFbits;

#define IC2BUFR   ((IC2BUFbits*)(IC2BUF_BASE))
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
     _IO IC7BUF:16;//BUG!!!
    };
  }IC7BUFbits;

#define IC7BUFR   ((IC7BUFbits*)(IC7BUF_BASE))
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
     _IO IC8BUF:16;//BUG!!!
    };
  }IC8BUFbits;

#define IC8BUFR   ((IC8BUFbits*)(IC8BUF_BASE))
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
//
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO OC1RS:16;//BUG!!!
    };
  }OC1RSbits;

#define OC1RSR   ((OC1RSbits*)(OC1RS_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO OC1R:16;//BUG!!!
    };
  }OC1Rbits;

#define OC1RR   ((OC1Rbits*)(OC1R_BASE))
/*****************************************************************************/
typedef union {
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
     _IO OC2RS:16;//BUG!!!
    };
  }OC2RSbits;

#define OC2RSR   ((OC2RSbits*)(OC2RS_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO OC2R:16;//BUG!!!
    };
  }OC2Rbits;

#define OC2RR   ((OC2Rbits*)(OC2R_BASE))
/*****************************************************************************/
typedef union {
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
//              6-IZLAZNI MOTOR CONTROL PWM MODUL:(13 registara)
//                  Jos ukupno 111 registara za definisati
/*****************************************************************************/
typedef union {
    struct {
            _IO PTMOD:2;
           _IO PTCKPS:2;
            _IO PTOPS:4;
                 _IO :5;
           _IO PTSIDL:1;
                 _IO :1;
             _IO PTEN:1;
             };
    struct {
           _IO PTMOD0:1;
           _IO PTMOD1:1;
          _IO PTCKPS0:1;
          _IO PTCKPS1:1;
           _IO PTOPS0:1;
           _IO PTOPS1:1;
           _IO PTOPS2:1;
           _IO PTOPS3:1;
            };
}P1TCONbits;

#define P1TCON   ((P1TCONbits*)(P1TCON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PTMR:15;//BUG!!!
     _IO PTDIR:1;
    };
  }P1TMRbits;

#define P1TMR   ((P1TMRbits*)(P1TMR_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PTPER:15;//BUG!!!
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
        _IO PENL:3;
        _IO :1;
        _IO PENH:3;
        _IO :1;
        _IO PMOD:3;
        };
 struct{
       _IO PEN1L:1;
       _IO PEN2L:1;
       _IO PEN3L:1;
            _IO :1;
       _IO PEN1H:1;
       _IO PEN2H:1;
       _IO PEN3H:1;
            _IO :1;
       _IO PMOD1:1;
       _IO PMOD2:1;
       _IO PMOD3:1;
       };
}PWM1CON1bits;

#define PWM1CON1   ((PWM1CON1bits*)(PWM1CON1_BASE))
/*****************************************************************************/

typedef union {
    struct {
            _IO UDIS:1;
           _IO OSYNC:1;
             _IO IUE:1;
                _IO :5;
          _IO SEVOPS:4;
            };
    struct {
                  _IO :8;
           _IO SEVOPS0:1;
           _IO SEVOPS1:1;
           _IO SEVOPS2:1;
           _IO SEVOPS3:1;
            };
}PWM1CON2bits;

#define PWM1CON2   ((PWM1CON2bits*)(PWM1CON2_BASE))
/*****************************************************************************/
typedef union {
    struct {
             _IO DTA:6;
           _IO DTAPS:2;
             _IO DTB:6;
           _IO DTBPS:2;
            };
    struct {
           _IO DTA0:1;
           _IO DTA1:1;
           _IO DTA2:1;
           _IO DTA3:1;
           _IO DTA4:1;
           _IO DTA5:1;
         _IO DTAPS0:1;
         _IO DTAPS1:1;
           _IO DTB0:1;
           _IO DTB1:1;
           _IO DTB2:1;
           _IO DTB3:1;
           _IO DTB4:1;
           _IO DTB5:1;
         _IO DTBPS0:1;
         _IO DTBPS1:1;
             };
}P1DTCON1bits;

#define P1DTCON1   ((P1DTCON1bits*)(P1DTCON1_BASE))
/*****************************************************************************/
typedef union{
 struct{
       _IO DTS1I:1;
       _IO DTS1A:1;
       _IO DTS2I:1;
       _IO DTS2A:1;
       _IO DTS3I:1;
       _IO DTS3A:1;
         };
}P1DTCON2bits;

#define P1DTCON2   ((P1DTCON2bits*)(P1DTCON2_BASE))
/*****************************************************************************/
typedef union{
struct{
       _IO FAEN1:1;
       _IO FAEN2:1;
       _IO FAEN3:1;
            _IO :4;
       _IO FLTAM:1;
      _IO FAOV1L:1;
      _IO FAOV1H:1;
      _IO FAOV2L:1;
      _IO FAOV2H:1;
      _IO FAOV3L:1;
      _IO FAOV3H:1;
         };
}P1FLTACONbits;

#define P1FLTACON   ((P1FLTACONbits*)(P1FLTACON_BASE))
/*****************************************************************************/
typedef union{
struct{
         _IO POUT:6;
             _IO :2;
         _IO POVD:6;
       };
struct{
       _IO POUT1L:1;
       _IO POUT1H:1;
       _IO POUT2L:1;
       _IO POUT2H:1;
       _IO POUT3L:1;
       _IO POUT3H:1;
             _IO :2;
       _IO POVD1L:1;
       _IO POVD1H:1;
       _IO POVD2L:1;
       _IO POVD2H:1;
       _IO POVD3L:1;
       _IO POVD3H:1;
       };
}P1OVDCONbits;

#define P1OVDCON   ((P1OVDCONbits*)(P1OVDCON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PDC:16;//BUG!!!
    };
  }P1DC1bits;

#define P1DC1   ((P1DC1bits*)(P1DC1_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PDC:16;//BUG!!!
    };
  }P1DC2bits;

#define P1DC2   ((P1DC2bits*)(P1DC2_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO PDC:16;//BUG!!!
    };
  }P1DC3bits;

#define P1DC3   ((P1DC3bits*)(P1DC3_BASE))
/*****************************************************************************/
//              2-IZLAZNI MOTOR CONTROL PWM MODUL:(11 registara)
//                  
/*****************************************************************************/
typedef union {
    struct {
            _IO PTMOD:2;
           _IO PTCKPS:2;
            _IO PTOPS:4;
                 _IO :5;
           _IO PTSIDL:1;
                 _IO :1;
             _IO PTEN:1;
            };
    struct {
           _IO PTMOD0:1;
           _IO PTMOD1:1;
          _IO PTCKPS0:1;
          _IO PTCKPS1:1;
           _IO PTOPS0:1;
           _IO PTOPS1:1;
           _IO PTOPS2:1;
           _IO PTOPS3:1;
           };
}P2TCONbits;

#define P2TCON   ((P2TCONbits*)(P2TCON_BASE))
/*****************************************************************************/
typedef union{
 struct{
       _IO PTMR:15;
       _IO PTDIR:1;
        };
}P2TMRbits;

#define P2TMRR   ((P2TMRbits*)(P2TMR_BASE))
/*****************************************************************************/
typedef union{
 struct{
      _IO PTPER:15;
       };
}P2TPERbits;

#define P2TPERR   ((P2TPERbits*)(P2TPER_BASE))
/*****************************************************************************/
typedef union{
 struct{
      _IO SEVTCMP:15;
       _IO SEVTDIR:1;
        };
}P2SECMPbits;

#define P2SECMP   ((P2SECMPbits*)(P2SECMP_BASE))
/*****************************************************************************/
typedef union{
 struct{
       _IO PEN1L:1;
            _IO :3;
       _IO PEN1H:1;
            _IO :3;
       _IO PMOD1:1;
       };
}PWM2CON1bits;

#define PWM2CON1   ((PWM2CON1bits*)(PWM2CON1_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO UDIS:1;
           _IO OSYNC:1;
             _IO IUE:1;
                _IO :5;
          _IO SEVOPS:4;
            };
    struct {
                  _IO :8;
           _IO SEVOPS0:1;
           _IO SEVOPS1:1;
           _IO SEVOPS2:1;
           _IO SEVOPS3:1;
            };
}PWM2CON2bits;

#define PWM2CON2   ((PWM2CON2bits*)(PWM2CON2_BASE))
/*****************************************************************************/
typedef union {
    struct {
             _IO DTA:6;
           _IO DTAPS:2;
             _IO DTB:6;
           _IO DTBPS:2;
            };
    struct {
           _IO DTA0:1;
           _IO DTA1:1;
           _IO DTA2:1;
           _IO DTA3:1;
           _IO DTA4:1;
           _IO DTA5:1;
         _IO DTAPS0:1;
         _IO DTAPS1:1;
           _IO DTB0:1;
           _IO DTB1:1;
           _IO DTB2:1;
           _IO DTB3:1;
           _IO DTB4:1;
           _IO DTB5:1;
         _IO DTBPS0:1;
         _IO DTBPS1:1;
             };
}P2DTCON1bits;

#define P2DTCON1   ((P2DTCON1bits*)(P2DTCON1_BASE))
/*****************************************************************************/
typedef union{
 struct{
       _IO DTS1I:1;
       _IO DTS1A:1;
        };
}P2DTCON2bits;

#define P2DTCON2   ((P2DTCON2bits*)(P2DTCON2_BASE))
/*****************************************************************************/
typedef union{
 struct{
       _IO FAEN1:1;
            _IO :6;
       _IO FLTAM:1;
      _IO FAOV1L:1;
      _IO FAOV1H:1;
        };
}P2FLTACONbits;

#define P2FLTACON   ((P2FLTACONbits*)(P2FLTACON_BASE))
/*****************************************************************************/
typedef union{
 struct{
        _IO POUT:2;
            _IO :6;
        _IO POVD:2;
         };
 struct{
       _IO POUT1L:1;
       _IO POUT1H:1;
             _IO :6;
       _IO POVD1L:1;
       _IO POVD1H:1;
        };
}P2OVDCONbits;

#define P2OVDCON   ((P2OVDCONbits*)(P2OVDCON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO P2DC1:16;//BUG!!!
    };
  }P2DC1bits;

#define P2DC1R   ((P2DC1bits*)(P2DC1_BASE))
/*****************************************************************************/
//             MOTION FEEDBACK MODUL (KVADRATURNI ENKODER):(4 registra)
//                  
/*****************************************************************************/
typedef  union {
    struct {
         _IO UPDN_SRC:1;
             _IO TQCS:1;
           _IO POSRES:1;
           _IO TQCKPS:2;
           _IO TQGATE:1;
           _IO PCDOUT:1;
            _IO SWPAB:1;
             _IO QEIM:3;
             _IO UPDN:1;
             _IO INDX:1;
          _IO QEISIDL:1;
                 _IO :1;
           _IO CNTERR:1;
           };
    struct {
                 _IO :3;
          _IO TQCKPS0:1;
          _IO TQCKPS1:1;
                 _IO :3;
            _IO QEIM0:1;
            _IO QEIM1:1;
            _IO QEIM2:1;
            };
}QEI1CONbits;

#define QEI1CON   ((QEI1CONbits*)(QEI1CON_BASE))
/*****************************************************************************/
typedef union {
    struct {
               _IO :4;
           _IO QECK:3;
          _IO QEOUT:1;
           _IO CEID:1;
            _IO IMV:2;
             };
    struct {
               _IO :4;
          _IO QECK0:1;
          _IO QECK1:1;
          _IO QECK2:1;
               _IO :2;
           _IO IMV0:1;
           _IO IMV1:1;
             };
}DFLT1CONbits;

#define DFLT1CON   ((DFLT1CONbits*)(DFLT1CON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO POS1CNT:16;//BUG!!!
    };
  }POS1CNTbits;

#define POS1CNTR   ((POS1CNTbits*)(POS1CNT_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO MAX1CNT:16;//BUG!!!
    };
  }MAX1CNTbits;

#define MAX1CNTR   ((MAX1CNTbits*)(MAX1CNT_BASE))
/*****************************************************************************/
//                     I2C1 MODUL (2-ZICANI SERIJSKI INTERFEJS):(7 registara)
//                  
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO I2C1RCV:8;//BUG!!!
    };
  }I2C1RCVbits;

#define I2C1RCVR   ((I2C1RCVbits*)(I2C1RCV_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO I2C1TRN:8;//BUG!!!
    };
  }I2C1TRNbits;

#define I2C1TRNR   ((I2C1TRNbits*)(I2C1TRN_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO I2C1BRG:9;//BUG!!!
    };
  }I2C1BRGbits;

#define I2C1BRGR   ((I2C1BRGbits*)(I2C1BRG_BASE))
/*****************************************************************************/
typedef union{
 struct{
        _IO SEN:1;
       _IO RSEN:1;
        _IO PEN:1;
       _IO RCEN:1;
      _IO ACKEN:1;
      _IO ACKDT:1;
      _IO STREN:1;
       _IO GCEN:1;
       _IO SMEN:1;
     _IO DISSLW:1;
       _IO A10M:1;
     _IO IPMIEN:1;
     _IO SCLREL:1;
    _IO I2CSIDL:1;
           _IO :1;
      _IO I2CEN:1;
         };
}I2C1CONbits;

#define I2C1CON   ((I2C1CONbits*)(I2C1CON_BASE))
/*****************************************************************************/
typedef union{
 struct{
       _IO TBF:1;
       _IO RBF:1;
       _IO R_W:1;
         _IO S:1;
         _IO P:1;
       _IO D_A:1;
     _IO I2COV:1;
     _IO IWCOL:1;
     _IO ADD10:1;
    _IO GCSTAT:1;
       _IO BCL:1;
          _IO :3;
    _IO TRSTAT:1;
   _IO ACKSTAT:1;
        };
}I2C1STATbits;

#define I2C1STAT   ((I2C1STATbits*)(I2C1STAT_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO I2C1ADD:10;//BUG!!!
    };
  }I2C1ADDbits;

#define I2C1ADDR   ((I2C1ADDbits*)(I2C1ADD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO I2C1MSK:10;//BUG!!!
    };
  }I2C1MSKbits;

#define I2C1MSKR   ((I2C1MSKbits*)(I2C1MSK_BASE))
/*****************************************************************************/
//                     USART1 MODUL (SERIJSKI INTERFEJS):(5 registara)
//                  
/*****************************************************************************/
typedef union {
    struct {
           _IO STSEL:1;
           _IO PDSEL:2;
            _IO BRGH:1;
          _IO URXINV:1;
           _IO ABAUD:1;
          _IO LPBACK:1;
            _IO WAKE:1;
             _IO UEN:2;
                _IO :1;
           _IO RTSMD:1;
            _IO IREN:1;
           _IO USIDL:1;
                _IO :1;
          _IO UARTEN:1;
               };
    struct {
                 _IO :1;
           _IO PDSEL0:1;
           _IO PDSEL1:1;
                 _IO :5;
             _IO UEN0:1;
             _IO UEN1:1;
            };
}U1MODEbits;

#define U1MODE   ((U1MODEbits*)(U1MODE_BASE))
/*****************************************************************************/
typedef union {
    struct {
          _IO URXDA:1;
           _IO OERR:1;
           _IO FERR:1;
           _IO PERR:1;
          _IO RIDLE:1;
          _IO ADDEN:1;
        _IO URXISEL:2;
           _IO TRMT:1;
          _IO UTXBF:1;
          _IO UTXEN:1;
         _IO UTXBRK:1;
               _IO :1;
       _IO UTXISEL0:1;
         _IO UTXINV:1;
       _IO UTXISEL1:1;
             };
    struct {
                   _IO :6;
           _IO URXISEL0:1;
           _IO URXISEL1:1;
            };
}U1STAbits;

#define U1STA   ((U1STAbits*)(U1STA_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO U1TXREG:9;//BUG!!!
    };
   struct
    {
      _IO UTXREG0:1;
      _IO UTXREG1:1;
      _IO UTXREG2:1;
      _IO UTXREG3:1;
      _IO UTXREG4:1;
      _IO UTXREG5:1;
      _IO UTXREG6:1;
      _IO UTXREG7:1;
      _IO UTXREG8:1;   
     };
  }U1TXREGbits;

#define U1TXREGR   ((U1TXREGbits*)(U1TXREG_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO U1RXREG:9;//BUG!!!
    };
  struct
   {
    _IO URXREG0:1;
    _IO URXREG1:1;
    _IO URXREG2:1;
    _IO URXREG3:1;
    _IO URXREG4:1;
    _IO URXREG5:1;
    _IO URXREG6:1;
    _IO URXREG7:1;
    _IO URXREG8:1;
    };
  }U1RXREGbits;

#define U1RXREGR   ((U1RXREGbits*)(U1RXREG_BASE))
/*****************************************************************************/
//                     SPI1 MODUL (SERIJSKI INTERFEJS):(4 registra)
//                  
/*****************************************************************************/
typedef union{
  struct{
        _IO SPIRBF:1;
        _IO SPITBF:1;
              _IO :4;
        _IO SPIROV:1;
              _IO :6;
       _IO SPISIDL:1;
              _IO :1;
         _IO SPIEN:1;
        };
}SPI1STATbits;

#define SPI1STAT   ((SPI1STATbits*)(SPI1STAT_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO PPRE:2;
           _IO SPRE:3;
          _IO MSTEN:1;
            _IO CKP:1;
           _IO SSEN:1;
            _IO CKE:1;
            _IO SMP:1;
         _IO MODE16:1;
         _IO DISSDO:1;
         _IO DISSCK:1;
            };
    struct {
           _IO PPRE0:1;
           _IO PPRE1:1;
           _IO SPRE0:1;
           _IO SPRE1:1;
           _IO SPRE2:1;
            };
}SPI1CON1bits;

#define SPI1CON1   ((SPI1CON1bits*)(SPI1CON1_BASE))
/*****************************************************************************/
typedef union{
 struct{
              _IO :1;
        _IO FRMDLY:1;
             _IO :11;
        _IO FRMPOL:1;
        _IO SPIFSD:1;
         _IO FRMEN:1;
        };
}SPI1CON2bits;

#define SPI1CON2   ((SPI1CON2bits*)(SPI1CON2_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO SPI1BUF:16;//BUG!!!
    };
  }SPI1BUFbits;

#define SPI1BUFR   ((SPI1BUFbits*)(SPI1BUF_BASE))
/*****************************************************************************/
//                                ADC1 MODUL:
//                  (MODUL ANALOGNO-DIGITALNOG PRETVARACA)
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUF0bits;

#define ADC1BUF0   ((ADC1BUF0bits*)(ADC1BUF0_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUF1bits;

#define ADC1BUF1   ((ADC1BUF1bits*)(ADC1BUF1_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUF2bits;

#define ADC1BUF2   ((ADC1BUF2bits*)(ADC1BUF2_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUF3bits;

#define ADC1BUF3   ((ADC1BUF3bits*)(ADC1BUF3_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUF4bits;

#define ADC1BUF4   ((ADC1BUF4bits*)(ADC1BUF4_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUF5bits;

#define ADC1BUF5   ((ADC1BUF5bits*)(ADC1BUF5_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUF6bits;

#define ADC1BUF6   ((ADC1BUF6bits*)(ADC1BUF6_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUF7bits;

#define ADC1BUF7   ((ADC1BUF7bits*)(ADC1BUF7_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUF8bits;

#define ADC1BUF8   ((ADC1BUF8bits*)(ADC1BUF8_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUF9bits;

#define ADC1BUF9   ((ADC1BUF9bits*)(ADC1BUF9_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUFAbits;

#define ADC1BUFA   ((ADC1BUFAbits*)(ADC1BUFA_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUFBbits;

#define ADC1BUFBR   ((ADC1BUFBbits*)(ADC1BUFB_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUFCbits;

#define ADC1BUFC   ((ADC1BUFCbits*)(ADC1BUFC_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUFDbits;

#define ADC1BUFD   ((ADC1BUFDbits*)(ADC1BUFD_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUFEbits;

#define ADC1BUFE   ((ADC1BUFEbits*)(ADC1BUFE_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO ADCBUF:16;//BUG!!!
    };
  }ADC1BUFFbits;

#define ADC1BUFF   ((ADC1BUFFbits*)(ADC1BUFF_BASE))
/*****************************************************************************/
typedef union {
    struct{
           _IO ADCON1:16;//Zbog brze inicijalizacije periferala.
            };
    struct {
           _IO DONE:1;
           _IO SAMP:1;
           _IO ASAM:1;
         _IO SIMSAM:1;
               _IO :1;
           _IO SSRC:3;
           _IO FORM:2;
          _IO AD12B:1;
               _IO :2;
         _IO ADSIDL:1;
               _IO :1;
           _IO ADON:1;
           };
    struct {
                _IO :5;
           _IO SSRC0:1;
           _IO SSRC1:1;
           _IO SSRC2:1;
           _IO FORM0:1;
           _IO FORM1:1;
            };
}AD1CON1bits;

#define AD1CON1   ((AD1CON1bits*)(AD1CON1_BASE))
/*****************************************************************************/
typedef union {
    struct{
           _IO ADCON2:16;//Zbog brze inicijalizacije periferala.
            };
    struct {
           _IO ALTS:1;
           _IO BUFM:1;
           _IO SMPI:4;
               _IO :1;
           _IO BUFS:1;
           _IO CHPS:2;
          _IO CSCNA:1;
               _IO :2;
           _IO VCFG:3;
             };
    struct {
                _IO :2;
           _IO SMPI0:1;
           _IO SMPI1:1;
           _IO SMPI2:1;
           _IO SMPI3:1;
                _IO :2;
           _IO CHPS0:1;
           _IO CHPS1:1;
                _IO :3;
           _IO VCFG0:1;
           _IO VCFG1:1;
           _IO VCFG2:1;
              };
}AD1CON2bits;

#define AD1CON2   ((AD1CON2bits*)(AD1CON2_BASE))
/*****************************************************************************/
typedef union {
    struct{
           _IO ADCON3:16;//Zbog brze inicijalizacije periferala.
            };
    struct {
           _IO ADCS:8;
           _IO SAMC:5;
               _IO :2;
           _IO ADRC:1;
            };
    struct {
           _IO ADCS0:1;
           _IO ADCS1:1;
           _IO ADCS2:1;
           _IO ADCS3:1;
           _IO ADCS4:1;
           _IO ADCS5:1;
           _IO ADCS6:1;
           _IO ADCS7:1;
           _IO SAMC0:1;
           _IO SAMC1:1;
           _IO SAMC2:1;
           _IO SAMC3:1;
           _IO SAMC4:1;
             };
}AD1CON3bits;

#define AD1CON3   ((AD1CON3bits*)(AD1CON3_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO CH123SA:1;
           _IO CH123NA:2;
                  _IO :5;
           _IO CH123SB:1;
           _IO CH123NB:2;
             };
    struct {
                   _IO :1;
           _IO CH123NA0:1;
           _IO CH123NA1:1;
                   _IO :6;
           _IO CH123NB0:1;
           _IO CH123NB1:1;
            };
}AD1CHS123bits;

#define AD1CHS123   ((AD1CHS123bits*)(AD1CHS123_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO CH0SA:5;
                _IO :2;
           _IO CH0NA:1;
           _IO CH0SB:5;
                _IO :2;
           _IO CH0NB:1;
            };
    struct {
           _IO CH0SA0:1;
           _IO CH0SA1:1;
           _IO CH0SA2:1;
           _IO CH0SA3:1;
           _IO CH0SA4:1;
                 _IO :3;
           _IO CH0SB0:1;
           _IO CH0SB1:1;
           _IO CH0SB2:1;
           _IO CH0SB3:1;
           _IO CH0SB4:1;
             };
}AD1CHS0bits;

#define AD1CHS0   ((AD1CHS0bits*)(AD1CHS0_BASE))
/*****************************************************************************/
typedef union{
struct{
        _IO PCFG:9;
       };
struct{
       _IO PCFG0:1;
       _IO PCFG1:1;
       _IO PCFG2:1;
       _IO PCFG3:1;
       _IO PCFG4:1;
       _IO PCFG5:1;
       _IO PCFG6:1;
       _IO PCFG7:1;
       _IO PCFG8:1;
        };
}AD1PCFGLbits;

#define AD1PCFGL   ((AD1PCFGLbits*)(AD1PCFGL_BASE))
/*****************************************************************************/
typedef union{
 struct{
       _IO CSSL:9;    
        };
 struct{
       _IO CSS0:1;
       _IO CSS1:1;
       _IO CSS2:1;
       _IO CSS3:1;
       _IO CSS4:1;
       _IO CSS5:1;
       _IO CSS6:1;
       _IO CSS7:1;
       _IO CSS8:1;
         };
}AD1CSSLbits;

#define AD1CSSL   ((AD1CSSLbits*)(AD1CSSL_BASE))
/*****************************************************************************/
//                     GPIO (PORT) REGISTRI:(23 registra)
//                     (KONTROLA DIGITALNIH I/O PINOVA)
/*****************************************************************************/
typedef union{
 struct{
       _IO TRISL:5; 
             _IO:2;
       _IO TRISH:4;
        };
 struct{
      _IO TRIS:11;      
        };
 struct{
       _IO TRISA0:1;
       _IO TRISA1:1;
       _IO TRISA2:1;
       _IO TRISA3:1;
       _IO TRISA4:1;
             _IO :2;
       _IO TRISA7:1;
       _IO TRISA8:1;
       _IO TRISA9:1;
      _IO TRISA10:1;
        };
}TRISAbits;

#define TRISA   ((TRISAbits*)(TRISA_BASE))
/*****************************************************************************/
typedef union{
 struct{
       _IO PORTAL:5; 
              _IO:2;
       _IO PORTAH:4;
        };
 struct{
      _IO PORTAR:16;      
        };
 struct{
          _IO RA0:1;
          _IO RA1:1;
          _IO RA2:1;
          _IO RA3:1;
          _IO RA4:1;
             _IO :2;
          _IO RA7:1;
          _IO RA8:1;
          _IO RA9:1;
         _IO RA10:1;
         };
}PORTAbits;

#define PORTA   ((PORTAbits*)(PORTA_BASE))
/*****************************************************************************/
typedef union{
 struct{
       _IO GPOAL:5; 
             _IO:2;
       _IO GPOAH:4;
        };
 struct{
       _IO GPOA:16;      
        };
 struct{
       _IO LATA0:1;
       _IO LATA1:1;
       _IO LATA2:1;
       _IO LATA3:1;
       _IO LATA4:1;
            _IO :2;
       _IO LATA7:1;
       _IO LATA8:1;
       _IO LATA9:1;
      _IO LATA10:1;
         };
  struct{
         _IO LA0:1;
         _IO LA1:1;
         _IO LA2:1;
         _IO LA3:1;
         _IO LA4:1;
            _IO :2;
         _IO LA7:1;
         _IO LA8:1;
         _IO LA9:1;
        _IO LA10:1;
         };
}LATAbits;

#define LATA   ((LATAbits*)(LATA_BASE))
/*****************************************************************************/
typedef union{
 struct{
       _IO ODCAL:5; 
             _IO:2;
       _IO ODCAH:4;
        };
 struct{
      _IO ODCAR:16;      
        };
 struct{
       _IO ODCA0:1;
       _IO ODCA1:1;
       _IO ODCA2:1;
       _IO ODCA3:1;
       _IO ODCA4:1;
            _IO :2;
       _IO ODCA7:1;
       _IO ODCA8:1;
       _IO ODCA9:1;
      _IO ODCA10:1;
         };
}ODCAbits;

#define ODCA   ((ODCAbits*)(ODCA_BASE))
/*****************************************************************************/
typedef union{
 struct{
      _IO TRIS:16;      
        };
 struct{
       _IO TRISB0:1;
       _IO TRISB1:1;
       _IO TRISB2:1;
       _IO TRISB3:1;
       _IO TRISB4:1;
       _IO TRISB5:1;
       _IO TRISB6:1;
       _IO TRISB7:1;
       _IO TRISB8:1;
       _IO TRISB9:1;
      _IO TRISB10:1;
      _IO TRISB11:1;
      _IO TRISB12:1;
      _IO TRISB13:1;
      _IO TRISB14:1;
      _IO TRISB15:1;
         };
}TRISBbits;

#define TRISB   ((TRISBbits*)(TRISB_BASE))
/*****************************************************************************/
typedef union{
 struct{
      _IO PORT:16;      
        };
 struct{
          _IO RB0:1;
          _IO RB1:1;
          _IO RB2:1;
          _IO RB3:1;
          _IO RB4:1;
          _IO RB5:1;
          _IO RB6:1;
          _IO RB7:1;
          _IO RB8:1;
          _IO RB9:1;
         _IO RB10:1;
         _IO RB11:1;
         _IO RB12:1;
         _IO RB13:1;
         _IO RB14:1;
         _IO RB15:1;
           };
}PORTBbits;

#define PORTB   ((PORTBbits*)(PORTB_BASE))
/*****************************************************************************/
typedef union{
 struct{
      _IO LAT:16;      
        };
 struct{
        _IO LB0:1;
        _IO LB1:1;
        _IO LB2:1;
        _IO LB3:1;
        _IO LB4:1;
        _IO LB5:1;
        _IO LB6:1;
        _IO LB7:1;
        _IO LB8:1;
        _IO LB9:1;
       _IO LB10:1;
       _IO LB11:1;
       _IO LB12:1;
       _IO LB13:1;
       _IO LB14:1;
       _IO LB15:1;
         };
 struct{
       _IO LATB0:1;
       _IO LATB1:1;
       _IO LATB2:1;
       _IO LATB3:1;
       _IO LATB4:1;
       _IO LATB5:1;
       _IO LATB6:1;
       _IO LATB7:1;
       _IO LATB8:1;
       _IO LATB9:1;
      _IO LATB10:1;
      _IO LATB11:1;
      _IO LATB12:1;
      _IO LATB13:1;
      _IO LATB14:1;
      _IO LATB15:1;
          };
}LATBbits;

#define LATB   ((LATBbits*)(LATB_BASE))
/*****************************************************************************/
typedef union{
 struct{
      _IO ODCBR:16;      
        };
 struct{
       _IO ODCB0:1;
       _IO ODCB1:1;
       _IO ODCB2:1;
       _IO ODCB3:1;
       _IO ODCB4:1;
       _IO ODCB5:1;
       _IO ODCB6:1;
       _IO ODCB7:1;
       _IO ODCB8:1;
       _IO ODCB9:1;
      _IO ODCB10:1;
      _IO ODCB11:1;
      _IO ODCB12:1;
      _IO ODCB13:1;
      _IO ODCB14:1;
      _IO ODCB15:1;
           };
}ODCBbits;

#define ODCB   ((ODCBbits*)(ODCB_BASE))
/*****************************************************************************/
typedef union{
 struct{
      _IO TRIS:10;      
        };
 struct{
       _IO TRISC0:1;
       _IO TRISC1:1;
       _IO TRISC2:1;
       _IO TRISC3:1;
       _IO TRISC4:1;
       _IO TRISC5:1;
       _IO TRISC6:1;
       _IO TRISC7:1;
       _IO TRISC8:1;
       _IO TRISC9:1;
          };
}TRISCbits;

#define TRISC   ((TRISCbits*)(TRISC_BASE))
/*****************************************************************************/
typedef union{
 struct{
      _IO PORTCR:10;      
        };
 struct{
          _IO RC0:1;
          _IO RC1:1;
          _IO RC2:1;
          _IO RC3:1;
          _IO RC4:1;
          _IO RC6:1;
          _IO RC7:1;
          _IO RC8:1;
          _IO RC9:1;
          };
}PORTCbits;

#define PORTC   ((PORTCbits*)(PORTC_BASE))
/*****************************************************************************/
typedef union{
 struct{
      _IO LAT:10;      
        };
 struct{
        _IO LC0:1;
        _IO LC1:1;
        _IO LC2:1;
        _IO LC3:1;
        _IO LC4:1;
        _IO LC5:1;
        _IO LC6:1;
        _IO LC7:1;
        _IO LC8:1;
        _IO LC9:1;         
        };
 struct{
      _IO LATC0:1;
      _IO LATC1:1;
      _IO LATC2:1;
      _IO LATC3:1;
      _IO LATC4:1;
      _IO LATC5:1;
      _IO LATC6:1;
      _IO LATC7:1;
      _IO LATC8:1;
      _IO LATC9:1;
          };
}LATCbits;

#define LATC   ((LATCbits*)(LATC_BASE))
/*****************************************************************************/
typedef union{
 struct{
      _IO ODCCR:10;      
        };
 struct{
       _IO ODCC0:1;
       _IO ODCC1:1;
       _IO ODCC2:1;
       _IO ODCC3:1;
       _IO ODCC4:1;
       _IO ODCC5:1;
       _IO ODCC6:1;
       _IO ODCC7:1;
       _IO ODCC8:1;
       _IO ODCC9:1;
          };
}ODCCbits;

#define ODCC   ((ODCCbits*)(ODCC_BASE))
/*****************************************************************************/
//           REGISTRI REMAPIRANJA ULAZNIH PINOVA ZA PERIFERALE:(13 registara)
//                            (INUT PIN REMAPPING)
/*****************************************************************************/
typedef union {
    struct {
                _IO :8;
           _IO INT1R:5;
             };
    struct {
                 _IO :8;
           _IO INT1R0:1;
           _IO INT1R1:1;
           _IO INT1R2:1;
           _IO INT1R3:1;
           _IO INT1R4:1;
            };
}RPINR0bits;

#define RPINR0   ((RPINR0bits*)(RPINR0_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO INT2R:5;
            };
    struct {
           _IO INT2R0:1;
           _IO INT2R1:1;
           _IO INT2R2:1;
           _IO INT2R3:1;
           _IO INT2R4:1;
            };
}RPINR1bits;

#define RPINR1   ((RPINR1bits*)(RPINR1_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO T2CKR:5;
                _IO :3;
           _IO T3CKR:5;
            };
    struct {
           _IO T2CKR0:1;
           _IO T2CKR1:1;
           _IO T2CKR2:1;
           _IO T2CKR3:1;
           _IO T2CKR4:1;
                 _IO :3;
           _IO T3CKR0:1;
           _IO T3CKR1:1;
           _IO T3CKR2:1;
           _IO T3CKR3:1;
           _IO T3CKR4:1;
             };
}RPINR3bits;

#define RPINR3   ((RPINR3bits*)(RPINR3_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO IC1R:5;
               _IO :3;
           _IO IC2R:5;
             };
    struct {
           _IO IC1R0:1;
           _IO IC1R1:1;
           _IO IC1R2:1;
           _IO IC1R3:1;
           _IO IC1R4:1;
                _IO :3;
           _IO IC2R0:1;
           _IO IC2R1:1;
           _IO IC2R2:1;
           _IO IC2R3:1;
           _IO IC2R4:1;
             };
}RPINR7bits;

#define RPINR7   ((RPINR7bits*)(RPINR7_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO IC7R:5;
               _IO :3;
           _IO IC8R:5;
            };
    struct {
           _IO IC7R0:1;
           _IO IC7R1:1;
           _IO IC7R2:1;
           _IO IC7R3:1;
           _IO IC7R4:1;
                _IO :3;
           _IO IC8R0:1;
           _IO IC8R1:1;
           _IO IC8R2:1;
           _IO IC8R3:1;
           _IO IC8R4:1;
            };
}RPINR10bits;

#define RPINR10   ((RPINR10bits*)(RPINR10_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO OCFAR:5;
            };
    struct {
           _IO OCFAR0:1;
           _IO OCFAR1:1;
           _IO OCFAR2:1;
           _IO OCFAR3:1;
           _IO OCFAR4:1;
             };
}RPINR11bits;

#define RPINR11   ((RPINR11bits*)(RPINR11_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO FLTA1R:5;
            };
    struct {
           _IO FLTA1R0:1;
           _IO FLTA1R1:1;
           _IO FLTA1R2:1;
           _IO FLTA1R3:1;
           _IO FLTA1R4:1;
             };
}RPINR12bits;

#define RPINR12   ((RPINR12bits*)(RPINR12_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO FLTA2R:5;
            };
    struct {
           _IO FLTA2R0:1;
           _IO FLTA2R1:1;
           _IO FLTA2R2:1;
           _IO FLTA2R3:1;
           _IO FLTA2R4:1;
             };
}RPINR13bits;

#define RPINR13   ((RPINR13bits*)(RPINR13_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO QEA1R:5;
                _IO :3;
           _IO QEB1R:5;
            };
    struct {
           _IO QEA1R0:1;
           _IO QEA1R1:1;
           _IO QEA1R2:1;
           _IO QEA1R3:1;
           _IO QEA1R4:1;
                 _IO :3;
           _IO QEB1R0:1;
           _IO QEB1R1:1;
           _IO QEB1R2:1;
           _IO QEB1R3:1;
           _IO QEB1R4:1;
             };
}RPINR14bits;

#define RPINR14   ((RPINR14bits*)(RPINR14_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO INDX1R:5;
            };
    struct {
           _IO INDX1R0:1;
           _IO INDX1R1:1;
           _IO INDX1R2:1;
           _IO INDX1R3:1;
           _IO INDX1R4:1;
            };
}RPINR15bits;

#define RPINR15   ((RPINR15bits*)(RPINR15_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO U1RXR:5;
                 _IO :3;
           _IO U1CTSR:5;
            };
    struct {
           _IO U1RXR0:1;
           _IO U1RXR1:1;
           _IO U1RXR2:1;
           _IO U1RXR3:1;
           _IO U1RXR4:1;
                 _IO :3;
          _IO U1CTSR0:1;
          _IO U1CTSR1:1;
          _IO U1CTSR2:1;
          _IO U1CTSR3:1;
          _IO U1CTSR4:1;
             };
}RPINR18bits;

#define RPINR18   ((RPINR18bits*)(RPINR18_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO SDI1R:5;
                _IO :3;
           _IO SCK1R:5;
            };
    struct {
           _IO SDI1R0:1;
           _IO SDI1R1:1;
           _IO SDI1R2:1;
           _IO SDI1R3:1;
           _IO SDI1R4:1;
                 _IO :3;
           _IO SCK1R0:1;
           _IO SCK1R1:1;
           _IO SCK1R2:1;
           _IO SCK1R3:1;
           _IO SCK1R4:1;
             };
}RPINR20bits;

#define RPINR20   ((RPINR20bits*)(RPINR20_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO SS1R:5;
            };
    struct {
           _IO SS1R0:1;
           _IO SS1R1:1;
           _IO SS1R2:1;
           _IO SS1R3:1;
           _IO SS1R4:1;
            };
}RPINR21bits;

#define RPINR21   ((RPINR21bits*)(RPINR21_BASE))
/*****************************************************************************/
//           REGISTRI REMAPIRANJA IZLAZNIH PINOVA ZA PERIFERALE:(13 registara)
//                     (OUTPUT PIN REMAPPING)
/*****************************************************************************/
typedef union {
    struct {
           _IO RP0R:5;
               _IO :3;
           _IO RP1R:5;
            };
    struct {
           _IO RP0R0:1;
           _IO RP0R1:1;
           _IO RP0R2:1;
           _IO RP0R3:1;
           _IO RP0R4:1;
                _IO :3;
           _IO RP1R0:1;
           _IO RP1R1:1;
           _IO RP1R2:1;
           _IO RP1R3:1;
           _IO RP1R4:1;
              };
}RPOR0bits;

#define RPOR0   ((RPOR0bits*)(RPOR0_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO RP2R:5;
               _IO :3;
           _IO RP3R:5;
            };
    struct {
           _IO RP2R0:1;
           _IO RP2R1:1;
           _IO RP2R2:1;
           _IO RP2R3:1;
           _IO RP2R4:1;
                _IO :3;
           _IO RP3R0:1;
           _IO RP3R1:1;
           _IO RP3R2:1;
           _IO RP3R3:1;
           _IO RP3R4:1;
            };
}RPOR1bits;

#define RPOR1   ((RPOR1bits*)(RPOR1_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO RP4R:5;
               _IO :3;
           _IO RP5R:5;
            };
    struct {
           _IO RP4R0:1;
           _IO RP4R1:1;
           _IO RP4R2:1;
           _IO RP4R3:1;
           _IO RP4R4:1;
                _IO :3;
           _IO RP5R0:1;
           _IO RP5R1:1;
           _IO RP5R2:1;
           _IO RP5R3:1;
           _IO RP5R4:1;
             };
}RPOR2bits;

#define RPOR2   ((RPOR2bits*)(RPOR2_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO RP6R:5;
               _IO :3;
           _IO RP7R:5;
            };
    struct {
           _IO RP6R0:1;
           _IO RP6R1:1;
           _IO RP6R2:1;
           _IO RP6R3:1;
           _IO RP6R4:1;
                _IO :3;
           _IO RP7R0:1;
           _IO RP7R1:1;
           _IO RP7R2:1;
           _IO RP7R3:1;
           _IO RP7R4:1;
              };
}RPOR3bits;

#define RPOR3   ((RPOR3bits*)(RPOR3_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO RP8R:5;
               _IO :3;
           _IO RP9R:5;
            };
    struct {
           _IO RP8R0:1;
           _IO RP8R1:1;
           _IO RP8R2:1;
           _IO RP8R3:1;
           _IO RP8R4:1;
                _IO :3;
           _IO RP9R0:1;
           _IO RP9R1:1;
           _IO RP9R2:1;
           _IO RP9R3:1;
           _IO RP9R4:1;
             };
}RPOR4bits;

#define RPOR4   ((RPOR4bits*)(RPOR4_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO RP10R:5;
                _IO :3;
           _IO RP11R:5;
            };
    struct {
           _IO RP10R0:1;
           _IO RP10R1:1;
           _IO RP10R2:1;
           _IO RP10R3:1;
           _IO RP10R4:1;
                 _IO :3;
           _IO RP11R0:1;
           _IO RP11R1:1;
           _IO RP11R2:1;
           _IO RP11R3:1;
           _IO RP11R4:1;
             };
}RPOR5bits;

#define RPOR5   ((RPOR5bits*)(RPOR5_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO RP12R:5;
                _IO :3;
           _IO RP13R:5;
             };
    struct {
           _IO RP12R0:1;
           _IO RP12R1:1;
           _IO RP12R2:1;
           _IO RP12R3:1;
           _IO RP12R4:1;
                 _IO :3;
           _IO RP13R0:1;
           _IO RP13R1:1;
           _IO RP13R2:1;
           _IO RP13R3:1;
           _IO RP13R4:1;
             };
}RPOR6bits;

#define RPOR6   ((RPOR6bits*)(RPOR6_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO RP14R:5;
                _IO :3;
           _IO RP15R:5;
            };
    struct {
           _IO RP14R0:1;
           _IO RP14R1:1;
           _IO RP14R2:1;
           _IO RP14R3:1;
           _IO RP14R4:1;
                 _IO :3;
           _IO RP15R0:1;
           _IO RP15R1:1;
           _IO RP15R2:1;
           _IO RP15R3:1;
           _IO RP15R4:1;
            };
}RPOR7bits;

#define RPOR7   ((RPOR7bits*)(RPOR7_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO RP16R:5;
                _IO :3;
           _IO RP17R:5;
            };
    struct {
           _IO RP16R0:1;
           _IO RP16R1:1;
           _IO RP16R2:1;
           _IO RP16R3:1;
           _IO RP16R4:1;
                 _IO :3;
           _IO RP17R0:1;
           _IO RP17R1:1;
           _IO RP17R2:1;
           _IO RP17R3:1;
           _IO RP17R4:1;
              };
}RPOR8bits;

#define RPOR8   ((RPOR8bits*)(RPOR8_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO RP18R:5;
                 _IO :3;
            _IO RP19R:5;
            };
    struct {
           _IO RP18R0:1;
           _IO RP18R1:1;
           _IO RP18R2:1;
           _IO RP18R3:1;
           _IO RP18R4:1;
                 _IO :3;
           _IO RP19R0:1;
           _IO RP19R1:1;
           _IO RP19R2:1;
           _IO RP19R3:1;
           _IO RP19R4:1;
             };
}RPOR9bits;

#define RPOR9   ((RPOR9bits*)(RPOR9_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO RP20R:5;
                _IO :3;
           _IO RP21R:5;
            };
    struct {
           _IO RP20R0:1;
           _IO RP20R1:1;
           _IO RP20R2:1;
           _IO RP20R3:1;
           _IO RP20R4:1;
                 _IO :3;
           _IO RP21R0:1;
           _IO RP21R1:1;
           _IO RP21R2:1;
           _IO RP21R3:1;
           _IO RP21R4:1;
             };
}RPOR10bits;

#define RPOR10   ((RPOR10bits*)(RPOR10_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO RP22R:5;
                _IO :3;
           _IO RP23R:5;
            };
    struct {
           _IO RP22R0:1;
           _IO RP22R1:1;
           _IO RP22R2:1;
           _IO RP22R3:1;
           _IO RP22R4:1;
                 _IO :3;
           _IO RP23R0:1;
           _IO RP23R1:1;
           _IO RP23R2:1;
           _IO RP23R3:1;
           _IO RP23R4:1;
              };
}RPOR11bits;

#define RPOR11   ((RPOR11bits*)(RPOR11_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO RP24R:5;
                _IO :3;
           _IO RP25R:5;
            };
    struct {
           _IO RP24R0:1;
           _IO RP24R1:1;
           _IO RP24R2:1;
           _IO RP24R3:1;
           _IO RP24R4:1;
                 _IO :3;
           _IO RP25R0:1;
           _IO RP25R1:1;
           _IO RP25R2:1;
           _IO RP25R3:1;
           _IO RP25R4:1;
             };
}RPOR12bits;

#define RPOR12   ((RPOR12bits*)(RPOR12_BASE))
/*****************************************************************************/
//                        REGISTRI KONTROLE SISTEMA:
//                            
/*****************************************************************************/
typedef union{
 struct{
       _IO POR:1;
       _IO BOR:1;
      _IO IDLE:1;
     _IO SLEEP:1;
      _IO WDTO:1;
    _IO SWDTEN:1;
       _IO SWR:1;
      _IO EXTR:1;
     _IO VREGS:1;
        _IO CM:1;
          _IO :4;
    _IO IOPUWR:1;
     _IO TRAPR:1;
        };
}RCONbits;

#define RCON   ((RCONbits*)(RCON_BASE))
/*****************************************************************************/
typedef union {
    struct {
             _IO OSWEN:1;
           _IO LPOSCEN:1;
                  _IO :1;
                _IO CF:1;
                  _IO :1;
              _IO LOCK:1;
            _IO IOLOCK:1;
           _IO CLKLOCK:1;
              _IO NOSC:3;
                  _IO :1;
              _IO COSC:3;
             };
    struct {
                _IO :8;
           _IO NOSC0:1;
           _IO NOSC1:1;
           _IO NOSC2:1;
                _IO :1;
           _IO COSC0:1;
           _IO COSC1:1;
           _IO COSC2:1;
            };
}OSCCONbits;

#define OSCCON   ((OSCCONbits*)(OSCCON_BASE))
/*****************************************************************************/
typedef union {
    struct {
            _IO PLLPRE:5;
                  _IO :1;
           _IO PLLPOST:2;
            _IO FRCDIV:3;
             _IO DOZEN:1;
              _IO DOZE:3;
               _IO ROI:1;
             };
    struct {
           _IO PLLPRE0:1;
           _IO PLLPRE1:1;
           _IO PLLPRE2:1;
           _IO PLLPRE3:1;
           _IO PLLPRE4:1;
                  _IO :1;
          _IO PLLPOST0:1;
          _IO PLLPOST1:1;
           _IO FRCDIV0:1;
           _IO FRCDIV1:1;
           _IO FRCDIV2:1;
                  _IO :1;
             _IO DOZE0:1;
             _IO DOZE1:1;
             _IO DOZE2:1;
             };
}CLKDIVbits;

#define CLKDIV   ((CLKDIVbits*)(CLKDIV_BASE))
/*****************************************************************************/
typedef  union {
    struct {
           _IO PLLDIV:9;
             };
    struct {
           _IO PLLDIV0:1;
           _IO PLLDIV1:1;
           _IO PLLDIV2:1;
           _IO PLLDIV3:1;
           _IO PLLDIV4:1;
           _IO PLLDIV5:1;
           _IO PLLDIV6:1;
           _IO PLLDIV7:1;
           _IO PLLDIV8:1;
             };
}PLLFBDbits;

#define PLLFBD   ((PLLFBDbits*)(PLLFBD_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO TUN:6;
            };
    struct {
           _IO TUN0:1;
           _IO TUN1:1;
           _IO TUN2:1;
           _IO TUN3:1;
           _IO TUN4:1;
           _IO TUN5:1;
            };
}OSCTUNbits;

#define OSCTUN   ((OSCTUNbits*)(OSCTUN_BASE))
/*****************************************************************************/
//                        NVM KONTROLNI REGISTRI:(2 registra)
//                            
/*****************************************************************************/
typedef union {
    struct {
           _IO NVMOP:4;
                _IO :2;
           _IO ERASE:1;
                _IO :6;
           _IO WRERR:1;
            _IO WREN:1;
              _IO WR:1;
              };
    struct {
           _IO NVMOP0:1;
           _IO NVMOP1:1;
           _IO NVMOP2:1;
           _IO NVMOP3:1;
            };
}NVMCONbits;

#define NVMCON   ((NVMCONbits*)(NVMCON_BASE))
/*****************************************************************************/
typedef union
 {
  struct
   {
     _IO NVMKEYR:8;//BUG!!!
    };
  }NVMKEYbits;

#define NVMKEY   ((NVMKEYbits*)(NVMKEY_BASE))
/*****************************************************************************/
//                        PMD KONTROLNI REGISTRI:(3 registra)
//                        (ONEMOGUCAVANJE MODULA PERIFERALA)   
/*****************************************************************************/
typedef union {
    struct {
           _IO AD1MD:1;
                _IO :2;
          _IO SPI1MD:1;
                _IO :1;
            _IO U1MD:1;
                 _IO:1;
          _IO I2C1MD:1;
                 _IO:1;
          _IO PWM1MD:1;
           _IO QEIMD:1;
            _IO T1MD:1;
            _IO T2MD:1;
            _IO T3MD:1;
              };
}PMD1bits;

#define PMD1   ((PMD1bits*)(PMD1_BASE))
/*****************************************************************************/
typedef union {
    struct {
           _IO OC1MD:1;
           _IO OC2MD:1;
                 _IO:6;
           _IO IC1MD:1;
           _IO IC2MD:1;
                 _IO:4;
           _IO IC7MD:1;
           _IO IC8MD:1;
              };
}PMD2bits;

#define PMD2   ((PMD2bits*)(PMD2_BASE))
/*****************************************************************************/
typedef union {
    struct {
                 _IO:4;
          _IO PWM2MD:1;
              };
}PMD3bits;

#define PMD3   ((PMD3bits*)(PMD3_BASE))
/*****************************************************************************/
#endif
