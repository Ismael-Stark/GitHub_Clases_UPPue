#byte INDF0 = 0x000

#byte INDF1 = 0x001

#byte PCL = 0x002

struct STATUS {
   unsigned int C:1;
   unsigned int DC:1;
   unsigned int Z:1;
   unsigned int PD:1;
   unsigned int TO:1;
} STATUS;
#byte STATUS = 0x003

#word FSR0 = 0x004

#word FSR1 = 0x006

#byte BSR = 0x008

#byte WREG = 0x009

#byte PCLATH = 0x00A

struct INTCON {
   unsigned int INTEDG:1;
   unsigned int :5;
   unsigned int PEIE:1;
   unsigned int GIE:1;
} INTCON;
#byte INTCON = 0x00B

struct PORTA {
   unsigned int RA0:1;
   unsigned int RA1:1;
   unsigned int RA2:1;
   unsigned int RA3:1;
   unsigned int RA4:1;
   unsigned int RA5:1;
   unsigned int RA6:1;
   unsigned int RA7:1;
} PORTA;
#byte PORTA = 0x00C

struct PORTB {
   unsigned int RB0:1;
   unsigned int RB1:1;
   unsigned int RB2:1;
   unsigned int RB3:1;
   unsigned int RB4:1;
   unsigned int RB5:1;
   unsigned int RB6:1;
   unsigned int RB7:1;
} PORTB;
#byte PORTB = 0x00D

struct PORTC {
   unsigned int RC0:1;
   unsigned int RC1:1;
   unsigned int RC2:1;
   unsigned int RC3:1;
   unsigned int RC4:1;
   unsigned int RC5:1;
   unsigned int RC6:1;
   unsigned int RC7:1;
} PORTC;
#byte PORTC = 0x00E

struct PORTE {
   unsigned int RE0:1;
   unsigned int RE1:1;
   unsigned int RE2:1;
   unsigned int RE3:1;
   unsigned int RE4:1;
   unsigned int RE5:1;
   unsigned int RE6:1;
   unsigned int RE7:1;
} PORTE;
#byte PORTE = 0x010

struct TRISA {
   unsigned int TRISA0:1;
   unsigned int TRISA1:1;
   unsigned int TRISA2:1;
   unsigned int TRISA3:1;
   unsigned int TRISA4:1;
   unsigned int TRISA5:1;
   unsigned int TRISA6:1;
   unsigned int TRISA7:1;
} TRISA;
#byte TRISA = 0x011

struct TRISB {
   unsigned int TRISB0:1;
   unsigned int TRISB1:1;
   unsigned int TRISB2:1;
   unsigned int TRISB3:1;
   unsigned int TRISB4:1;
   unsigned int TRISB5:1;
   unsigned int TRISB6:1;
   unsigned int TRISB7:1;
} TRISB;
#byte TRISB = 0x012

struct TRISC {
   unsigned int TRISC0:1;
   unsigned int TRISC1:1;
   unsigned int TRISC2:1;
   unsigned int TRISC3:1;
   unsigned int TRISC4:1;
   unsigned int TRISC5:1;
   unsigned int TRISC6:1;
   unsigned int TRISC7:1;
} TRISC;
#byte TRISC = 0x013

struct LATA {
   unsigned int LATA0:1;
   unsigned int LATA1:1;
   unsigned int LATA2:1;
   unsigned int LATA3:1;
   unsigned int LATA4:1;
   unsigned int LATA5:1;
   unsigned int LATA6:1;
   unsigned int LATA7:1;
} LATA;
#byte LATA = 0x016

struct LATB {
   unsigned int LATB0:1;
   unsigned int LATB1:1;
   unsigned int LATB2:1;
   unsigned int LATB3:1;
   unsigned int LATB4:1;
   unsigned int LATB5:1;
   unsigned int LATB6:1;
   unsigned int LATB7:1;
} LATB;
#byte LATB = 0x017

struct LATC {
   unsigned int LATC0:1;
   unsigned int LATC1:1;
   unsigned int LATC2:1;
   unsigned int LATC3:1;
   unsigned int LATC4:1;
   unsigned int LATC5:1;
   unsigned int LATC6:1;
   unsigned int LATC7:1;
} LATC;
#byte LATC = 0x018

struct TMR0 {
   unsigned int TMR0L:8;
} TMR0;
#byte TMR0 = 0x01C

struct TMR0H {
   union {
      struct {
         unsigned int TMR0H:8;
      };

      struct {
         unsigned int T0PR:8;
      };
   };
} TMR0H;
#byte TMR0H = 0x01D

struct T0CON0 {
   unsigned int T0OUTPS:4;
   unsigned int T016BIT:1;
   unsigned int T0OUT:1;
   unsigned int T0OE:1;
   unsigned int T0EN:1;
} T0CON0;
#byte T0CON0 = 0x01E

struct T0CON1 {
   unsigned int T0CKPS:4;
   unsigned int T0ASYNC:1;
   unsigned int T0CS:3;
} T0CON1;
#byte T0CON1 = 0x01F

#word ADRES = 0x08C

struct ADPREV {
   unsigned int ADPREV:8;
} ADPREV;
#byte ADPREV = 0x08E

struct ADPREVH {
   unsigned int ADPREV8:2;
   unsigned int ADPREV1:6;
} ADPREVH;
#byte ADPREVH = 0x08F

struct ADACC {
   unsigned int ADACC:8;
} ADACC;
#byte ADACC = 0x090

struct ADACCH {
   unsigned int ADACC8:2;
   unsigned int ADACC1:6;
} ADACCH;
#byte ADACCH = 0x091

struct ADCON0 {
   union {
      struct {
         unsigned int ADGO:1;
         unsigned int :1;
         unsigned int ADFM:2;
         unsigned int ADCS:1;
         unsigned int :1;
         unsigned int ADCONT:1;
         unsigned int ADON:1;
      };

   union {
      struct {
         unsigned int DONE:1;
         unsigned int :1;
         unsigned int ADFRM:2;
      };
   };

      struct {
         unsigned int GO:1;
      };
   };
} ADCON0;
#byte ADCON0 = 0x093

struct ADCON1 {
   unsigned int ADDSEN:1;
   unsigned int :4;
   unsigned int ADGPOL:1;
   unsigned int ADIPEN:1;
   unsigned int ADPPOL:1;
} ADCON1;
#byte ADCON1 = 0x094

struct ADCON2 {
   unsigned int ADMD:3;
   unsigned int ADACLR:1;
   unsigned int ADCRS:3;
   unsigned int ADPSIS:1;
} ADCON2;
#byte ADCON2 = 0x095

struct ADCON3 {
   unsigned int ADTMD:3;
   unsigned int ADSOI:1;
   unsigned int ADCALC:3;
} ADCON3;
#byte ADCON3 = 0x096

struct ADSTAT {
   unsigned int ADSTAT:3;
   unsigned int ADMACT:1;
   unsigned int ADMATH:1;
   unsigned int ADLTHR:1;
   unsigned int ADUTHR:1;
   unsigned int ADAOV:1;
} ADSTAT;
#byte ADSTAT = 0x097

#byte ADCLK = 0x098

#byte ADACT = 0x099

struct ADREF {
   unsigned int ADPREF:2;
   unsigned int :2;
   unsigned int ADNREF:1;
} ADREF;
#byte ADREF = 0x09A

#byte ADCAP = 0x09B

struct ADPRE {
   unsigned int ADPRE:8;
} ADPRE;
#byte ADPRE = 0x09C

struct ADACQ {
   unsigned int ADACQ:8;
} ADACQ;
#byte ADACQ = 0x09D

#byte ADPCH = 0x09E

struct ADCNT {
   unsigned int ADCNT:8;
} ADCNT;
#byte ADCNT = 0x10C

struct ADRPT {
   unsigned int ADRPT:8;
} ADRPT;
#byte ADRPT = 0x10D

struct ADLTH {
   unsigned int ADLTH:8;
} ADLTH;
#byte ADLTH = 0x10E

struct ADLTHH {
   unsigned int ADLTH8:2;
   unsigned int ADLTH1:6;
} ADLTHH;
#byte ADLTHH = 0x10F

struct ADUTH {
   unsigned int ADUTH:8;
} ADUTH;
#byte ADUTH = 0x110

struct ADUTHH {
   unsigned int ADUTH8:2;
   unsigned int ADUTH1:6;
} ADUTHH;
#byte ADUTHH = 0x111

struct ADSTPT {
   unsigned int ADSTPT:8;
} ADSTPT;
#byte ADSTPT = 0x112

struct ADSTPTH {
   unsigned int ADSTPT8:2;
   unsigned int ADSTPT1:6;
} ADSTPTH;
#byte ADSTPTH = 0x113

struct ADFLTR {
   unsigned int ADFLTR:8;
} ADFLTR;
#byte ADFLTR = 0x114

struct ADFLTRH {
   unsigned int ADFLTR8:2;
   unsigned int ADFLTR1:6;
} ADFLTRH;
#byte ADFLTRH = 0x115

struct ADERR {
   unsigned int ADERR:8;
} ADERR;
#byte ADERR = 0x116

struct ADERRH {
   unsigned int ADERR8:2;
   unsigned int ADERR1:6;
} ADERRH;
#byte ADERRH = 0x117

#byte RC1REG = 0x119

#byte TX1REG = 0x11A

#word SP1BRG = 0x11B

struct RC1STA {
   unsigned int RX9D:1;
   unsigned int OERR:1;
   unsigned int FERR:1;
   unsigned int ADDEN:1;
   unsigned int CREN:1;
   unsigned int SREN:1;
   unsigned int RX9:1;
   unsigned int SPEN:1;
} RC1STA;
#byte RC1STA = 0x11D

struct TX1STA {
   unsigned int TX9D:1;
   unsigned int TRMT:1;
   unsigned int BRGH:1;
   unsigned int SENDB:1;
   unsigned int SYNC:1;
   unsigned int TXEN:1;
   unsigned int TX9:1;
   unsigned int CSRC:1;
} TX1STA;
#byte TX1STA = 0x11E

struct BAUD1CON {
   unsigned int ABDEN:1;
   unsigned int WUE:1;
   unsigned int :1;
   unsigned int BRG16:1;
   unsigned int SCKP:1;
   unsigned int :1;
   unsigned int RCIDL:1;
   unsigned int ABDOVF:1;
} BAUD1CON;
#byte BAUD1CON = 0x11F

#byte SSP1BUF = 0x18C


struct SSP1ADD {
   unsigned int MSK:8;
} SSP1ADD;
#byte SSP1ADD = 0x18D


struct SSP1MSK {
   unsigned int MSK:8;
} SSP1MSK;
#byte SSP1MSK = 0x18E

struct SSP1STAT {
   union {
      struct {
         unsigned int BF:1;
         unsigned int UA:1;
         unsigned int R:1;
         unsigned int S:1;
         unsigned int P:1;
         unsigned int D:1;
         unsigned int CKE:1;
         unsigned int SMP:1;
      };

   union {
      struct {
         unsigned int :2;
         unsigned int R_W:1;
         unsigned int :2;
         unsigned int D_A:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int W:1;
         unsigned int :2;
         unsigned int A:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int WRITE:1;
         unsigned int S2:1;
         unsigned int P2:1;
         unsigned int ADDRESS:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int READ_WRITE:1;
         unsigned int I2C_START:1;
         unsigned int I2C_STOP:1;
         unsigned int DATA_ADDRESS:1;
      };
   };

   union {
      struct {
         unsigned int BF1:1;
         unsigned int UA1:1;
         unsigned int I2C_READ:1;
         unsigned int START:1;
         unsigned int STOP:1;
         unsigned int I2C_DAT:1;
         unsigned int CKE1:1;
         unsigned int SMP1:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int RW:1;
         unsigned int I2C_START1:1;
         unsigned int I2C_STOP2:1;
         unsigned int DA:1;
      };
   };

      struct {
         unsigned int :2;
         unsigned int W2:1;
         unsigned int :2;
         unsigned int A2:1;
      };
   };
} SSP1STAT;
#byte SSP1STAT = 0x18F

struct SSP1CON1 {
   unsigned int SSPM:4;
   unsigned int CKP:1;
   unsigned int SSPEN:1;
   unsigned int SSPOV:1;
   unsigned int WCOL:1;
} SSP1CON1;
#byte SSP1CON1 = 0x190

struct SSP1CON2 {
   union {
      struct {
         unsigned int SEN:1;
         unsigned int RSEN:1;
         unsigned int PEN:1;
         unsigned int RCEN:1;
         unsigned int ACKEN:1;
         unsigned int ACKDT:1;
         unsigned int ACKSTAT:1;
         unsigned int GCEN:1;
      };

   union {
      struct {
         unsigned int :1;
         unsigned int ADMSK:5;
      };
   };

      struct {
         unsigned int SEN1:1;
         unsigned int ADMSK1:5;
         unsigned int ACKSTAT1:1;
         unsigned int GCEN1:1;
      };
   };
} SSP1CON2;
#byte SSP1CON2 = 0x191

struct SSP1CON3 {
   unsigned int DHEN:1;
   unsigned int AHEN:1;
   unsigned int SBCDE:1;
   unsigned int SDAHT:1;
   unsigned int BOEN:1;
   unsigned int SCIE:1;
   unsigned int PCIE:1;
   unsigned int ACKTIM:1;
} SSP1CON3;
#byte SSP1CON3 = 0x192

#byte SSP2BUF = 0x196


struct SSP2ADD {
   union {
      struct {
         unsigned int MSK:8;
      };

      struct {
         unsigned int MSK02:1;
         unsigned int MSK12:1;
         unsigned int MSK22:1;
         unsigned int MSK32:1;
         unsigned int MSK42:1;
         unsigned int MSK52:1;
         unsigned int :1;
         unsigned int MSK72:1;
      };
   };
} SSP2ADD;
#byte SSP2ADD = 0x197


struct SSP2MSK {
   unsigned int MSK:8;
} SSP2MSK;
#byte SSP2MSK = 0x198

struct SSP2STAT {
   union {
      struct {
         unsigned int BF:1;
         unsigned int UA:1;
         unsigned int R:1;
         unsigned int S:1;
         unsigned int P:1;
         unsigned int D:1;
         unsigned int CKE:1;
         unsigned int SMP:1;
      };

   union {
      struct {
         unsigned int :2;
         unsigned int R_W:1;
         unsigned int :2;
         unsigned int D_A:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int W:1;
         unsigned int :2;
         unsigned int A:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int WRITE:1;
         unsigned int START2:1;
         unsigned int STOP2:1;
         unsigned int ADDRESS:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int READ_WRITE:1;
         unsigned int I2C_START:1;
         unsigned int I2C_STOP:1;
         unsigned int DATA_ADDRESS:1;
      };
   };

   union {
      struct {
         unsigned int BF2:1;
         unsigned int UA2:1;
         unsigned int I2C_READ:1;
         unsigned int START:1;
         unsigned int STOP:1;
         unsigned int I2C_DAT:1;
         unsigned int CKE2:1;
         unsigned int SMP2:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int RW:1;
         unsigned int I2C_START2:1;
         unsigned int I2C_STOP2:1;
         unsigned int DA:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int RW2:1;
         unsigned int S2:1;
         unsigned int P2:1;
         unsigned int DA2:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int I2C_READ2:1;
         unsigned int :2;
         unsigned int DATA_ADDRESS2:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int READ_WRITE2:1;
         unsigned int :2;
         unsigned int D_A2:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int R_W2:1;
         unsigned int :2;
         unsigned int I2C_DAT2:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int W2:1;
         unsigned int :2;
         unsigned int A2:1;
      };
   };

      struct {
         unsigned int :2;
         unsigned int WRITE2:1;
         unsigned int :2;
         unsigned int ADDRESS2:1;
      };
   };
} SSP2STAT;
#byte SSP2STAT = 0x199

struct SSP2CON1 {
   union {
      struct {
         unsigned int SSPM:4;
         unsigned int CKP:1;
         unsigned int SSPEN:1;
         unsigned int SSPOV:1;
         unsigned int WCOL:1;
      };

      struct {
         unsigned int SSPM02:1;
         unsigned int SSPM12:1;
         unsigned int SSPM22:1;
         unsigned int SSPM32:1;
         unsigned int CKP2:1;
         unsigned int SSPEN2:1;
         unsigned int SSPOV2:1;
         unsigned int WCOL2:1;
      };
   };
} SSP2CON1;
#byte SSP2CON1 = 0x19A

struct SSP2CON2 {
   union {
      struct {
         unsigned int SEN:1;
         unsigned int RSEN:1;
         unsigned int PEN:1;
         unsigned int RCEN:1;
         unsigned int ACKEN:1;
         unsigned int ACKDT:1;
         unsigned int ACKSTAT:1;
         unsigned int GCEN:1;
      };

   union {
      struct {
         unsigned int :1;
         unsigned int ADMSK:5;
      };
   };

   union {
      struct {
         unsigned int SEN2:1;
         unsigned int ADMSK1:5;
         unsigned int ACKSTAT2:1;
         unsigned int GCEN2:1;
      };
   };

   union {
      struct {
         unsigned int :1;
         unsigned int ADMSK12:1;
         unsigned int ADMSK22:1;
         unsigned int ADMSK32:1;
         unsigned int ACKEN2:1;
         unsigned int ACKDT2:1;
      };
   };

      struct {
         unsigned int :1;
         unsigned int RSEN2:1;
         unsigned int PEN2:1;
         unsigned int RCEN2:1;
         unsigned int ADMSK42:1;
         unsigned int ADMSK52:1;
      };
   };
} SSP2CON2;
#byte SSP2CON2 = 0x19B

struct SSP2CON3 {
   unsigned int DHEN:1;
   unsigned int AHEN:1;
   unsigned int SBCDE:1;
   unsigned int SDAHT:1;
   unsigned int BOEN:1;
   unsigned int SCIE:1;
   unsigned int PCIE:1;
   unsigned int ACKTIM:1;
} SSP2CON3;
#byte SSP2CON3 = 0x19C

struct TMR1L {
   union {
      struct {
         unsigned int TMR1L:8;
      };

   union {
      struct {
         unsigned int :8;
      };
   };

   union {
      struct {
         unsigned int TMR1:8;
      };
   };

      struct {
         unsigned int CAL01:1;
         unsigned int CAL11:1;
         unsigned int CAL21:1;
         unsigned int CAL31:1;
         unsigned int CAL41:1;
         unsigned int :1;
         unsigned int CAL61:1;
         unsigned int CAL71:1;
      };
   };
} TMR1;
#byte TMR1 = 0x20C

struct TMR1H {
   union {
      struct {
         unsigned int TMR1H:8;
      };

   union {
      struct {
         unsigned int :8;
      };
   };

      struct {
         unsigned int TMR18:2;
         unsigned int TMR11:6;
      };
   };
} TMR1H;
#byte TMR1H = 0x20D

struct T1CON {
   union {
      struct {
         unsigned int ON:1;
         unsigned int RD16:1;
         unsigned int SYNC:1;
         unsigned int :1;
         unsigned int CKPS:2;
      };

      struct {
         unsigned int TMR1ON:1;
         unsigned int T1RD16:1;
         unsigned int T1SYNC:1;
         unsigned int :1;
         unsigned int T1CKPS:2;
      };
   };
} T1CON;
#byte T1CON = 0x20E

struct T1GCON {
   union {
      struct {
         unsigned int :2;
         unsigned int GVAL:1;
         unsigned int GGO:1;
         unsigned int GSPM:1;
         unsigned int GTM:1;
         unsigned int GPOL:1;
         unsigned int GE:1;
      };

      struct {
         unsigned int :2;
         unsigned int T1GVAL:1;
         unsigned int T1GGO:1;
         unsigned int T1GSPM:1;
         unsigned int T1GTM:1;
         unsigned int T1GPOL:1;
         unsigned int T1GE:1;
      };
   };
} T1GCON;
#byte T1GCON = 0x20F

#byte T1GATE = 0x210

#byte T1CLK = 0x211

struct TMR3L {
   union {
      struct {
         unsigned int TMR3L:8;
      };

   union {
      struct {
         unsigned int TMR3:8;
      };
   };

      struct {
         unsigned int CAL03:1;
         unsigned int CAL13:1;
         unsigned int CAL23:1;
         unsigned int CAL33:1;
         unsigned int CAL43:1;
         unsigned int CAL53:1;
         unsigned int CAL63:1;
      };
   };
} TMR3;
#byte TMR3 = 0x212

struct TMR3H {
   union {
      struct {
         unsigned int TMR3H:8;
      };

      struct {
         unsigned int TMR38:2;
         unsigned int TMR31:6;
      };
   };
} TMR3H;
#byte TMR3H = 0x213

struct T3CON {
   union {
      struct {
         unsigned int ON:1;
         unsigned int RD16:1;
         unsigned int SYNC:1;
         unsigned int :1;
         unsigned int CKPS:2;
      };

   union {
      struct {
         unsigned int TMR3ON:1;
         unsigned int T3RD16:1;
         unsigned int T3SYNC:1;
         unsigned int :1;
         unsigned int T3CKPS:2;
      };
   };

      struct {
         unsigned int :1;
         unsigned int RD163:1;
      };
   };
} T3CON;
#byte T3CON = 0x214

struct T3GCON {
   union {
      struct {
         unsigned int :2;
         unsigned int GVAL:1;
         unsigned int GGO:1;
         unsigned int GSPM:1;
         unsigned int GTM:1;
         unsigned int GPOL:1;
         unsigned int GE:1;
      };

      struct {
         unsigned int :2;
         unsigned int T3GVAL:1;
         unsigned int T3GGO:1;
         unsigned int T3GSPM:1;
         unsigned int T3GTM:1;
         unsigned int T3GPOL:1;
         unsigned int T3GE:1;
      };
   };
} T3GCON;
#byte T3GCON = 0x215

#byte T3GATE = 0x216

#byte T3CLK = 0x217

struct TMR5L {
   union {
      struct {
         unsigned int TMR5L:8;
      };

   union {
      struct {
         unsigned int TMR5:8;
      };
   };

      struct {
         unsigned int CAL05:1;
         unsigned int CAL15:1;
         unsigned int CAL25:1;
         unsigned int CAL35:1;
         unsigned int CAL45:1;
         unsigned int CAL55:1;
         unsigned int CAL65:1;
         unsigned int CAL75:1;
      };
   };
} TMR5;
#byte TMR5 = 0x218

struct TMR5H {
   union {
      struct {
         unsigned int TMR5H:8;
      };

      struct {
         unsigned int TMR58:2;
         unsigned int TMR51:6;
      };
   };
} TMR5H;
#byte TMR5H = 0x219

struct T5CON {
   union {
      struct {
         unsigned int ON:1;
         unsigned int RD16:1;
         unsigned int SYNC:1;
         unsigned int :1;
         unsigned int CKPS:2;
      };

   union {
      struct {
         unsigned int TMR5ON:1;
         unsigned int T5RD16:1;
         unsigned int T5SYNC:1;
         unsigned int :1;
         unsigned int T5CKPS:2;
      };
   };

      struct {
         unsigned int :1;
         unsigned int RD165:1;
      };
   };
} T5CON;
#byte T5CON = 0x21A

struct T5GCON {
   union {
      struct {
         unsigned int :2;
         unsigned int GVAL:1;
         unsigned int GGO:1;
         unsigned int GSPM:1;
         unsigned int GTM:1;
         unsigned int GPOL:1;
         unsigned int GE:1;
      };

      struct {
         unsigned int :2;
         unsigned int T5GVAL:1;
         unsigned int T5GGO:1;
         unsigned int T5GSPM:1;
         unsigned int T5GTM:1;
         unsigned int T5GPOL:1;
         unsigned int T5GE:1;
      };
   };
} T5GCON;
#byte T5GCON = 0x21B

#byte T5GATE = 0x21C

#byte T5CLK = 0x21D

struct CCPTMRS0 {
   unsigned int C1TSEL:2;
   unsigned int C2TSEL:2;
   unsigned int C3TSEL:2;
   unsigned int C4TSEL:2;
} CCPTMRS0;
#byte CCPTMRS0 = 0x21E

struct CCPTMRS1 {
   unsigned int C5TSEL:2;
   unsigned int P6TSEL:2;
   unsigned int P7TSEL:2;
} CCPTMRS1;
#byte CCPTMRS1 = 0x21F

#byte T2TMR = 0x28C

#byte T2PR = 0x28D

struct T2CON {
   union {
      struct {
         unsigned int OUTPS:4;
         unsigned int CKPS:3;
         unsigned int ON:1;
      };

   union {
      struct {
         unsigned int T2OUTPS:4;
         unsigned int T2CKPS:3;
         unsigned int T2ON:1;
      };
   };

      struct {
         unsigned int :7;
         unsigned int TMR2ON:1;
      };
   };
} T2CON;
#byte T2CON = 0x28E

struct T2HLT {
   union {
      struct {
         unsigned int MODE:5;
         unsigned int CKSYNC:1;
         unsigned int CKPOL:1;
         unsigned int PSYNC:1;
      };

      struct {
         unsigned int T2MODE:5;
         unsigned int T2CKSYNC:1;
         unsigned int T2CKPOL:1;
         unsigned int T2PSYNC:1;
      };
   };
} T2HLT;
#byte T2HLT = 0x28F

#byte T2CLK = 0x290

#byte T2RST = 0x291

#byte T4TMR = 0x292

#byte T4PR = 0x293

struct T4CON {
   union {
      struct {
         unsigned int OUTPS:4;
         unsigned int CKPS:3;
         unsigned int ON:1;
      };

   union {
      struct {
         unsigned int T4OUTPS:4;
         unsigned int T4CKPS:3;
         unsigned int T4ON:1;
      };
   };

      struct {
         unsigned int :7;
         unsigned int TMR4ON:1;
      };
   };
} T4CON;
#byte T4CON = 0x294

struct T4HLT {
   union {
      struct {
         unsigned int MODE:5;
         unsigned int CKSYNC:1;
         unsigned int CKPOL:1;
         unsigned int PSYNC:1;
      };

      struct {
         unsigned int T4MODE:5;
         unsigned int T4CKSYNC:1;
         unsigned int T4CKPOL:1;
         unsigned int T4PSYNC:1;
      };
   };
} T4HLT;
#byte T4HLT = 0x295

#byte T4CLK = 0x296

#byte T4RST = 0x297

#byte T6TMR = 0x298

#byte T6PR = 0x299

struct T6CON {
   union {
      struct {
         unsigned int OUTPS:4;
         unsigned int CKPS:3;
         unsigned int ON:1;
      };

   union {
      struct {
         unsigned int T6OUTPS:4;
         unsigned int T6CKPS:3;
         unsigned int T6ON:1;
      };
   };

      struct {
         unsigned int :7;
         unsigned int TMR6ON:1;
      };
   };
} T6CON;
#byte T6CON = 0x29A

struct T6HLT {
   union {
      struct {
         unsigned int MODE:5;
         unsigned int CKSYNC:1;
         unsigned int CKPOL:1;
         unsigned int PSYNC:1;
      };

      struct {
         unsigned int T6MODE:5;
         unsigned int T6CKSYNC:1;
         unsigned int T6CKPOL:1;
         unsigned int T6PSYNC:1;
      };
   };
} T6HLT;
#byte T6HLT = 0x29B

#byte T6CLK = 0x29C

#byte T6RST = 0x29D

#word CCPR1 = 0x30C

struct CCP1CON {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int FMT:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CCP1MODE:4;
         unsigned int CCP1FMT:1;
         unsigned int CCP1OUT:1;
         unsigned int CCP1OE:1;
         unsigned int CCP1EN:1;
      };
   };

      struct {
         unsigned int :6;
         unsigned int P1M:2;
      };
   };
} CCP1CON;
#byte CCP1CON = 0x30E


struct CCP1CAP {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP1CTS:8;
      };
   };
} CCP1CAP;
#byte CCP1CAP = 0x30F

#word CCPR2 = 0x310

struct CCP2CON {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int FMT:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CCP2MODE:4;
         unsigned int CCP2FMT:1;
         unsigned int CCP2OUT:1;
         unsigned int CCP2OE:1;
         unsigned int CCP2EN:1;
      };
   };

      struct {
         unsigned int :6;
         unsigned int P2M:2;
      };
   };
} CCP2CON;
#byte CCP2CON = 0x312


struct CCP2CAP {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP2CTS:8;
      };
   };
} CCP2CAP;
#byte CCP2CAP = 0x313

#word CCPR3 = 0x314

struct CCP3CON {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int FMT:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CCP3MODE:4;
         unsigned int CCP3FMT:1;
         unsigned int CCP3OUT:1;
         unsigned int CCP3OE:1;
         unsigned int CCP3EN:1;
      };
   };

      struct {
         unsigned int :6;
         unsigned int P3M:2;
      };
   };
} CCP3CON;
#byte CCP3CON = 0x316


struct CCP3CAP {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP3CTS:8;
      };
   };
} CCP3CAP;
#byte CCP3CAP = 0x317

#word CCPR4 = 0x318

struct CCP4CON {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int FMT:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CCP4MODE:4;
         unsigned int CCP4FMT:1;
         unsigned int CCP4OUT:1;
         unsigned int CCP4OE:1;
         unsigned int CCP4EN:1;
      };
   };

      struct {
         unsigned int :6;
         unsigned int P4M:2;
      };
   };
} CCP4CON;
#byte CCP4CON = 0x31A


struct CCP4CAP {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP4CTS:8;
      };
   };
} CCP4CAP;
#byte CCP4CAP = 0x31B

#word CCPR5 = 0x31C

struct CCP5CON {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int FMT:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CCP5MODE:4;
         unsigned int CCP5FMT:1;
         unsigned int CCP5OUT:1;
         unsigned int CCP5OE:1;
         unsigned int CCP5EN:1;
      };
   };

      struct {
         unsigned int :6;
         unsigned int P5M:2;
      };
   };
} CCP5CON;
#byte CCP5CON = 0x31E

struct CCP5CAP {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP5CTS:8;
      };
   };
} CCP5CAP;
#byte CCP5CAP = 0x31F

struct PWM6DCL {
   union {
      struct {
         unsigned int :6;
         unsigned int DC:2;
      };

   union {
      struct {
         unsigned int :6;
         unsigned int PWM6DC:2;
      };
   };

      struct {
         unsigned int :6;
         unsigned int PWMPW:2;
      };
   };
} PWM6DC;
#byte PWM6DC = 0x38C

struct PWM6DCH {
   union {
      struct {
         unsigned int DC2:8;
      };

   union {
      struct {
         unsigned int PWM6DC2:8;
      };
   };

      struct {
         unsigned int PWMPW2:8;
      };
   };
} PWM6DCH;
#byte PWM6DCH = 0x38D

struct PWM6CON {
   union {
      struct {
         unsigned int :4;
         unsigned int POL:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };

      struct {
         unsigned int :4;
         unsigned int PWM6POL:1;
         unsigned int PWM6OUT:1;
         unsigned int PWM6OE:1;
         unsigned int PWM6EN:1;
      };
   };
} PWM6CON;
#byte PWM6CON = 0x38E

struct PWM7DCL {
   union {
      struct {
         unsigned int :6;
         unsigned int DC:2;
      };

   union {
      struct {
         unsigned int :6;
         unsigned int PWM7DC:2;
      };
   };

      struct {
         unsigned int :6;
         unsigned int PWMPW:2;
      };
   };
} PWM7DC;
#byte PWM7DC = 0x390

struct PWM7DCH {
   union {
      struct {
         unsigned int DC2:8;
      };

   union {
      struct {
         unsigned int PWM7DC2:8;
      };
   };

      struct {
         unsigned int PWMPW2:8;
      };
   };
} PWM7DCH;
#byte PWM7DCH = 0x391

struct PWM7CON {
   union {
      struct {
         unsigned int :4;
         unsigned int POL:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };

      struct {
         unsigned int :4;
         unsigned int PWM7POL:1;
         unsigned int PWM7OUT:1;
         unsigned int PWM7OE:1;
         unsigned int PWM7EN:1;
      };
   };
} PWM7CON;
#byte PWM7CON = 0x392


struct SCANLADRL {
   union {
      struct {
         unsigned int LADR:8;
      };

      struct {
         unsigned int SCANLADR:8;
      };
   };
} SCANLADR;
#byte SCANLADR = 0x40C


struct SCANLADRH {
   union {
      struct {
         unsigned int LADR8:2;
         unsigned int LADR1:6;
      };

      struct {
         unsigned int SCANLADR8:2;
         unsigned int SCANLADR1:6;
      };
   };
} SCANLADRH;
#byte SCANLADRH = 0x40D


struct SCANHADRL {
   union {
      struct {
         unsigned int HADR:8;
      };

      struct {
         unsigned int SCANHADR:8;
      };
   };
} SCANHADR;
#byte SCANHADR = 0x40E


struct SCANHADRH {
   union {
      struct {
         unsigned int HADR8:2;
         unsigned int HADR1:6;
      };

      struct {
         unsigned int SCANHADR8:2;
         unsigned int SCANHADR1:6;
      };
   };
} SCANHADRH;
#byte SCANHADRH = 0x40F

struct SCANCON0 {
   union {
      struct {
         unsigned int MODE:2;
         unsigned int :1;
         unsigned int INTM:1;
         unsigned int INVALID:1;
         unsigned int BUSY:1;
         unsigned int SCANGO:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int SCANMODE:2;
         unsigned int :1;
         unsigned int SCANINTM:1;
         unsigned int SCANINVALID:1;
         unsigned int SCANBUSY:1;
         unsigned int :1;
         unsigned int SCANEN:1;
      };
   };

      struct {
         unsigned int :4;
         unsigned int DABORT:1;
      };
   };
} SCANCON0;
#byte SCANCON0 = 0x410

#byte SCANTRIG = 0x411

struct CRCDAT {
   unsigned int DATA:8;
} CRCDAT;
#byte CRCDAT = 0x416

struct CRCDATH {
   unsigned int DATA8:2;
   unsigned int DATA1:6;
} CRCDATH;
#byte CRCDATH = 0x417

struct CRCACC {
   unsigned int ACC:8;
} CRCACC;
#byte CRCACC = 0x418

struct CRCACCH {
   unsigned int ACC8:2;
   unsigned int ACC1:6;
} CRCACCH;
#byte CRCACCH = 0x419

struct CRCSHIFT {
   unsigned int SHFT:8;
} CRCSHIFT;
#byte CRCSHIFT = 0x41A

struct CRCSHIFTH {
   unsigned int SHFT8:2;
   unsigned int SHFT1:6;
} CRCSHIFTH;
#byte CRCSHIFTH = 0x41B

struct CRCXOR {
   unsigned int :1;
   unsigned int X1:7;
} CRCXOR;
#byte CRCXOR = 0x41C

struct CRCXORH {
   unsigned int X8:2;
   unsigned int X1:6;
} CRCXORH;
#byte CRCXORH = 0x41D

struct CRCCON0 {
   union {
      struct {
         unsigned int FULL:1;
         unsigned int SHIFTM:1;
         unsigned int :2;
         unsigned int ACCM:1;
         unsigned int BUSY:1;
         unsigned int CRCGO:1;
         unsigned int EN:1;
      };

      struct {
         unsigned int :7;
         unsigned int CRCEN:1;
      };
   };
} CRCCON0;
#byte CRCCON0 = 0x41E

struct CRCCON1 {
   unsigned int PLEN:4;
   unsigned int DLEN:4;
} CRCCON1;
#byte CRCCON1 = 0x41F

struct SMT1TMRL {
   union {
      struct {
         unsigned int TMR:8;
      };

      struct {
         unsigned int SMT1TMR:8;
      };
   };
} SMT1TMR;
#byte SMT1TMR = 0x48C

struct SMT1TMRH {
   union {
      struct {
         unsigned int TMR8:2;
         unsigned int TMR1:6;
      };

      struct {
         unsigned int SMT1TMR8:2;
         unsigned int SMT1TMR1:6;
      };
   };
} SMT1TMRH;
#byte SMT1TMRH = 0x48D

struct SMT1TMRU {
   union {
      struct {
         unsigned int TMR16:4;
         unsigned int TMR2:4;
      };

      struct {
         unsigned int SMT1TMR16:4;
         unsigned int SMT1TMR2:4;
      };
   };
} SMT1TMRU;
#byte SMT1TMRU = 0x48E

struct SMT1CPRL {
   union {
      struct {
         unsigned int CPR:8;
      };

      struct {
         unsigned int SMT1CPR:8;
      };
   };
} SMT1CPR;
#byte SMT1CPR = 0x48F

struct SMT1CPRH {
   union {
      struct {
         unsigned int CPR8:2;
         unsigned int CPR1:6;
      };

      struct {
         unsigned int SMT1CPR8:2;
         unsigned int SMT1CPR1:6;
      };
   };
} SMT1CPRH;
#byte SMT1CPRH = 0x490

struct SMT1CPRU {
   union {
      struct {
         unsigned int CPR16:4;
         unsigned int CPR2:4;
      };

      struct {
         unsigned int SMT1CPR16:4;
         unsigned int SMT1CPR2:4;
      };
   };
} SMT1CPRU;
#byte SMT1CPRU = 0x491

struct SMT1CPWL {
   union {
      struct {
         unsigned int CPW:8;
      };

      struct {
         unsigned int SMT1CPW:8;
      };
   };
} SMT1CPW;
#byte SMT1CPW = 0x492

struct SMT1CPWH {
   union {
      struct {
         unsigned int CPW8:2;
         unsigned int CPW1:6;
      };

      struct {
         unsigned int SMT1CPW8:2;
         unsigned int SMT1CPW1:6;
      };
   };
} SMT1CPWH;
#byte SMT1CPWH = 0x493

struct SMT1CPWU {
   union {
      struct {
         unsigned int CPW16:4;
         unsigned int CPW2:4;
      };

      struct {
         unsigned int SMT1CPW16:4;
         unsigned int SMT1CPW2:4;
      };
   };
} SMT1CPWU;
#byte SMT1CPWU = 0x494

struct SMT1PRL {
   union {
      struct {
         unsigned int PR:8;
      };

      struct {
         unsigned int SMT1PR:8;
      };
   };
} SMT1PR;
#byte SMT1PR = 0x495

struct SMT1PRH {
   union {
      struct {
         unsigned int PR8:2;
         unsigned int PR1:6;
      };

      struct {
         unsigned int SMT1PR8:2;
         unsigned int SMT1PR1:6;
      };
   };
} SMT1PRH;
#byte SMT1PRH = 0x496

struct SMT1PRU {
   union {
      struct {
         unsigned int PR16:4;
         unsigned int PR2:4;
      };

      struct {
         unsigned int SMT1PR16:4;
         unsigned int SMT1PR2:4;
      };
   };
} SMT1PRU;
#byte SMT1PRU = 0x497

struct SMT1CON0 {
   union {
      struct {
         unsigned int PS:2;
         unsigned int CPOL:1;
         unsigned int SPOL:1;
         unsigned int WPOL:1;
         unsigned int STP:1;
         unsigned int :1;
         unsigned int EN:1;
      };

      struct {
         unsigned int SMT1PS:2;
         unsigned int SMT1CPOL:1;
         unsigned int SMT1SPOL:1;
         unsigned int SMT1WOL:1;
         unsigned int SMT1STP:1;
         unsigned int :1;
         unsigned int SMT1EN:1;
      };
   };
} SMT1CON0;
#byte SMT1CON0 = 0x498

struct SMT1CON1 {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int :2;
         unsigned int REPEAT:1;
         unsigned int GO:1;
      };

      struct {
         unsigned int :6;
         unsigned int SMT1REPEAT:1;
         unsigned int SMT1GO:1;
      };
   };
} SMT1CON1;
#byte SMT1CON1 = 0x499

struct SMT1STAT {
   union {
      struct {
         unsigned int AS:1;
         unsigned int WS:1;
         unsigned int TS:1;
         unsigned int :2;
         unsigned int RST:1;
         unsigned int CPWUP:1;
         unsigned int CPRUP:1;
      };

   union {
      struct {
         unsigned int SMT1AS:1;
         unsigned int SMT1WS:1;
         unsigned int SMT1TS:1;
         unsigned int :2;
         unsigned int SMT1RESET:1;
         unsigned int SMT1CPWUP:1;
         unsigned int SMT1CPRUP:1;
      };
   };

      struct {
         unsigned int :5;
         unsigned int SMT1RST:1;
      };
   };
} SMT1STAT;
#byte SMT1STAT = 0x49A

#byte SMT1CLK = 0x49B

#byte SMT1SIG = 0x49C

#byte SMT1WIN = 0x49D

struct SMT2TMRL {
   union {
      struct {
         unsigned int TMR:8;
      };

      struct {
         unsigned int SMT2TMR:8;
      };
   };
} SMT2TMR;
#byte SMT2TMR = 0x50C

struct SMT2TMRH {
   union {
      struct {
         unsigned int TMR8:2;
         unsigned int TMR1:6;
      };

      struct {
         unsigned int SMT2TMR8:2;
         unsigned int SMT2TMR1:6;
      };
   };
} SMT2TMRH;
#byte SMT2TMRH = 0x50D

struct SMT2TMRU {
   union {
      struct {
         unsigned int TMR16:4;
         unsigned int TMR2:4;
      };

      struct {
         unsigned int SMT2TMR16:4;
         unsigned int SMT2TMR2:4;
      };
   };
} SMT2TMRU;
#byte SMT2TMRU = 0x50E

struct SMT2CPRL {
   union {
      struct {
         unsigned int CPR:8;
      };

      struct {
         unsigned int SMT2CPR:8;
      };
   };
} SMT2CPR;
#byte SMT2CPR = 0x50F

struct SMT2CPRH {
   union {
      struct {
         unsigned int CPR8:2;
         unsigned int CPR1:6;
      };

      struct {
         unsigned int SMT2CPR8:2;
         unsigned int SMT2CPR1:6;
      };
   };
} SMT2CPRH;
#byte SMT2CPRH = 0x510

struct SMT2CPRU {
   union {
      struct {
         unsigned int CPR16:4;
         unsigned int CPR2:4;
      };

      struct {
         unsigned int SMT2CPR16:4;
         unsigned int SMT2CPR2:4;
      };
   };
} SMT2CPRU;
#byte SMT2CPRU = 0x511

struct SMT2CPWL {
   union {
      struct {
         unsigned int CPW:8;
      };

      struct {
         unsigned int SMT2CPW:8;
      };
   };
} SMT2CPW;
#byte SMT2CPW = 0x512

struct SMT2CPWH {
   union {
      struct {
         unsigned int CPW8:2;
         unsigned int CPW1:6;
      };

      struct {
         unsigned int SMT2CPW8:2;
         unsigned int SMT2CPW1:6;
      };
   };
} SMT2CPWH;
#byte SMT2CPWH = 0x513

struct SMT2CPWU {
   union {
      struct {
         unsigned int CPW16:4;
         unsigned int CPW2:4;
      };

      struct {
         unsigned int SMT2CPW16:4;
         unsigned int SMT2CPW2:4;
      };
   };
} SMT2CPWU;
#byte SMT2CPWU = 0x514

struct SMT2PRL {
   union {
      struct {
         unsigned int PR:8;
      };

      struct {
         unsigned int SMT2PR:8;
      };
   };
} SMT2PR;
#byte SMT2PR = 0x515

struct SMT2PRH {
   union {
      struct {
         unsigned int PR8:2;
         unsigned int PR1:6;
      };

      struct {
         unsigned int SMT2PR8:2;
         unsigned int SMT2PR1:6;
      };
   };
} SMT2PRH;
#byte SMT2PRH = 0x516

struct SMT2PRU {
   union {
      struct {
         unsigned int PR16:4;
         unsigned int PR2:4;
      };

      struct {
         unsigned int SMT2PR16:4;
         unsigned int SMT2PR2:4;
      };
   };
} SMT2PRU;
#byte SMT2PRU = 0x517

struct SMT2CON0 {
   union {
      struct {
         unsigned int PS:2;
         unsigned int CPOL:1;
         unsigned int SPOL:1;
         unsigned int WPOL:1;
         unsigned int STP:1;
         unsigned int :1;
         unsigned int EN:1;
      };

      struct {
         unsigned int SMT2PS:2;
         unsigned int SMT2CPOL:1;
         unsigned int SMT2SPOL:1;
         unsigned int SMT2WOL:1;
         unsigned int SMT2STP:1;
         unsigned int :1;
         unsigned int SMT2EN:1;
      };
   };
} SMT2CON0;
#byte SMT2CON0 = 0x518

struct SMT2CON1 {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int :2;
         unsigned int REPEAT:1;
         unsigned int GO:1;
      };

      struct {
         unsigned int :6;
         unsigned int SMT2REPEAT:1;
         unsigned int SMT2GO:1;
      };
   };
} SMT2CON1;
#byte SMT2CON1 = 0x519

struct SMT2STAT {
   union {
      struct {
         unsigned int AS:1;
         unsigned int WS:1;
         unsigned int TS:1;
         unsigned int :2;
         unsigned int RST:1;
         unsigned int CPWUP:1;
         unsigned int CPRUP:1;
      };

   union {
      struct {
         unsigned int SMT2AS:1;
         unsigned int SMT2WS:1;
         unsigned int SMT2TS:1;
         unsigned int :2;
         unsigned int SMT2RESET:1;
         unsigned int SMT2CPWUP:1;
         unsigned int SMT2CPRUP:1;
      };
   };

      struct {
         unsigned int :5;
         unsigned int SMT2RST:1;
      };
   };
} SMT2STAT;
#byte SMT2STAT = 0x51A

#byte SMT2CLK = 0x51B

#byte SMT2SIG = 0x51C

#byte SMT2WIN = 0x51D

struct NCO1ACC {
   unsigned int NCO1ACC:8;
} NCO1ACC;
#byte NCO1ACC = 0x58C

struct NCO1ACCH {
   unsigned int NCO1ACC8:2;
   unsigned int NCO1ACC1:6;
} NCO1ACCH;
#byte NCO1ACCH = 0x58D

struct NCO1ACCU {
   unsigned int NCO1ACC16:4;
   unsigned int NCO1ACC2:4;
} NCO1ACCU;
#byte NCO1ACCU = 0x58E

struct NCO1INC {
   unsigned int NCO1INC:8;
} NCO1INC;
#byte NCO1INC = 0x58F

struct NCO1INCH {
   unsigned int NCO1INC8:2;
   unsigned int NCO1INC1:6;
} NCO1INCH;
#byte NCO1INCH = 0x590

struct NCO1INCU {
   unsigned int NCO1INC16:4;
   unsigned int NCO1INC2:4;
} NCO1INCU;
#byte NCO1INCU = 0x591

struct NCO1CON {
   unsigned int N1PFM:1;
   unsigned int :3;
   unsigned int N1POL:1;
   unsigned int N1OUT:1;
   unsigned int N1OE:1;
   unsigned int N1EN:1;
} NCO1CON;
#byte NCO1CON = 0x592

struct NCO1CLK {
   unsigned int N1CKS:4;
   unsigned int :1;
   unsigned int N1PWS:3;
} NCO1CLK;
#byte NCO1CLK = 0x593

struct CWG1CLKCON {
   union {
      struct {
         unsigned int CS:1;
      };

      struct {
         unsigned int CWG1CS:1;
      };
   };
} CWG1CLKCON;
#byte CWG1CLKCON = 0x60C

#byte CWG1ISM = 0x60D

#byte CWG1DBR = 0x60E

#byte CWG1DBF = 0x60F

struct CWG1CON0 {
   union {
      struct {
         unsigned int MODE:3;
         unsigned int :3;
         unsigned int LD:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CWG1MODE:3;
         unsigned int :3;
         unsigned int CWG1LD:1;
         unsigned int G1EN:1;
      };
   };

      struct {
         unsigned int :7;
         unsigned int CWG1EN:1;
      };
   };
} CWG1CON0;
#byte CWG1CON0 = 0x610

struct CWG1CON1 {
   union {
      struct {
         unsigned int POLA:1;
         unsigned int POLB:1;
         unsigned int POLC:1;
         unsigned int POLD:1;
         unsigned int :1;
         unsigned int IN:1;
      };

      struct {
         unsigned int CWG1POLA:1;
         unsigned int CWG1POLB:1;
         unsigned int CWG1POLC:1;
         unsigned int CWG1POLD:1;
         unsigned int :1;
         unsigned int CWG1IN:1;
      };
   };
} CWG1CON1;
#byte CWG1CON1 = 0x611

struct CWG1AS0 {
   union {
      struct {
         unsigned int :2;
         unsigned int LSAC:2;
         unsigned int LSBD:2;
         unsigned int REN:1;
         unsigned int SHUTDOWN:1;
      };

      struct {
         unsigned int :2;
         unsigned int CWG1LSAC:2;
         unsigned int CWG1LSBD:2;
         unsigned int CWG1REN:1;
         unsigned int CWG1SHUTDOWN:1;
      };
   };
} CWG1AS0;
#byte CWG1AS0 = 0x612

struct CWG1AS1 {
   unsigned int AS0E:1;
   unsigned int AS1E:1;
   unsigned int AS2E:1;
   unsigned int AS3E:1;
   unsigned int AS4E:1;
   unsigned int AS5E:1;
   unsigned int AS6E:1;
} CWG1AS1;
#byte CWG1AS1 = 0x613

struct CWG1STR {
   union {
      struct {
         unsigned int STRA:1;
         unsigned int STRB:1;
         unsigned int STRC:1;
         unsigned int STRD:1;
         unsigned int OVRA:1;
         unsigned int OVRB:1;
         unsigned int OVRC:1;
         unsigned int OVRD:1;
      };

      struct {
         unsigned int CWG1STRA:1;
         unsigned int CWG1STRB:1;
         unsigned int CWG1STRC:1;
         unsigned int CWG1STRD:1;
         unsigned int CWG1OVRA:1;
         unsigned int CWG1OVRB:1;
         unsigned int CWG1OVRC:1;
         unsigned int CWG1OVRD:1;
      };
   };
} CWG1STR;
#byte CWG1STR = 0x614

struct CWG2CLKCON {
   union {
      struct {
         unsigned int CS:1;
      };

      struct {
         unsigned int CWG2CS:1;
      };
   };
} CWG2CLKCON;
#byte CWG2CLKCON = 0x616

#byte CWG2ISM = 0x617

#byte CWG2DBR = 0x618

#byte CWG2DBF = 0x619

struct CWG2CON0 {
   union {
      struct {
         unsigned int MODE:3;
         unsigned int :3;
         unsigned int LD:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CWG2MODE:3;
         unsigned int :3;
         unsigned int CWG2LD:1;
         unsigned int G2EN:1;
      };
   };

      struct {
         unsigned int :7;
         unsigned int CWG2EN:1;
      };
   };
} CWG2CON0;
#byte CWG2CON0 = 0x61A

struct CWG2CON1 {
   union {
      struct {
         unsigned int POLA:1;
         unsigned int POLB:1;
         unsigned int POLC:1;
         unsigned int POLD:1;
         unsigned int :1;
         unsigned int IN:1;
      };

      struct {
         unsigned int CWG2POLA:1;
         unsigned int CWG2POLB:1;
         unsigned int CWG2POLC:1;
         unsigned int CWG2POLD:1;
         unsigned int :1;
         unsigned int CWG2IN:1;
      };
   };
} CWG2CON1;
#byte CWG2CON1 = 0x61B

struct CWG2AS0 {
   union {
      struct {
         unsigned int :2;
         unsigned int LSAC:2;
         unsigned int LSBD:2;
         unsigned int REN:1;
         unsigned int SHUTDOWN:1;
      };

      struct {
         unsigned int :2;
         unsigned int CWG2LSAC:2;
         unsigned int CWG2LSBD:2;
         unsigned int CWG2REN:1;
         unsigned int CWG2SHUTDOWN:1;
      };
   };
} CWG2AS0;
#byte CWG2AS0 = 0x61C

struct CWG2AS1 {
   unsigned int AS0E:1;
   unsigned int AS1E:1;
   unsigned int AS2E:1;
   unsigned int AS3E:1;
   unsigned int AS4E:1;
   unsigned int AS5E:1;
   unsigned int AS6E:1;
} CWG2AS1;
#byte CWG2AS1 = 0x61D

struct CWG2STR {
   union {
      struct {
         unsigned int STRA:1;
         unsigned int STRB:1;
         unsigned int STRC:1;
         unsigned int STRD:1;
         unsigned int OVRA:1;
         unsigned int OVRB:1;
         unsigned int OVRC:1;
         unsigned int OVRD:1;
      };

      struct {
         unsigned int CWG2STRA:1;
         unsigned int CWG2STRB:1;
         unsigned int CWG2STRC:1;
         unsigned int CWG2STRD:1;
         unsigned int CWG2OVRA:1;
         unsigned int CWG2OVRB:1;
         unsigned int CWG2OVRC:1;
         unsigned int CWG2OVRD:1;
      };
   };
} CWG2STR;
#byte CWG2STR = 0x61E

struct CWG3CLKCON {
   union {
      struct {
         unsigned int CS:1;
      };

      struct {
         unsigned int CWG3CS:1;
      };
   };
} CWG3CLKCON;
#byte CWG3CLKCON = 0x68C

#byte CWG3ISM = 0x68D

#byte CWG3DBR = 0x68E

#byte CWG3DBF = 0x68F

struct CWG3CON0 {
   union {
      struct {
         unsigned int MODE:3;
         unsigned int :3;
         unsigned int LD:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CWG3MODE:3;
         unsigned int :3;
         unsigned int CWG3LD:1;
         unsigned int G3EN:1;
      };
   };

      struct {
         unsigned int :7;
         unsigned int CWG3EN:1;
      };
   };
} CWG3CON0;
#byte CWG3CON0 = 0x690

struct CWG3CON1 {
   union {
      struct {
         unsigned int POLA:1;
         unsigned int POLB:1;
         unsigned int POLC:1;
         unsigned int POLD:1;
         unsigned int :1;
         unsigned int IN:1;
      };

      struct {
         unsigned int CWG3POLA:1;
         unsigned int CWG3POLB:1;
         unsigned int CWG3POLC:1;
         unsigned int CWG3POLD:1;
         unsigned int :1;
         unsigned int CWG3IN:1;
      };
   };
} CWG3CON1;
#byte CWG3CON1 = 0x691

struct CWG3AS0 {
   union {
      struct {
         unsigned int :2;
         unsigned int LSAC:2;
         unsigned int LSBD:2;
         unsigned int REN:1;
         unsigned int SHUTDOWN:1;
      };

      struct {
         unsigned int :2;
         unsigned int CWG3LSAC:2;
         unsigned int CWG3LSBD:2;
         unsigned int CWG3REN:1;
         unsigned int CWG3SHUTDOWN:1;
      };
   };
} CWG3AS0;
#byte CWG3AS0 = 0x692

struct CWG3AS1 {
   unsigned int AS0E:1;
   unsigned int AS1E:1;
   unsigned int AS2E:1;
   unsigned int AS3E:1;
   unsigned int AS4E:1;
   unsigned int AS5E:1;
   unsigned int AS6E:1;
} CWG3AS1;
#byte CWG3AS1 = 0x693

struct CWG3STR {
   union {
      struct {
         unsigned int STRA:1;
         unsigned int STRB:1;
         unsigned int STRC:1;
         unsigned int STRD:1;
         unsigned int OVRA:1;
         unsigned int OVRB:1;
         unsigned int OVRC:1;
         unsigned int OVRD:1;
      };

      struct {
         unsigned int CWG3STRA:1;
         unsigned int CWG3STRB:1;
         unsigned int CWG3STRC:1;
         unsigned int CWG3STRD:1;
         unsigned int CWG3OVRA:1;
         unsigned int CWG3OVRB:1;
         unsigned int CWG3OVRC:1;
         unsigned int CWG3OVRD:1;
      };
   };
} CWG3STR;
#byte CWG3STR = 0x694

struct PIR0 {
   unsigned int INTF:1;
   unsigned int :3;
   unsigned int IOCIF:1;
   unsigned int TMR0IF:1;
} PIR0;
#byte PIR0 = 0x70C

struct PIR1 {
   unsigned int ADIF:1;
   unsigned int ADTIF:1;
   unsigned int :4;
   unsigned int CSWIF:1;
   unsigned int OSFIF:1;
} PIR1;
#byte PIR1 = 0x70D

struct PIR2 {
   unsigned int C1IF:1;
   unsigned int C2IF:1;
   unsigned int :4;
   unsigned int ZCDIF:1;
} PIR2;
#byte PIR2 = 0x70E

struct PIR3 {
   unsigned int SSP1IF:1;
   unsigned int BCL1IF:1;
   unsigned int SSP2IF:1;
   unsigned int BCL2IF:1;
   unsigned int TXIF:1;
   unsigned int RCIF:1;
} PIR3;
#byte PIR3 = 0x70F

struct PIR4 {
   unsigned int TMR1IF:1;
   unsigned int TMR2IF:1;
   unsigned int TMR3IF:1;
   unsigned int TMR4IF:1;
   unsigned int TMR5IF:1;
   unsigned int TMR6IF:1;
} PIR4;
#byte PIR4 = 0x710

struct PIR5 {
   unsigned int TMR1GIF:1;
   unsigned int TMR3GIF:1;
   unsigned int TMR5GIF:1;
   unsigned int :1;
   unsigned int CLC1IF:1;
   unsigned int CLC2IF:1;
   unsigned int CLC3IF:1;
   unsigned int CLC4IF:1;
} PIR5;
#byte PIR5 = 0x711

struct PIR6 {
   unsigned int CCP1IF:1;
   unsigned int CCP2IF:1;
   unsigned int CCP3IF:1;
   unsigned int CCP4IF:1;
   unsigned int CCP5IF:1;
} PIR6;
#byte PIR6 = 0x712

struct PIR7 {
   union {
      struct {
         unsigned int CWG1IF:1;
         unsigned int CWG2IF:1;
         unsigned int CWG3IF:1;
         unsigned int :1;
         unsigned int NCO1IF:1;
         unsigned int NVMIF:1;
         unsigned int CRCIF:1;
         unsigned int SCANIF:1;
      };

      struct {
         unsigned int :4;
         unsigned int NCOIF:1;
      };
   };
} PIR7;
#byte PIR7 = 0x713

struct PIR8 {
   unsigned int SMT1IF:1;
   unsigned int SMT1PRAIF:1;
   unsigned int SMT1PWAIF:1;
   unsigned int SMT2IF:1;
   unsigned int SMT2PRAIF:1;
   unsigned int SMT2PWAIF:1;
} PIR8;
#byte PIR8 = 0x714

struct PIE0 {
   unsigned int INTE:1;
   unsigned int :3;
   unsigned int IOCIE:1;
   unsigned int TMR0IE:1;
} PIE0;
#byte PIE0 = 0x716

struct PIE1 {
   unsigned int ADIE:1;
   unsigned int ADTIE:1;
   unsigned int :4;
   unsigned int CSWIE:1;
   unsigned int OSFIE:1;
} PIE1;
#byte PIE1 = 0x717

struct PIE2 {
   unsigned int C1IE:1;
   unsigned int C2IE:1;
   unsigned int :4;
   unsigned int ZCDIE:1;
} PIE2;
#byte PIE2 = 0x718

struct PIE3 {
   unsigned int SSP1IE:1;
   unsigned int BCL1IE:1;
   unsigned int SSP2IE:1;
   unsigned int BCL2IE:1;
   unsigned int TXIE:1;
   unsigned int RCIE:1;
} PIE3;
#byte PIE3 = 0x719

struct PIE4 {
   unsigned int TMR1IE:1;
   unsigned int TMR2IE:1;
   unsigned int TMR3IE:1;
   unsigned int TMR4IE:1;
   unsigned int TMR5IE:1;
   unsigned int TMR6IE:1;
} PIE4;
#byte PIE4 = 0x71A

struct PIE5 {
   unsigned int TMR1GIE:1;
   unsigned int TMR3GIE:1;
   unsigned int TMR5GIE:1;
   unsigned int :1;
   unsigned int CLC1IE:1;
   unsigned int CLC2IE:1;
   unsigned int CLC3IE:1;
   unsigned int CLC4IE:1;
} PIE5;
#byte PIE5 = 0x71B

struct PIE6 {
   unsigned int CCP1IE:1;
   unsigned int CCP2IE:1;
   unsigned int CCP3IE:1;
   unsigned int CCP4IE:1;
   unsigned int CCP5IE:1;
} PIE6;
#byte PIE6 = 0x71C

struct PIE7 {
   union {
      struct {
         unsigned int CWG1IE:1;
         unsigned int CWG2IE:1;
         unsigned int CWG3IE:1;
         unsigned int :1;
         unsigned int NCO1IE:1;
         unsigned int NVMIE:1;
         unsigned int CRCIE:1;
         unsigned int SCANIE:1;
      };

      struct {
         unsigned int :4;
         unsigned int NCOIE:1;
      };
   };
} PIE7;
#byte PIE7 = 0x71D

struct PIE8 {
   unsigned int SMT1IE:1;
   unsigned int SMT1PRAIE:1;
   unsigned int SMT1PWAIE:1;
   unsigned int SMT2IE:1;
   unsigned int SMT2PRAIE:1;
   unsigned int SMT2PWAIE:1;
} PIE8;
#byte PIE8 = 0x71E

struct PMD0 {
   unsigned int IOCMD:1;
   unsigned int CLKRMD:1;
   unsigned int NVMMD:1;
   unsigned int SCANMD:1;
   unsigned int CRCMD:1;
   unsigned int :1;
   unsigned int FVRMD:1;
   unsigned int SYSCMD:1;
} PMD0;
#byte PMD0 = 0x796

struct PMD1 {
   union {
      struct {
         unsigned int TMR0MD:1;
         unsigned int TMR1MD:1;
         unsigned int TMR2MD:1;
         unsigned int TMR3MD:1;
         unsigned int TMR4MD:1;
         unsigned int TMR5MD:1;
         unsigned int TMR6MD:1;
         unsigned int NCOMD:1;
      };

      struct {
         unsigned int :7;
         unsigned int NCO1MD:1;
      };
   };
} PMD1;
#byte PMD1 = 0x797

struct PMD2 {
   unsigned int ZCDMD:1;
   unsigned int CMP1MD:1;
   unsigned int CMP2MD:1;
   unsigned int :2;
   unsigned int ADCMD:1;
   unsigned int DACMD:1;
} PMD2;
#byte PMD2 = 0x798

struct PMD3 {
   unsigned int CCP1MD:1;
   unsigned int CCP2MD:1;
   unsigned int CCP3MD:1;
   unsigned int CCP4MD:1;
   unsigned int CCP5MD:1;
   unsigned int PWM6MD:1;
   unsigned int PWM7MD:1;
} PMD3;
#byte PMD3 = 0x799

struct PMD4 {
   unsigned int CWG1MD:1;
   unsigned int CWG2MD:1;
   unsigned int CWG3MD:1;
   unsigned int :1;
   unsigned int MSSP1MD:1;
   unsigned int MSSP2MD:1;
   unsigned int UART1MD:1;
} PMD4;
#byte PMD4 = 0x79A

struct PMD5 {
   unsigned int DSMMD:1;
   unsigned int CLC1MD:1;
   unsigned int CLC2MD:1;
   unsigned int CLC3MD:1;
   unsigned int CLC4MD:1;
   unsigned int :1;
   unsigned int SMT1MD:1;
   unsigned int SMT2MD:1;
} PMD5;
#byte PMD5 = 0x79B

struct WDTCON0 {
   union {
      struct {
         unsigned int SEN:1;
         unsigned int WDTPS:5;
      };

   union {
      struct {
         unsigned int SWDTEN:1;
      };
   };

      struct {
         unsigned int WDTSEN:1;
      };
   };
} WDTCON0;
#byte WDTCON0 = 0x80C

struct WDTCON1 {
   union {
      struct {
         unsigned int WINDOW:3;
         unsigned int :1;
         unsigned int WDTCS:3;
      };

      struct {
         unsigned int WDTWINDOW:3;
      };
   };
} WDTCON1;
#byte WDTCON1 = 0x80D

struct WDTPSL {
   union {
      struct {
         unsigned int PSCNT:8;
      };

      struct {
         unsigned int WDTPSCNT:8;
      };
   };
} WDTPS;
#byte WDTPS = 0x80E

struct WDTPSH {
   union {
      struct {
         unsigned int PSCNT8:2;
         unsigned int PSCNT1:6;
      };

      struct {
         unsigned int WDTPSCNT8:2;
         unsigned int WDTPSCNT1:6;
      };
   };
} WDTPSH;
#byte WDTPSH = 0x80F

struct WDTTMR {
   union {
      struct {
         unsigned int PSCNT16:2;
         unsigned int STATE:1;
         unsigned int WDTTMR:5;
      };

      struct {
         unsigned int WDTPSCNT16:2;
         unsigned int WDTSTATE:1;
      };
   };
} WDTTMR;
#byte WDTTMR = 0x810

struct BORCON {
   unsigned int BORRDY:1;
   unsigned int :6;
   unsigned int SBOREN:1;
} BORCON;
#byte BORCON = 0x811


struct VREGCON {
   unsigned int :1;
   unsigned int VREGPM:1;
} VREGCON;
#byte VREGCON = 0x812

struct PCON0 {
   unsigned int BOR:1;
   unsigned int POR:1;
   unsigned int RI:1;
   unsigned int RMCLR:1;
   unsigned int RWDT:1;
   unsigned int WDTWV:1;
   unsigned int STKUNF:1;
   unsigned int STKOVF:1;
} PCON0;
#byte PCON0 = 0x813

struct CCDCON {
   unsigned int CCDS:2;
   unsigned int :5;
   unsigned int CCDEN:1;
} CCDCON;
#byte CCDCON = 0x814

struct NVMADR {
   unsigned int NVMADR:8;
} NVMADR;
#byte NVMADR = 0x81A

struct NVMADRH {
   unsigned int NVMADR8:2;
   unsigned int NVMADR1:5;
} NVMADRH;
#byte NVMADRH = 0x81B

struct NVMDAT {
   unsigned int NVMDAT:8;
} NVMDAT;
#byte NVMDAT = 0x81C

struct NVMDATH {
   unsigned int NVMDAT8:2;
   unsigned int NVMDAT1:4;
} NVMDATH;
#byte NVMDATH = 0x81D

struct NVMCON1 {
   unsigned int RD:1;
   unsigned int WR:1;
   unsigned int WREN:1;
   unsigned int WRERR:1;
   unsigned int FREE:1;
   unsigned int LWLO:1;
   unsigned int NVMREGS:1;
} NVMCON1;
#byte NVMCON1 = 0x81E

#byte NVMCON2 = 0x81F

struct CPUDOZE {
   unsigned int DOZE:3;
   unsigned int :1;
   unsigned int DOE:1;
   unsigned int ROI:1;
   unsigned int DOZEN:1;
   unsigned int IDLEN:1;
} CPUDOZE;
#byte CPUDOZE = 0x88C

struct OSCCON1 {
   unsigned int NDIV:4;
   unsigned int NOSC:3;
} OSCCON1;
#byte OSCCON1 = 0x88D

struct OSCCON2 {
   unsigned int CDIV:4;
   unsigned int COSC:3;
} OSCCON2;
#byte OSCCON2 = 0x88E

struct OSCCON3 {
   unsigned int :3;
   unsigned int NOSCR:1;
   unsigned int ORDY:1;
   unsigned int :1;
   unsigned int SOSCPWR:1;
   unsigned int CSWHOLD:1;
} OSCCON3;
#byte OSCCON3 = 0x88F

struct OSCSTAT {
   unsigned int PLLR:1;
   unsigned int :1;
   unsigned int ADOR:1;
   unsigned int SOR:1;
   unsigned int LFOR:1;
   unsigned int MFOR:1;
   unsigned int HFOR:1;
   unsigned int EXTOR:1;
} OSCSTAT;
#byte OSCSTAT = 0x890

struct OSCEN {
   unsigned int :2;
   unsigned int ADOEN:1;
   unsigned int SOSCEN:1;
   unsigned int LFOEN:1;
   unsigned int MFOEN:1;
   unsigned int HFOEN:1;
   unsigned int EXTOEN:1;
} OSCEN;
#byte OSCEN = 0x891

#byte OSCTUNE = 0x892

#byte OSCFRQ = 0x893

struct CLKRCON {
   unsigned int CLKRDIV:3;
   unsigned int CLKRDC:2;
   unsigned int :2;
   unsigned int CLKREN:1;
} CLKRCON;
#byte CLKRCON = 0x895

#byte CLKRCLK = 0x896

struct MDCON0 {
   unsigned int MDBIT:1;
   unsigned int :3;
   unsigned int MDOPOL:1;
   unsigned int MDOUT:1;
   unsigned int :1;
   unsigned int MDEN:1;
} MDCON0;
#byte MDCON0 = 0x897

struct MDCON1 {
   unsigned int MDCLSYNC:1;
   unsigned int MDCLPOL:1;
   unsigned int :2;
   unsigned int MDCHSYNC:1;
   unsigned int MDCHPOL:1;
} MDCON1;
#byte MDCON1 = 0x898

#byte MDSRC = 0x899

#word MDCAR = 0x89A

struct FVRCON {
   unsigned int ADFVR:2;
   unsigned int CDAFVR:2;
   unsigned int TSRNG:1;
   unsigned int TSEN:1;
   unsigned int FVRRDY:1;
   unsigned int FVREN:1;
} FVRCON;
#byte FVRCON = 0x90C

struct DAC1CON0 {
   union {
      struct {
         unsigned int NSS:1;
         unsigned int :1;
         unsigned int PSS:2;
         unsigned int OE2:1;
         unsigned int OE1:1;
         unsigned int :1;
         unsigned int EN:1;
      };

      struct {
         unsigned int DAC1NSS:1;
         unsigned int :1;
         unsigned int DAC1PSS:2;
         unsigned int DAC1OE2:1;
         unsigned int DAC1OE1:1;
         unsigned int :1;
         unsigned int DAC1EN:1;
      };
   };
} DAC1CON0;
#byte DAC1CON0 = 0x90E

#byte DAC1CON1 = 0x90F

struct ZCD1CON {
   union {
      struct {
         unsigned int INTN:1;
         unsigned int INTP:1;
         unsigned int :2;
         unsigned int POL:1;
         unsigned int OUT:1;
         unsigned int :1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int ZCD1INTN:1;
         unsigned int ZCD1INTP:1;
         unsigned int :2;
         unsigned int ZCD1POL:1;
         unsigned int ZCD1OUT:1;
         unsigned int :1;
         unsigned int ZCD1EN:1;
      };
   };

      struct {
         unsigned int ZCDINTN:1;
         unsigned int ZCDINTP:1;
         unsigned int :2;
         unsigned int ZCDPOL:1;
         unsigned int ZCDOUT:1;
         unsigned int :1;
         unsigned int ZCDEN:1;
      };
   };
} ZCD1CON;
#byte ZCD1CON = 0x91F

struct CMOUT {
   union {
      struct {
         unsigned int MC1OUT:1;
         unsigned int MC2OUT:1;
      };

      struct {
         unsigned int C1OUT:1;
         unsigned int C2OUT:1;
      };
   };
} CMOUT;
#byte CMOUT = 0x98F

struct CM1CON0 {
   union {
      struct {
         unsigned int SYNC:1;
         unsigned int HYS:1;
         unsigned int Reserved:1;
         unsigned int ZLF:1;
         unsigned int POL:1;
         unsigned int OE:1;
         unsigned int OUT:1;
         unsigned int ON:1;
      };

      struct {
         unsigned int C1SYNC:1;
         unsigned int C1HYS:1;
         unsigned int C1SP:1;
         unsigned int C1ZLF:1;
         unsigned int C1POL:1;
         unsigned int C1OE:1;
         unsigned int C1OUT:1;
         unsigned int C1ON:1;
      };
   };
} CM1CON0;
#byte CM1CON0 = 0x990

struct CM1CON1 {
   union {
      struct {
         unsigned int INTN:1;
         unsigned int INTP:1;
      };

      struct {
         unsigned int C1INTN:1;
         unsigned int C1INTP:1;
      };
   };
} CM1CON1;
#byte CM1CON1 = 0x991

#byte CM1NSEL = 0x992

#byte CM1PSEL = 0x993

struct CM2CON0 {
   union {
      struct {
         unsigned int SYNC:1;
         unsigned int HYS:1;
         unsigned int Reserved:1;
         unsigned int ZLF:1;
         unsigned int POL:1;
         unsigned int OE:1;
         unsigned int OUT:1;
         unsigned int ON:1;
      };

      struct {
         unsigned int C2SYNC:1;
         unsigned int C2HYS:1;
         unsigned int C2SP:1;
         unsigned int C2ZLF:1;
         unsigned int C2POL:1;
         unsigned int C2OE:1;
         unsigned int C2OUT:1;
         unsigned int C2ON:1;
      };
   };
} CM2CON0;
#byte CM2CON0 = 0x994

struct CM2CON1 {
   union {
      struct {
         unsigned int INTN:1;
         unsigned int INTP:1;
      };

      struct {
         unsigned int C2INTN:1;
         unsigned int C2INTP:1;
      };
   };
} CM2CON1;
#byte CM2CON1 = 0x995

#byte CM2NSEL = 0x996

#byte CM2PSEL = 0x997

struct CLCDATA {
   unsigned int MLC1OUT:1;
   unsigned int MLC2OUT:1;
   unsigned int MLC3OUT:1;
   unsigned int MLC4OUT:1;
} CLCDATA;
#byte CLCDATA = 0xE0F

struct CLC1CON {
   union {
      struct {
         unsigned int LC1MODE:3;
         unsigned int LC1INTN:1;
         unsigned int LC1INTP:1;
         unsigned int LC1OUT:1;
         unsigned int LC1OE:1;
         unsigned int LC1EN:1;
      };

      struct {
         unsigned int MODE:3;
         unsigned int INTN:1;
         unsigned int INTP:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };
   };
} CLC1CON;
#byte CLC1CON = 0xE10

struct CLC1POL {
   union {
      struct {
         unsigned int LC1G1POL:1;
         unsigned int LC1G2POL:1;
         unsigned int LC1G3POL:1;
         unsigned int LC1G4POL:1;
         unsigned int :3;
         unsigned int LC1POL:1;
      };

      struct {
         unsigned int G1POL:1;
         unsigned int G2POL:1;
         unsigned int G3POL:1;
         unsigned int G4POL:1;
         unsigned int :3;
         unsigned int POL:1;
      };
   };
} CLC1POL;
#byte CLC1POL = 0xE11

struct CLC1SEL0 {
   union {
      struct {
         unsigned int LC1D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} CLC1SEL0;
#byte CLC1SEL0 = 0xE12

struct CLC1SEL1 {
   union {
      struct {
         unsigned int LC1D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} CLC1SEL1;
#byte CLC1SEL1 = 0xE13

struct CLC1SEL2 {
   union {
      struct {
         unsigned int LC1D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} CLC1SEL2;
#byte CLC1SEL2 = 0xE14

struct CLC1SEL3 {
   union {
      struct {
         unsigned int LC1D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} CLC1SEL3;
#byte CLC1SEL3 = 0xE15

struct CLC1GLS0 {
   union {
      struct {
         unsigned int LC1G1D1N:1;
         unsigned int LC1G1D1T:1;
         unsigned int LC1G1D2N:1;
         unsigned int LC1G1D2T:1;
         unsigned int LC1G1D3N:1;
         unsigned int LC1G1D3T:1;
         unsigned int LC1G1D4N:1;
         unsigned int LC1G1D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} CLC1GLS0;
#byte CLC1GLS0 = 0xE16

struct CLC1GLS1 {
   union {
      struct {
         unsigned int LC1G2D1N:1;
         unsigned int LC1G2D1T:1;
         unsigned int LC1G2D2N:1;
         unsigned int LC1G2D2T:1;
         unsigned int LC1G2D3N:1;
         unsigned int LC1G2D3T:1;
         unsigned int LC1G2D4N:1;
         unsigned int LC1G2D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} CLC1GLS1;
#byte CLC1GLS1 = 0xE17

struct CLC1GLS2 {
   union {
      struct {
         unsigned int LC1G3D1N:1;
         unsigned int LC1G3D1T:1;
         unsigned int LC1G3D2N:1;
         unsigned int LC1G3D2T:1;
         unsigned int LC1G3D3N:1;
         unsigned int LC1G3D3T:1;
         unsigned int LC1G3D4N:1;
         unsigned int LC1G3D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} CLC1GLS2;
#byte CLC1GLS2 = 0xE18

struct CLC1GLS3 {
   union {
      struct {
         unsigned int LC1G4D1N:1;
         unsigned int LC1G4D1T:1;
         unsigned int LC1G4D2N:1;
         unsigned int LC1G4D2T:1;
         unsigned int LC1G4D3N:1;
         unsigned int LC1G4D3T:1;
         unsigned int LC1G4D4N:1;
         unsigned int LC1G4D4T:1;
      };

      struct {
         unsigned int G4D1N:1;
         unsigned int G4D1T:1;
         unsigned int G4D2N:1;
         unsigned int G4D2T:1;
         unsigned int G4D3N:1;
         unsigned int G4D3T:1;
         unsigned int G4D4N:1;
         unsigned int G4D4T:1;
      };
   };
} CLC1GLS3;
#byte CLC1GLS3 = 0xE19

struct CLC2CON {
   union {
      struct {
         unsigned int LC2MODE:3;
         unsigned int LC2INTN:1;
         unsigned int LC2INTP:1;
         unsigned int LC2OUT:1;
         unsigned int LC2OE:1;
         unsigned int LC2EN:1;
      };

      struct {
         unsigned int MODE:3;
         unsigned int INTN:1;
         unsigned int INTP:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };
   };
} CLC2CON;
#byte CLC2CON = 0xE1A

struct CLC2POL {
   union {
      struct {
         unsigned int LC2G1POL:1;
         unsigned int LC2G2POL:1;
         unsigned int LC2G3POL:1;
         unsigned int LC2G4POL:1;
         unsigned int :3;
         unsigned int LC2POL:1;
      };

      struct {
         unsigned int G1POL:1;
         unsigned int G2POL:1;
         unsigned int G3POL:1;
         unsigned int G4POL:1;
         unsigned int :3;
         unsigned int POL:1;
      };
   };
} CLC2POL;
#byte CLC2POL = 0xE1B

struct CLC2SEL0 {
   union {
      struct {
         unsigned int LC2D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} CLC2SEL0;
#byte CLC2SEL0 = 0xE1C

struct CLC2SEL1 {
   union {
      struct {
         unsigned int LC2D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} CLC2SEL1;
#byte CLC2SEL1 = 0xE1D

struct CLC2SEL2 {
   union {
      struct {
         unsigned int LC2D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} CLC2SEL2;
#byte CLC2SEL2 = 0xE1E

struct CLC2SEL3 {
   union {
      struct {
         unsigned int LC2D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} CLC2SEL3;
#byte CLC2SEL3 = 0xE1F

struct CLC2GLS0 {
   union {
      struct {
         unsigned int LC2G1D1N:1;
         unsigned int LC2G1D1T:1;
         unsigned int LC2G1D2N:1;
         unsigned int LC2G1D2T:1;
         unsigned int LC2G1D3N:1;
         unsigned int LC2G1D3T:1;
         unsigned int LC2G1D4N:1;
         unsigned int LC2G1D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} CLC2GLS0;
#byte CLC2GLS0 = 0xE20

struct CLC2GLS1 {
   union {
      struct {
         unsigned int LC2G2D1N:1;
         unsigned int LC2G2D1T:1;
         unsigned int LC2G2D2N:1;
         unsigned int LC2G2D2T:1;
         unsigned int LC2G2D3N:1;
         unsigned int LC2G2D3T:1;
         unsigned int LC2G2D4N:1;
         unsigned int LC2G2D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} CLC2GLS1;
#byte CLC2GLS1 = 0xE21

struct CLC2GLS2 {
   union {
      struct {
         unsigned int LC2G3D1N:1;
         unsigned int LC2G3D1T:1;
         unsigned int LC2G3D2N:1;
         unsigned int LC2G3D2T:1;
         unsigned int LC2G3D3N:1;
         unsigned int LC2G3D3T:1;
         unsigned int LC2G3D4N:1;
         unsigned int LC2G3D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} CLC2GLS2;
#byte CLC2GLS2 = 0xE22

struct CLC2GLS3 {
   union {
      struct {
         unsigned int LC2G4D1N:1;
         unsigned int LC2G4D1T:1;
         unsigned int LC2G4D2N:1;
         unsigned int LC2G4D2T:1;
         unsigned int LC2G4D3N:1;
         unsigned int LC2G4D3T:1;
         unsigned int LC2G4D4N:1;
         unsigned int LC2G4D4T:1;
      };

      struct {
         unsigned int G4D1N:1;
         unsigned int G4D1T:1;
         unsigned int G4D2N:1;
         unsigned int G4D2T:1;
         unsigned int G4D3N:1;
         unsigned int G4D3T:1;
         unsigned int G4D4N:1;
         unsigned int G4D4T:1;
      };
   };
} CLC2GLS3;
#byte CLC2GLS3 = 0xE23

struct CLC3CON {
   union {
      struct {
         unsigned int LC3MODE:3;
         unsigned int LC3INTN:1;
         unsigned int LC3INTP:1;
         unsigned int LC3OUT:1;
         unsigned int LC3OE:1;
         unsigned int LC3EN:1;
      };

      struct {
         unsigned int MODE:3;
         unsigned int INTN:1;
         unsigned int INTP:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };
   };
} CLC3CON;
#byte CLC3CON = 0xE24

struct CLC3POL {
   union {
      struct {
         unsigned int LC3G1POL:1;
         unsigned int LC3G2POL:1;
         unsigned int LC3G3POL:1;
         unsigned int LC3G4POL:1;
         unsigned int :3;
         unsigned int LC3POL:1;
      };

      struct {
         unsigned int G1POL:1;
         unsigned int G2POL:1;
         unsigned int G3POL:1;
         unsigned int G4POL:1;
         unsigned int :3;
         unsigned int POL:1;
      };
   };
} CLC3POL;
#byte CLC3POL = 0xE25

struct CLC3SEL0 {
   union {
      struct {
         unsigned int LC3D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} CLC3SEL0;
#byte CLC3SEL0 = 0xE26

struct CLC3SEL1 {
   union {
      struct {
         unsigned int LC3D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} CLC3SEL1;
#byte CLC3SEL1 = 0xE27

struct CLC3SEL2 {
   union {
      struct {
         unsigned int LC3D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} CLC3SEL2;
#byte CLC3SEL2 = 0xE28

struct CLC3SEL3 {
   union {
      struct {
         unsigned int LC3D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} CLC3SEL3;
#byte CLC3SEL3 = 0xE29

struct CLC3GLS0 {
   union {
      struct {
         unsigned int LC3G1D1N:1;
         unsigned int LC3G1D1T:1;
         unsigned int LC3G1D2N:1;
         unsigned int LC3G1D2T:1;
         unsigned int LC3G1D3N:1;
         unsigned int LC3G1D3T:1;
         unsigned int LC3G1D4N:1;
         unsigned int LC3G1D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} CLC3GLS0;
#byte CLC3GLS0 = 0xE2A

struct CLC3GLS1 {
   union {
      struct {
         unsigned int LC3G2D1N:1;
         unsigned int LC3G2D1T:1;
         unsigned int LC3G2D2N:1;
         unsigned int LC3G2D2T:1;
         unsigned int LC3G2D3N:1;
         unsigned int LC3G2D3T:1;
         unsigned int LC3G2D4N:1;
         unsigned int LC3G2D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} CLC3GLS1;
#byte CLC3GLS1 = 0xE2B

struct CLC3GLS2 {
   union {
      struct {
         unsigned int LC3G3D1N:1;
         unsigned int LC3G3D1T:1;
         unsigned int LC3G3D2N:1;
         unsigned int LC3G3D2T:1;
         unsigned int LC3G3D3N:1;
         unsigned int LC3G3D3T:1;
         unsigned int LC3G3D4N:1;
         unsigned int LC3G3D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} CLC3GLS2;
#byte CLC3GLS2 = 0xE2C

struct CLC3GLS3 {
   union {
      struct {
         unsigned int LC3G4D1N:1;
         unsigned int LC3G4D1T:1;
         unsigned int LC3G4D2N:1;
         unsigned int LC3G4D2T:1;
         unsigned int LC3G4D3N:1;
         unsigned int LC3G4D3T:1;
         unsigned int LC3G4D4N:1;
         unsigned int LC3G4D4T:1;
      };

      struct {
         unsigned int G4D1N:1;
         unsigned int G4D1T:1;
         unsigned int G4D2N:1;
         unsigned int G4D2T:1;
         unsigned int G4D3N:1;
         unsigned int G4D3T:1;
         unsigned int G4D4N:1;
         unsigned int G4D4T:1;
      };
   };
} CLC3GLS3;
#byte CLC3GLS3 = 0xE2D

struct CLC4CON {
   union {
      struct {
         unsigned int LC4MODE:3;
         unsigned int LC4INTN:1;
         unsigned int LC4INTP:1;
         unsigned int LC4OUT:1;
         unsigned int LC4OE:1;
         unsigned int LC4EN:1;
      };

      struct {
         unsigned int MODE:3;
         unsigned int INTN:1;
         unsigned int INTP:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };
   };
} CLC4CON;
#byte CLC4CON = 0xE2E

struct CLC4POL {
   union {
      struct {
         unsigned int LC4G1POL:1;
         unsigned int LC4G2POL:1;
         unsigned int LC4G3POL:1;
         unsigned int LC4G4POL:1;
         unsigned int :3;
         unsigned int LC4POL:1;
      };

      struct {
         unsigned int G1POL:1;
         unsigned int G2POL:1;
         unsigned int G3POL:1;
         unsigned int G4POL:1;
         unsigned int :3;
         unsigned int POL:1;
      };
   };
} CLC4POL;
#byte CLC4POL = 0xE2F

struct CLC4SEL0 {
   union {
      struct {
         unsigned int LC4D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} CLC4SEL0;
#byte CLC4SEL0 = 0xE30

struct CLC4SEL1 {
   union {
      struct {
         unsigned int LC4D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} CLC4SEL1;
#byte CLC4SEL1 = 0xE31

struct CLC4SEL2 {
   union {
      struct {
         unsigned int LC4D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} CLC4SEL2;
#byte CLC4SEL2 = 0xE32

struct CLC4SEL3 {
   union {
      struct {
         unsigned int LC4D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} CLC4SEL3;
#byte CLC4SEL3 = 0xE33

struct CLC4GLS0 {
   union {
      struct {
         unsigned int LC4G1D1N:1;
         unsigned int LC4G1D1T:1;
         unsigned int LC4G1D2N:1;
         unsigned int LC4G1D2T:1;
         unsigned int LC4G1D3N:1;
         unsigned int LC4G1D3T:1;
         unsigned int LC4G1D4N:1;
         unsigned int LC4G1D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} CLC4GLS0;
#byte CLC4GLS0 = 0xE34

struct CLC4GLS1 {
   union {
      struct {
         unsigned int LC4G2D1N:1;
         unsigned int LC4G2D1T:1;
         unsigned int LC4G2D2N:1;
         unsigned int LC4G2D2T:1;
         unsigned int LC4G2D3N:1;
         unsigned int LC4G2D3T:1;
         unsigned int LC4G2D4N:1;
         unsigned int LC4G2D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} CLC4GLS1;
#byte CLC4GLS1 = 0xE35

struct CLC4GLS2 {
   union {
      struct {
         unsigned int LC4G3D1N:1;
         unsigned int LC4G3D1T:1;
         unsigned int LC4G3D2N:1;
         unsigned int LC4G3D2T:1;
         unsigned int LC4G3D3N:1;
         unsigned int LC4G3D3T:1;
         unsigned int LC4G3D4N:1;
         unsigned int LC4G3D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} CLC4GLS2;
#byte CLC4GLS2 = 0xE36

struct CLC4GLS3 {
   union {
      struct {
         unsigned int LC4G4D1N:1;
         unsigned int LC4G4D1T:1;
         unsigned int LC4G4D2N:1;
         unsigned int LC4G4D2T:1;
         unsigned int LC4G4D3N:1;
         unsigned int LC4G4D3T:1;
         unsigned int LC4G4D4N:1;
         unsigned int LC4G4D4T:1;
      };

      struct {
         unsigned int G4D1N:1;
         unsigned int G4D1T:1;
         unsigned int G4D2N:1;
         unsigned int G4D2T:1;
         unsigned int G4D3N:1;
         unsigned int G4D3T:1;
         unsigned int G4D4N:1;
         unsigned int G4D4T:1;
      };
   };
} CLC4GLS3;
#byte CLC4GLS3 = 0xE37

struct PPSLOCK {
   unsigned int PPSLOCKED:1;
} PPSLOCK;
#byte PPSLOCK = 0xE8F

#byte INTPPS = 0xE90

#byte T0CKIPPS = 0xE91

#byte T1CKIPPS = 0xE92

#byte T1GPPS = 0xE93

#byte T3CKIPPS = 0xE94

#byte T3GPPS = 0xE95

#byte T5CKIPPS = 0xE96

#byte T5GPPS = 0xE97

#byte T2AINPPS = 0xE9C

#byte T4AINPPS = 0xE9D

#byte T6AINPPS = 0xE9E

#byte CCP1PPS = 0xEA1

#byte CCP2PPS = 0xEA2

#byte CCP3PPS = 0xEA3

#byte CCP4PPS = 0xEA4

#byte CCP5PPS = 0xEA5

#byte SMT1WINPPS = 0xEA9

#byte SMT1SIGPPS = 0xEAA

#byte SMT2WINPPS = 0xEAB

#byte SMT2SIGPPS = 0xEAC

#byte CWG1PPS = 0xEB1

#byte CWG2PPS = 0xEB2

#byte CWG3PPS = 0xEB3

#byte MDCARLPPS = 0xEB8

#byte MDCARHPPS = 0xEB9

#byte MDSRCPPS = 0xEBA

#byte CLCIN0PPS = 0xEBB

#byte CLCIN1PPS = 0xEBC

#byte CLCIN2PPS = 0xEBD

#byte CLCIN3PPS = 0xEBE

#byte ADCACTPPS = 0xEC3

#byte SSP1CLKPPS = 0xEC5

#byte SSP1DATPPS = 0xEC6

#byte SSP1SSPPS = 0xEC7

#byte SSP2CLKPPS = 0xEC8

#byte SSP2DATPPS = 0xEC9

#byte SSP2SSPPS = 0xECA

#byte RXPPS = 0xECB

#byte TXPPS = 0xECC

#byte RA0PPS = 0xF10

#byte RA1PPS = 0xF11

#byte RA2PPS = 0xF12

#byte RA3PPS = 0xF13

#byte RA4PPS = 0xF14

#byte RA5PPS = 0xF15

#byte RA6PPS = 0xF16

#byte RA7PPS = 0xF17

#byte RB0PPS = 0xF18

#byte RB1PPS = 0xF19

#byte RB2PPS = 0xF1A

#byte RB3PPS = 0xF1B

#byte RB4PPS = 0xF1C

#byte RB5PPS = 0xF1D

#byte RB6PPS = 0xF1E

#byte RB7PPS = 0xF1F

#byte RC0PPS = 0xF20

#byte RC1PPS = 0xF21

#byte RC2PPS = 0xF22

#byte RC3PPS = 0xF23

#byte RC4PPS = 0xF24

#byte RC5PPS = 0xF25

#byte RC6PPS = 0xF26

#byte RC7PPS = 0xF27

struct ANSELA {
   unsigned int ANSA:8;
} ANSELA;
#byte ANSELA = 0xF38

struct WPUA {
   unsigned int WPUA:8;
} WPUA;
#byte WPUA = 0xF39

struct ODCONA {
   unsigned int ODCA:8;
} ODCONA;
#byte ODCONA = 0xF3A

struct SLRCONA {
   unsigned int SLRA:8;
} SLRCONA;
#byte SLRCONA = 0xF3B

struct INLVLA {
   unsigned int INLVLA:8;
} INLVLA;
#byte INLVLA = 0xF3C

struct IOCAP {
   unsigned int IOCAP:8;
} IOCAP;
#byte IOCAP = 0xF3D

struct IOCAN {
   unsigned int IOCAN:8;
} IOCAN;
#byte IOCAN = 0xF3E

struct IOCAF {
   unsigned int IOCAF:8;
} IOCAF;
#byte IOCAF = 0xF3F

struct CCDNA {
   unsigned int CCDNA:8;
} CCDNA;
#byte CCDNA = 0xF40

struct CCDPA {
   unsigned int CCDPA:8;
} CCDPA;
#byte CCDPA = 0xF41

struct ANSELB {
   unsigned int ANSB:8;
} ANSELB;
#byte ANSELB = 0xF43

struct WPUB {
   unsigned int WPUB:8;
} WPUB;
#byte WPUB = 0xF44

struct ODCONB {
   unsigned int ODCB:8;
} ODCONB;
#byte ODCONB = 0xF45

struct SLRCONB {
   unsigned int SLRB:8;
} SLRCONB;
#byte SLRCONB = 0xF46

struct INLVLB {
   unsigned int INLVLB:8;
} INLVLB;
#byte INLVLB = 0xF47

struct IOCBP {
   unsigned int IOCBP:8;
} IOCBP;
#byte IOCBP = 0xF48

struct IOCBN {
   unsigned int IOCBN:8;
} IOCBN;
#byte IOCBN = 0xF49

struct IOCBF {
   unsigned int IOCBF:8;
} IOCBF;
#byte IOCBF = 0xF4A

struct CCDNB {
   unsigned int CCDNB:8;
} CCDNB;
#byte CCDNB = 0xF4B

struct CCDPB {
   unsigned int CCDPB:8;
} CCDPB;
#byte CCDPB = 0xF4C

struct ANSELC {
   unsigned int ANSC:8;
} ANSELC;
#byte ANSELC = 0xF4E

struct WPUC {
   unsigned int WPUC:8;
} WPUC;
#byte WPUC = 0xF4F

struct ODCONC {
   unsigned int ODCC:8;
} ODCONC;
#byte ODCONC = 0xF50

struct SLRCONC {
   unsigned int SLRC:8;
} SLRCONC;
#byte SLRCONC = 0xF51

struct INLVLC {
   unsigned int INLVLC:8;
} INLVLC;
#byte INLVLC = 0xF52

struct IOCCP {
   unsigned int IOCCP:8;
} IOCCP;
#byte IOCCP = 0xF53

struct IOCCN {
   unsigned int IOCCN:8;
} IOCCN;
#byte IOCCN = 0xF54

struct IOCCF {
   unsigned int IOCCF:8;
} IOCCF;
#byte IOCCF = 0xF55

struct CCDNC {
   unsigned int CCDNC:8;
} CCDNC;
#byte CCDNC = 0xF56

struct CCDPC {
   unsigned int CCDPC:8;
} CCDPC;
#byte CCDPC = 0xF57

struct WPUE {
   unsigned int :3;
   unsigned int WPUE3:1;
} WPUE;
#byte WPUE = 0xF65

struct INLVLE {
   unsigned int :3;
   unsigned int INLVLE3:1;
} INLVLE;
#byte INLVLE = 0xF68

struct IOCEP {
   unsigned int :3;
   unsigned int IOCEP3:1;
} IOCEP;
#byte IOCEP = 0xF69

struct IOCEN {
   unsigned int :3;
   unsigned int IOCEN3:1;
} IOCEN;
#byte IOCEN = 0xF6A

struct IOCEF {
   unsigned int :3;
   unsigned int IOCEF3:1;
} IOCEF;
#byte IOCEF = 0xF6B

struct STATUS_SHAD {
   unsigned int C_SHAD:1;
   unsigned int DC_SHAD:1;
   unsigned int Z_SHAD:1;
} STATUS_SHAD;
#byte STATUS_SHAD = 0xFE4

#byte WREG_SHAD = 0xFE5

#byte BSR_SHAD = 0xFE6

#byte PCLATH_SHAD = 0xFE7

#byte FSR0L_SHAD = 0xFE8

#byte FSR0H_SHAD = 0xFE9

#byte FSR1L_SHAD = 0xFEA

#byte FSR1H_SHAD = 0xFEB

#byte STKPTR = 0xFED

#word TOS = 0xFEE

