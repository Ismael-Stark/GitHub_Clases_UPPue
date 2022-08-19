#byte INDF0 = 0x000

#byte INDF1 = 0x001

#byte PCL = 0x002

struct  {
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

struct  {
   unsigned int INTEDG:1;
   unsigned int :5;
   unsigned int PEIE:1;
   unsigned int GIE:1;
} INTCON;
#byte INTCON = 0x00B

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
   unsigned int TMR0L:8;
} TMR0;
#byte TMR0 = 0x01C

struct  {
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

struct  {
   unsigned int T0OUTPS:4;
   unsigned int T016BIT:1;
   unsigned int T0OUT:1;
   unsigned int T0OE:1;
   unsigned int T0EN:1;
} T0CON0;
#byte T0CON0 = 0x01E

struct  {
   unsigned int T0CKPS:4;
   unsigned int T0ASYNC:1;
   unsigned int T0CS:3;
} T0CON1;
#byte T0CON1 = 0x01F

#word ADRES = 0x08C

struct  {
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

struct  {
   unsigned int ADDSEN:1;
   unsigned int :4;
   unsigned int ADGPOL:1;
   unsigned int ADIPEN:1;
   unsigned int ADPPOL:1;
} ADCON1;
#byte ADCON1 = 0x094

struct  {
   unsigned int ADMD:3;
   unsigned int ADACLR:1;
   unsigned int ADCRS:3;
   unsigned int ADPSIS:1;
} ADCON2;
#byte ADCON2 = 0x095

struct  {
   unsigned int ADTMD:3;
   unsigned int ADSOI:1;
   unsigned int ADCALC:3;
} ADCON3;
#byte ADCON3 = 0x096

struct  {
   unsigned int ADSTAT:3;
   unsigned int ADMACT:1;
   unsigned int ADMATH:1;
   unsigned int ADLTHR:1;
   unsigned int ADUTHR:1;
   unsigned int ADAOV:1;
} ADSTAT;
#byte ADSTAT = 0x097

#byte ADACT = 0x099

#byte RC1REG = 0x119

#byte TX1REG = 0x11A

#word SP1BRG = 0x11B

struct  {
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

struct  {
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

struct  {
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


struct  {
   unsigned int MSK:8;
} SSP1ADD;
#byte SSP1ADD = 0x18D


struct  {
   unsigned int MSK:8;
} SSP1MSK;
#byte SSP1MSK = 0x18E

struct  {
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

struct  {
   unsigned int SSPM:4;
   unsigned int CKP:1;
   unsigned int SSPEN:1;
   unsigned int SSPOV:1;
   unsigned int WCOL:1;
} SSP1CON1;
#byte SSP1CON1 = 0x190

struct  {
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

struct  {
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


struct  {
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


struct  {
   unsigned int MSK:8;
} SSP2MSK;
#byte SSP2MSK = 0x198

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
   unsigned int C1TSEL:2;
   unsigned int C2TSEL:2;
   unsigned int C3TSEL:2;
   unsigned int C4TSEL:2;
} CCPTMRS0;
#byte CCPTMRS0 = 0x21E

struct  {
   unsigned int C5TSEL:2;
   unsigned int P6TSEL:2;
   unsigned int P7TSEL:2;
} CCPTMRS1;
#byte CCPTMRS1 = 0x21F

#byte T2TMR = 0x28C

#byte T2PR = 0x28D

struct  {
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

struct  {
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

#byte T2RST = 0x291

#byte T4TMR = 0x292

#byte T4PR = 0x293

struct  {
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

struct  {
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

#byte T4RST = 0x297

#byte T6TMR = 0x298

#byte T6PR = 0x299

struct  {
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

struct  {
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

#byte T6RST = 0x29D

#word CCPR1 = 0x30C

struct  {
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


struct  {
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

struct  {
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


struct  {
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

struct  {
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


struct  {
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

struct  {
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


struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
   unsigned int DATA:8;
} CRCDAT;
#byte CRCDAT = 0x416

struct  {
   unsigned int DATA8:2;
   unsigned int DATA1:6;
} CRCDATH;
#byte CRCDATH = 0x417

struct  {
   unsigned int ACC:8;
} CRCACC;
#byte CRCACC = 0x418

struct  {
   unsigned int ACC8:2;
   unsigned int ACC1:6;
} CRCACCH;
#byte CRCACCH = 0x419

struct  {
   unsigned int SHFT:8;
} CRCSHIFT;
#byte CRCSHIFT = 0x41A

struct  {
   unsigned int SHFT8:2;
   unsigned int SHFT1:6;
} CRCSHIFTH;
#byte CRCSHIFTH = 0x41B

struct  {
   unsigned int :1;
   unsigned int X1:7;
} CRCXOR;
#byte CRCXOR = 0x41C

struct  {
   unsigned int X8:2;
   unsigned int X1:6;
} CRCXORH;
#byte CRCXORH = 0x41D

struct  {
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

struct  {
   unsigned int PLEN:4;
   unsigned int DLEN:4;
} CRCCON1;
#byte CRCCON1 = 0x41F

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
   unsigned int NCO1ACC:8;
} NCO1ACC;
#byte NCO1ACC = 0x58C

struct  {
   unsigned int NCO1ACC8:2;
   unsigned int NCO1ACC1:6;
} NCO1ACCH;
#byte NCO1ACCH = 0x58D

struct  {
   unsigned int NCO1ACC16:4;
   unsigned int NCO1ACC2:4;
} NCO1ACCU;
#byte NCO1ACCU = 0x58E

struct  {
   unsigned int NCO1INC:8;
} NCO1INC;
#byte NCO1INC = 0x58F

struct  {
   unsigned int NCO1INC8:2;
   unsigned int NCO1INC1:6;
} NCO1INCH;
#byte NCO1INCH = 0x590

struct  {
   unsigned int NCO1INC16:4;
   unsigned int NCO1INC2:4;
} NCO1INCU;
#byte NCO1INCU = 0x591

struct  {
   unsigned int N1PFM:1;
   unsigned int :3;
   unsigned int N1POL:1;
   unsigned int N1OUT:1;
   unsigned int N1OE:1;
   unsigned int N1EN:1;
} NCO1CON;
#byte NCO1CON = 0x592

struct  {
   unsigned int N1CKS:4;
   unsigned int :1;
   unsigned int N1PWS:3;
} NCO1CLK;
#byte NCO1CLK = 0x593

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
   unsigned int AS0E:1;
   unsigned int AS1E:1;
   unsigned int AS2E:1;
   unsigned int AS3E:1;
   unsigned int AS4E:1;
   unsigned int AS5E:1;
   unsigned int AS6E:1;
} CWG1AS1;
#byte CWG1AS1 = 0x613

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
   unsigned int AS0E:1;
   unsigned int AS1E:1;
   unsigned int AS2E:1;
   unsigned int AS3E:1;
   unsigned int AS4E:1;
   unsigned int AS5E:1;
   unsigned int AS6E:1;
} CWG2AS1;
#byte CWG2AS1 = 0x61D

struct  {
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

struct  {
   unsigned int INTF:1;
   unsigned int :3;
   unsigned int IOCIF:1;
   unsigned int TMR0IF:1;
} PIR0;
#byte PIR0 = 0x70C

struct  {
   unsigned int ADIF:1;
   unsigned int ADTIF:1;
   unsigned int :4;
   unsigned int CSWIF:1;
   unsigned int OSFIF:1;
} PIR1;
#byte PIR1 = 0x70D

struct  {
   unsigned int C1IF:1;
   unsigned int C2IF:1;
   unsigned int :4;
   unsigned int ZCDIF:1;
} PIR2;
#byte PIR2 = 0x70E

struct  {
   unsigned int SSP1IF:1;
   unsigned int BCL1IF:1;
   unsigned int SSP2IF:1;
   unsigned int BCL2IF:1;
   unsigned int TXIF:1;
   unsigned int RCIF:1;
} PIR3;
#byte PIR3 = 0x70F

struct  {
   unsigned int TMR1IF:1;
   unsigned int TMR2IF:1;
   unsigned int TMR3IF:1;
   unsigned int TMR4IF:1;
   unsigned int TMR5IF:1;
   unsigned int TMR6IF:1;
} PIR4;
#byte PIR4 = 0x710

struct  {
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

struct  {
   unsigned int CCP1IF:1;
   unsigned int CCP2IF:1;
   unsigned int CCP3IF:1;
   unsigned int CCP4IF:1;
   unsigned int CCP5IF:1;
} PIR6;
#byte PIR6 = 0x712

struct  {
   unsigned int INTE:1;
   unsigned int :3;
   unsigned int IOCIE:1;
   unsigned int TMR0IE:1;
} PIE0;
#byte PIE0 = 0x716

struct  {
   unsigned int ADIE:1;
   unsigned int ADTIE:1;
   unsigned int :4;
   unsigned int CSWIE:1;
   unsigned int OSFIE:1;
} PIE1;
#byte PIE1 = 0x717

struct  {
   unsigned int C1IE:1;
   unsigned int C2IE:1;
   unsigned int :4;
   unsigned int ZCDIE:1;
} PIE2;
#byte PIE2 = 0x718

struct  {
   unsigned int SSP1IE:1;
   unsigned int BCL1IE:1;
   unsigned int SSP2IE:1;
   unsigned int BCL2IE:1;
   unsigned int TXIE:1;
   unsigned int RCIE:1;
} PIE3;
#byte PIE3 = 0x719

struct  {
   unsigned int TMR1IE:1;
   unsigned int TMR2IE:1;
   unsigned int TMR3IE:1;
   unsigned int TMR4IE:1;
   unsigned int TMR5IE:1;
   unsigned int TMR6IE:1;
} PIE4;
#byte PIE4 = 0x71A

struct  {
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

struct  {
   unsigned int CCP1IE:1;
   unsigned int CCP2IE:1;
   unsigned int CCP3IE:1;
   unsigned int CCP4IE:1;
   unsigned int CCP5IE:1;
} PIE6;
#byte PIE6 = 0x71C

struct  {
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

struct  {
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

struct  {
   unsigned int ZCDMD:1;
   unsigned int CMP1MD:1;
   unsigned int CMP2MD:1;
   unsigned int :2;
   unsigned int ADCMD:1;
   unsigned int DACMD:1;
} PMD2;
#byte PMD2 = 0x798

struct  {
   unsigned int CCP1MD:1;
   unsigned int CCP2MD:1;
   unsigned int CCP3MD:1;
   unsigned int CCP4MD:1;
   unsigned int CCP5MD:1;
   unsigned int PWM6MD:1;
   unsigned int PWM7MD:1;
} PMD3;
#byte PMD3 = 0x799

struct  {
   unsigned int CWG1MD:1;
   unsigned int CWG2MD:1;
   unsigned int CWG3MD:1;
   unsigned int :1;
   unsigned int MSSP1MD:1;
   unsigned int MSSP2MD:1;
   unsigned int UART1MD:1;
} PMD4;
#byte PMD4 = 0x79A

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
   unsigned int BORRDY:1;
   unsigned int :6;
   unsigned int SBOREN:1;
} BORCON;
#byte BORCON = 0x811

struct  {
   unsigned int :1;
   unsigned int VREGPM:1;
} VREGCON;
#byte VREGCON = 0x812

struct  {
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

struct  {
   unsigned int CCDS:2;
   unsigned int :5;
   unsigned int CCDEN:1;
} CCDCON;
#byte CCDCON = 0x814

struct  {
   unsigned int NVMADR:8;
} NVMADR;
#byte NVMADR = 0x81A

struct  {
   unsigned int NVMADR8:2;
   unsigned int NVMADR1:5;
} NVMADRH;
#byte NVMADRH = 0x81B

struct  {
   unsigned int NVMDAT:8;
} NVMDAT;
#byte NVMDAT = 0x81C

struct  {
   unsigned int NVMDAT8:2;
   unsigned int NVMDAT1:4;
} NVMDATH;
#byte NVMDATH = 0x81D

struct  {
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

struct  {
   unsigned int DOZE:3;
   unsigned int :1;
   unsigned int DOE:1;
   unsigned int ROI:1;
   unsigned int DOZEN:1;
   unsigned int IDLEN:1;
} CPUDOZE;
#byte CPUDOZE = 0x88C

struct  {
   unsigned int NDIV:4;
   unsigned int NOSC:3;
} OSCCON1;
#byte OSCCON1 = 0x88D

struct  {
   unsigned int CDIV:4;
   unsigned int COSC:3;
} OSCCON2;
#byte OSCCON2 = 0x88E

struct  {
   unsigned int :3;
   unsigned int NOSCR:1;
   unsigned int ORDY:1;
   unsigned int :1;
   unsigned int SOSCPWR:1;
   unsigned int CSWHOLD:1;
} OSCCON3;
#byte OSCCON3 = 0x88F

struct  {
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

struct  {
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

struct  {
   unsigned int CLKRDIV:3;
   unsigned int CLKRDC:2;
   unsigned int :2;
   unsigned int CLKREN:1;
} CLKRCON;
#byte CLKRCON = 0x895

#byte MDSRC = 0x899

#word MDCAR = 0x89A

struct  {
   unsigned int ADFVR:2;
   unsigned int CDAFVR:2;
   unsigned int TSRNG:1;
   unsigned int TSEN:1;
   unsigned int FVRRDY:1;
   unsigned int FVREN:1;
} FVRCON;
#byte FVRCON = 0x90C

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
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

struct  {
   unsigned int MLC1OUT:1;
   unsigned int MLC2OUT:1;
   unsigned int MLC3OUT:1;
   unsigned int MLC4OUT:1;
} CLCDATA;
#byte CLCDATA = 0x1E0F

struct  {
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
#byte CLC1CON = 0x1E10

struct  {
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
#byte CLC1POL = 0x1E11

struct  {
   union {
      struct {
         unsigned int LC1D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} CLC1SEL0;
#byte CLC1SEL0 = 0x1E12

struct  {
   union {
      struct {
         unsigned int LC1D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} CLC1SEL1;
#byte CLC1SEL1 = 0x1E13

struct  {
   union {
      struct {
         unsigned int LC1D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} CLC1SEL2;
#byte CLC1SEL2 = 0x1E14

struct  {
   union {
      struct {
         unsigned int LC1D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} CLC1SEL3;
#byte CLC1SEL3 = 0x1E15

struct  {
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
#byte CLC1GLS0 = 0x1E16

struct  {
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
#byte CLC1GLS1 = 0x1E17

struct  {
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
#byte CLC1GLS2 = 0x1E18

struct  {
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
#byte CLC1GLS3 = 0x1E19

struct  {
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
#byte CLC2CON = 0x1E1A

struct  {
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
#byte CLC2POL = 0x1E1B

struct  {
   union {
      struct {
         unsigned int LC2D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} CLC2SEL0;
#byte CLC2SEL0 = 0x1E1C

struct  {
   union {
      struct {
         unsigned int LC2D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} CLC2SEL1;
#byte CLC2SEL1 = 0x1E1D

struct  {
   union {
      struct {
         unsigned int LC2D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} CLC2SEL2;
#byte CLC2SEL2 = 0x1E1E

struct  {
   union {
      struct {
         unsigned int LC2D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} CLC2SEL3;
#byte CLC2SEL3 = 0x1E1F

struct  {
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
#byte CLC2GLS0 = 0x1E20

struct  {
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
#byte CLC2GLS1 = 0x1E21

struct  {
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
#byte CLC2GLS2 = 0x1E22

struct  {
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
#byte CLC2GLS3 = 0x1E23

struct  {
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
#byte CLC3CON = 0x1E24

struct  {
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
#byte CLC3POL = 0x1E25

struct  {
   union {
      struct {
         unsigned int LC3D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} CLC3SEL0;
#byte CLC3SEL0 = 0x1E26

struct  {
   union {
      struct {
         unsigned int LC3D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} CLC3SEL1;
#byte CLC3SEL1 = 0x1E27

struct  {
   union {
      struct {
         unsigned int LC3D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} CLC3SEL2;
#byte CLC3SEL2 = 0x1E28

struct  {
   union {
      struct {
         unsigned int LC3D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} CLC3SEL3;
#byte CLC3SEL3 = 0x1E29

struct  {
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
#byte CLC3GLS0 = 0x1E2A

struct  {
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
#byte CLC3GLS1 = 0x1E2B

struct  {
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
#byte CLC3GLS2 = 0x1E2C

struct  {
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
#byte CLC3GLS3 = 0x1E2D

struct  {
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
#byte CLC4CON = 0x1E2E

struct  {
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
#byte CLC4POL = 0x1E2F

struct  {
   union {
      struct {
         unsigned int LC4D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} CLC4SEL0;
#byte CLC4SEL0 = 0x1E30

struct  {
   union {
      struct {
         unsigned int LC4D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} CLC4SEL1;
#byte CLC4SEL1 = 0x1E31

struct  {
   union {
      struct {
         unsigned int LC4D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} CLC4SEL2;
#byte CLC4SEL2 = 0x1E32

struct  {
   union {
      struct {
         unsigned int LC4D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} CLC4SEL3;
#byte CLC4SEL3 = 0x1E33

struct  {
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
#byte CLC4GLS0 = 0x1E34

struct  {
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
#byte CLC4GLS1 = 0x1E35

struct  {
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
#byte CLC4GLS2 = 0x1E36

struct  {
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
#byte CLC4GLS3 = 0x1E37

struct  {
   unsigned int PPSLOCKED:1;
} PPSLOCK;
#byte PPSLOCK = 0x1E8F

#byte INTPPS = 0x1E90

#byte T0CKIPPS = 0x1E91

#byte T1CKIPPS = 0x1E92

#byte T1GPPS = 0x1E93

#byte T3CKIPPS = 0x1E94

#byte T3GPPS = 0x1E95

#byte T5CKIPPS = 0x1E96

#byte T5GPPS = 0x1E97

#byte CCP1PPS = 0x1EA1

#byte CCP2PPS = 0x1EA2

#byte CCP3PPS = 0x1EA3

#byte CCP4PPS = 0x1EA4

#byte SMT1WINPPS = 0x1EA9

#byte SMT1SIGPPS = 0x1EAA

#byte SMT2WINPPS = 0x1EAB

#byte SMT2SIGPPS = 0x1EAC

#byte CWG1PPS = 0x1EB1

#byte CWG2PPS = 0x1EB2

#byte CLCIN0PPS = 0x1EBB

#byte CLCIN1PPS = 0x1EBC

#byte CLCIN2PPS = 0x1EBD

#byte CLCIN3PPS = 0x1EBE

#byte ADCACTPPS = 0x1EC3

#byte SSP1CLKPPS = 0x1EC5

#byte SSP1DATPPS = 0x1EC6

#byte SSP1SSPPS = 0x1EC7

#byte SSP2CLKPPS = 0x1EC8

#byte SSP2DATPPS = 0x1EC9

#byte SSP2SSPPS = 0x1ECA

#byte RXPPS = 0x1ECB

#byte TXPPS = 0x1ECC

#byte RA0PPS = 0x1F10

#byte RA1PPS = 0x1F11

#byte RA2PPS = 0x1F12

#byte RA3PPS = 0x1F13

#byte RA4PPS = 0x1F14

#byte RA5PPS = 0x1F15

#byte RA6PPS = 0x1F16

#byte RA7PPS = 0x1F17

#byte RB0PPS = 0x1F18

#byte RB1PPS = 0x1F19

#byte RB2PPS = 0x1F1A

#byte RB3PPS = 0x1F1B

#byte RB4PPS = 0x1F1C

#byte RB5PPS = 0x1F1D

#byte RB6PPS = 0x1F1E

#byte RB7PPS = 0x1F1F

#byte RC0PPS = 0x1F20

#byte RC2PPS = 0x1F22

#byte RC3PPS = 0x1F23

#byte RC4PPS = 0x1F24

#byte RC5PPS = 0x1F25

#byte RC6PPS = 0x1F26

#byte RC7PPS = 0x1F27

struct  {
   unsigned int ANSA:8;
} ANSELA;
#byte ANSELA = 0x1F38

struct  {
   unsigned int WPUA:8;
} WPUA;
#byte WPUA = 0x1F39

struct  {
   unsigned int ODCA:8;
} ODCONA;
#byte ODCONA = 0x1F3A

struct  {
   unsigned int SLRA:8;
} SLRCONA;
#byte SLRCONA = 0x1F3B

struct  {
   unsigned int INLVLA:8;
} INLVLA;
#byte INLVLA = 0x1F3C

struct  {
   unsigned int IOCAP:8;
} IOCAP;
#byte IOCAP = 0x1F3D

struct  {
   unsigned int IOCAN:8;
} IOCAN;
#byte IOCAN = 0x1F3E

struct  {
   unsigned int IOCAF:8;
} IOCAF;
#byte IOCAF = 0x1F3F

struct  {
   unsigned int CCDNA:8;
} CCDNA;
#byte CCDNA = 0x1F40

struct  {
   unsigned int CCDPA:8;
} CCDPA;
#byte CCDPA = 0x1F41

struct  {
   unsigned int ANSB:8;
} ANSELB;
#byte ANSELB = 0x1F43

struct  {
   unsigned int WPUB:8;
} WPUB;
#byte WPUB = 0x1F44

struct  {
   unsigned int ODCB:8;
} ODCONB;
#byte ODCONB = 0x1F45

struct  {
   unsigned int SLRB:8;
} SLRCONB;
#byte SLRCONB = 0x1F46

struct  {
   unsigned int INLVLB:8;
} INLVLB;
#byte INLVLB = 0x1F47

struct  {
   unsigned int IOCBP:8;
} IOCBP;
#byte IOCBP = 0x1F48

struct  {
   unsigned int IOCBN:8;
} IOCBN;
#byte IOCBN = 0x1F49

struct  {
   unsigned int IOCBF:8;
} IOCBF;
#byte IOCBF = 0x1F4A

struct  {
   unsigned int CCDNB:8;
} CCDNB;
#byte CCDNB = 0x1F4B

struct  {
   unsigned int CCDPB:8;
} CCDPB;
#byte CCDPB = 0x1F4C

struct  {
   unsigned int ANSC:8;
} ANSELC;
#byte ANSELC = 0x1F4E

struct  {
   unsigned int WPUC:8;
} WPUC;
#byte WPUC = 0x1F4F

struct  {
   unsigned int ODCC:8;
} ODCONC;
#byte ODCONC = 0x1F50

struct  {
   unsigned int SLRC:8;
} SLRCONC;
#byte SLRCONC = 0x1F51

struct  {
   unsigned int INLVLC:8;
} INLVLC;
#byte INLVLC = 0x1F52

struct  {
   unsigned int IOCCP:8;
} IOCCP;
#byte IOCCP = 0x1F53

struct  {
   unsigned int IOCCN:8;
} IOCCN;
#byte IOCCN = 0x1F54

struct  {
   unsigned int IOCCF:8;
} IOCCF;
#byte IOCCF = 0x1F55

struct  {
   unsigned int CCDNC:8;
} CCDNC;
#byte CCDNC = 0x1F56

struct  {
   unsigned int CCDPC:8;
} CCDPC;
#byte CCDPC = 0x1F57

#byte WPUE = 0x1F65

#byte INLVLE = 0x1F68

struct  {
   unsigned int :3;
   unsigned int IOCEP3:1;
} IOCEP;
#byte IOCEP = 0x1F69

struct  {
   unsigned int :3;
   unsigned int IOCEN3:1;
} IOCEN;
#byte IOCEN = 0x1F6A

struct  {
   unsigned int :3;
   unsigned int IOCEF3:1;
} IOCEF;
#byte IOCEF = 0x1F6B

struct  {
   unsigned int C_SHAD:1;
   unsigned int DC_SHAD:1;
   unsigned int Z_SHAD:1;
} STATUS_SHAD;
#byte STATUS_SHAD = 0x1FE4

#byte WREG_SHAD = 0x1FE5

#byte BSR_SHAD = 0x1FE6

#byte PCLATH_SHAD = 0x1FE7

#byte FSR0L_SHAD = 0x1FE8

#byte FSR0H_SHAD = 0x1FE9

#byte FSR1L_SHAD = 0x1FEA

#byte FSR1H_SHAD = 0x1FEB

#byte STKPTR = 0x1FED

#word TOS = 0x1FEE

