#byte INDF0 = 0x000

#byte INDF1 = 0x001

#byte PCL = 0x002

typedef struct 
 {
   unsigned int C:1;
   unsigned int DC:1;
   unsigned int Z:1;
   unsigned int PD:1;
   unsigned int TO:1;
} STATUSBITS;
STATUSBITS STATUSbits;
#byte STATUSbits = 0x003
#byte STATUS = 0x003

#word FSR0 = 0x004

#word FSR1 = 0x006

#byte BSR = 0x008

#byte WREG = 0x009

#byte PCLATH = 0x00A

typedef struct 
 {
   unsigned int INTEDG:1;
   unsigned int :5;
   unsigned int PEIE:1;
   unsigned int GIE:1;
} INTCONBITS;
INTCONBITS INTCONbits;
#byte INTCONbits = 0x00B
#byte INTCON = 0x00B

typedef struct 
 {
   unsigned int RA0:1;
   unsigned int RA1:1;
   unsigned int RA2:1;
   unsigned int RA3:1;
   unsigned int RA4:1;
   unsigned int RA5:1;
   unsigned int RA6:1;
   unsigned int RA7:1;
} PORTABITS;
PORTABITS PORTAbits;
#byte PORTAbits = 0x00C
#byte PORTA = 0x00C

typedef struct 
 {
   unsigned int RB0:1;
   unsigned int RB1:1;
   unsigned int RB2:1;
   unsigned int RB3:1;
   unsigned int RB4:1;
   unsigned int RB5:1;
   unsigned int RB6:1;
   unsigned int RB7:1;
} PORTBBITS;
PORTBBITS PORTBbits;
#byte PORTBbits = 0x00D
#byte PORTB = 0x00D

typedef struct 
 {
   unsigned int RC0:1;
   unsigned int RC1:1;
   unsigned int RC2:1;
   unsigned int RC3:1;
   unsigned int RC4:1;
   unsigned int RC5:1;
   unsigned int RC6:1;
   unsigned int RC7:1;
} PORTCBITS;
PORTCBITS PORTCbits;
#byte PORTCbits = 0x00E
#byte PORTC = 0x00E

typedef struct 
 {
   unsigned int RE0:1;
   unsigned int RE1:1;
   unsigned int RE2:1;
   unsigned int RE3:1;
   unsigned int RE4:1;
   unsigned int RE5:1;
   unsigned int RE6:1;
   unsigned int RE7:1;
} PORTEBITS;
PORTEBITS PORTEbits;
#byte PORTEbits = 0x010
#byte PORTE = 0x010

typedef struct 
 {
   unsigned int TRISA0:1;
   unsigned int TRISA1:1;
   unsigned int TRISA2:1;
   unsigned int TRISA3:1;
   unsigned int TRISA4:1;
   unsigned int TRISA5:1;
   unsigned int TRISA6:1;
   unsigned int TRISA7:1;
} TRISABITS;
TRISABITS TRISAbits;
#byte TRISAbits = 0x011
#byte TRISA = 0x011

typedef struct 
 {
   unsigned int TRISB0:1;
   unsigned int TRISB1:1;
   unsigned int TRISB2:1;
   unsigned int TRISB3:1;
   unsigned int TRISB4:1;
   unsigned int TRISB5:1;
   unsigned int TRISB6:1;
   unsigned int TRISB7:1;
} TRISBBITS;
TRISBBITS TRISBbits;
#byte TRISBbits = 0x012
#byte TRISB = 0x012

typedef struct 
 {
   unsigned int TRISC0:1;
   unsigned int TRISC1:1;
   unsigned int TRISC2:1;
   unsigned int TRISC3:1;
   unsigned int TRISC4:1;
   unsigned int TRISC5:1;
   unsigned int TRISC6:1;
   unsigned int TRISC7:1;
} TRISCBITS;
TRISCBITS TRISCbits;
#byte TRISCbits = 0x013
#byte TRISC = 0x013

typedef struct 
 {
   unsigned int LATA0:1;
   unsigned int LATA1:1;
   unsigned int LATA2:1;
   unsigned int LATA3:1;
   unsigned int LATA4:1;
   unsigned int LATA5:1;
   unsigned int LATA6:1;
   unsigned int LATA7:1;
} LATABITS;
LATABITS LATAbits;
#byte LATAbits = 0x016
#byte LATA = 0x016

typedef struct 
 {
   unsigned int LATB0:1;
   unsigned int LATB1:1;
   unsigned int LATB2:1;
   unsigned int LATB3:1;
   unsigned int LATB4:1;
   unsigned int LATB5:1;
   unsigned int LATB6:1;
   unsigned int LATB7:1;
} LATBBITS;
LATBBITS LATBbits;
#byte LATBbits = 0x017
#byte LATB = 0x017

typedef struct 
 {
   unsigned int LATC0:1;
   unsigned int LATC1:1;
   unsigned int LATC2:1;
   unsigned int LATC3:1;
   unsigned int LATC4:1;
   unsigned int LATC5:1;
   unsigned int LATC6:1;
   unsigned int LATC7:1;
} LATCBITS;
LATCBITS LATCbits;
#byte LATCbits = 0x018
#byte LATC = 0x018

typedef struct 
 {
   unsigned int TMR0L:8;
} TMR0LBITS;
TMR0LBITS TMR0Lbits;
#byte TMR0Lbits = 0x01C
#byte TMR0L = 0x01C

typedef struct 
 {
   union {
      struct {
         unsigned int TMR0H:8;
      };

      struct {
         unsigned int T0PR:8;
      };
   };
} TMR0HBITS;
TMR0HBITS TMR0Hbits;
#byte TMR0Hbits = 0x01D
#byte TMR0H = 0x01D

typedef struct 
 {
   unsigned int T0OUTPS:4;
   unsigned int T016BIT:1;
   unsigned int T0OUT:1;
   unsigned int T0OE:1;
   unsigned int T0EN:1;
} T0CON0BITS;
T0CON0BITS T0CON0bits;
#byte T0CON0bits = 0x01E
#byte T0CON0 = 0x01E

typedef struct 
 {
   unsigned int T0CKPS:4;
   unsigned int T0ASYNC:1;
   unsigned int T0CS:3;
} T0CON1BITS;
T0CON1BITS T0CON1bits;
#byte T0CON1bits = 0x01F
#byte T0CON1 = 0x01F

#word ADRES = 0x08C

typedef struct 
 {
   unsigned int ADPREV:8;
} ADPREVLBITS;
ADPREVLBITS ADPREVLbits;
#byte ADPREVLbits = 0x08E
#byte ADPREVL = 0x08E

typedef struct 
 {
   unsigned int ADPREV8:2;
   unsigned int ADPREV1:6;
} ADPREVHBITS;
ADPREVHBITS ADPREVHbits;
#byte ADPREVHbits = 0x08F
#byte ADPREVH = 0x08F

typedef struct 
 {
   unsigned int ADACC:8;
} ADACCLBITS;
ADACCLBITS ADACCLbits;
#byte ADACCLbits = 0x090
#byte ADACCL = 0x090

typedef struct 
 {
   unsigned int ADACC8:2;
   unsigned int ADACC1:6;
} ADACCHBITS;
ADACCHBITS ADACCHbits;
#byte ADACCHbits = 0x091
#byte ADACCH = 0x091

typedef struct 
 {
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
} ADCON0BITS;
ADCON0BITS ADCON0bits;
#byte ADCON0bits = 0x093
#byte ADCON0 = 0x093

typedef struct 
 {
   unsigned int ADDSEN:1;
   unsigned int :4;
   unsigned int ADGPOL:1;
   unsigned int ADIPEN:1;
   unsigned int ADPPOL:1;
} ADCON1BITS;
ADCON1BITS ADCON1bits;
#byte ADCON1bits = 0x094
#byte ADCON1 = 0x094

typedef struct 
 {
   unsigned int ADMD:3;
   unsigned int ADACLR:1;
   unsigned int ADCRS:3;
   unsigned int ADPSIS:1;
} ADCON2BITS;
ADCON2BITS ADCON2bits;
#byte ADCON2bits = 0x095
#byte ADCON2 = 0x095

typedef struct 
 {
   unsigned int ADTMD:3;
   unsigned int ADSOI:1;
   unsigned int ADCALC:3;
} ADCON3BITS;
ADCON3BITS ADCON3bits;
#byte ADCON3bits = 0x096
#byte ADCON3 = 0x096

typedef struct 
 {
   unsigned int ADSTAT:3;
   unsigned int ADMACT:1;
   unsigned int ADMATH:1;
   unsigned int ADLTHR:1;
   unsigned int ADUTHR:1;
   unsigned int ADAOV:1;
} ADSTATBITS;
ADSTATBITS ADSTATbits;
#byte ADSTATbits = 0x097
#byte ADSTAT = 0x097

#byte ADCLK = 0x098

#byte ADACT = 0x099

typedef struct 
 {
   unsigned int ADPREF:2;
   unsigned int :2;
   unsigned int ADNREF:1;
} ADREFBITS;
ADREFBITS ADREFbits;
#byte ADREFbits = 0x09A
#byte ADREF = 0x09A

#byte ADCAP = 0x09B

typedef struct 
 {
   unsigned int ADPRE:8;
} ADPREBITS;
ADPREBITS ADPREbits;
#byte ADPREbits = 0x09C
#byte ADPRE = 0x09C

typedef struct 
 {
   unsigned int ADACQ:8;
} ADACQBITS;
ADACQBITS ADACQbits;
#byte ADACQbits = 0x09D
#byte ADACQ = 0x09D

#byte ADPCH = 0x09E

typedef struct 
 {
   unsigned int ADCNT:8;
} ADCNTBITS;
ADCNTBITS ADCNTbits;
#byte ADCNTbits = 0x10C
#byte ADCNT = 0x10C

typedef struct 
 {
   unsigned int ADRPT:8;
} ADRPTBITS;
ADRPTBITS ADRPTbits;
#byte ADRPTbits = 0x10D
#byte ADRPT = 0x10D

typedef struct 
 {
   unsigned int ADLTH:8;
} ADLTHLBITS;
ADLTHLBITS ADLTHLbits;
#byte ADLTHLbits = 0x10E
#byte ADLTHL = 0x10E

typedef struct 
 {
   unsigned int ADLTH8:2;
   unsigned int ADLTH1:6;
} ADLTHHBITS;
ADLTHHBITS ADLTHHbits;
#byte ADLTHHbits = 0x10F
#byte ADLTHH = 0x10F

typedef struct 
 {
   unsigned int ADUTH:8;
} ADUTHLBITS;
ADUTHLBITS ADUTHLbits;
#byte ADUTHLbits = 0x110
#byte ADUTHL = 0x110

typedef struct 
 {
   unsigned int ADUTH8:2;
   unsigned int ADUTH1:6;
} ADUTHHBITS;
ADUTHHBITS ADUTHHbits;
#byte ADUTHHbits = 0x111
#byte ADUTHH = 0x111

typedef struct 
 {
   unsigned int ADSTPT:8;
} ADSTPTLBITS;
ADSTPTLBITS ADSTPTLbits;
#byte ADSTPTLbits = 0x112
#byte ADSTPTL = 0x112

typedef struct 
 {
   unsigned int ADSTPT8:2;
   unsigned int ADSTPT1:6;
} ADSTPTHBITS;
ADSTPTHBITS ADSTPTHbits;
#byte ADSTPTHbits = 0x113
#byte ADSTPTH = 0x113

typedef struct 
 {
   unsigned int ADFLTR:8;
} ADFLTRLBITS;
ADFLTRLBITS ADFLTRLbits;
#byte ADFLTRLbits = 0x114
#byte ADFLTRL = 0x114

typedef struct 
 {
   unsigned int ADFLTR8:2;
   unsigned int ADFLTR1:6;
} ADFLTRHBITS;
ADFLTRHBITS ADFLTRHbits;
#byte ADFLTRHbits = 0x115
#byte ADFLTRH = 0x115

typedef struct 
 {
   unsigned int ADERR:8;
} ADERRLBITS;
ADERRLBITS ADERRLbits;
#byte ADERRLbits = 0x116
#byte ADERRL = 0x116

typedef struct 
 {
   unsigned int ADERR8:2;
   unsigned int ADERR1:6;
} ADERRHBITS;
ADERRHBITS ADERRHbits;
#byte ADERRHbits = 0x117
#byte ADERRH = 0x117

#byte RC1REG = 0x119

#byte TX1REG = 0x11A

#word SP1BRG = 0x11B

typedef struct 
 {
   unsigned int RX9D:1;
   unsigned int OERR:1;
   unsigned int FERR:1;
   unsigned int ADDEN:1;
   unsigned int CREN:1;
   unsigned int SREN:1;
   unsigned int RX9:1;
   unsigned int SPEN:1;
} RC1STABITS;
RC1STABITS RC1STAbits;
#byte RC1STAbits = 0x11D
#byte RC1STA = 0x11D

typedef struct 
 {
   unsigned int TX9D:1;
   unsigned int TRMT:1;
   unsigned int BRGH:1;
   unsigned int SENDB:1;
   unsigned int SYNC:1;
   unsigned int TXEN:1;
   unsigned int TX9:1;
   unsigned int CSRC:1;
} TX1STABITS;
TX1STABITS TX1STAbits;
#byte TX1STAbits = 0x11E
#byte TX1STA = 0x11E

typedef struct 
 {
   unsigned int ABDEN:1;
   unsigned int WUE:1;
   unsigned int :1;
   unsigned int BRG16:1;
   unsigned int SCKP:1;
   unsigned int :1;
   unsigned int RCIDL:1;
   unsigned int ABDOVF:1;
} BAUD1CONBITS;
BAUD1CONBITS BAUD1CONbits;
#byte BAUD1CONbits = 0x11F
#byte BAUD1CON = 0x11F

#byte SSP1BUF = 0x18C


typedef struct 
 {
   unsigned int MSK:8;
} SSP1ADDBITS;
SSP1ADDBITS SSP1ADDbits;
#byte SSP1ADDbits = 0x18D
#byte SSP1ADD = 0x18D


typedef struct 
 {
   unsigned int MSK:8;
} SSP1MSKBITS;
SSP1MSKBITS SSP1MSKbits;
#byte SSP1MSKbits = 0x18E
#byte SSP1MSK = 0x18E

typedef struct 
 {
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
} SSP1STATBITS;
SSP1STATBITS SSP1STATbits;
#byte SSP1STATbits = 0x18F
#byte SSP1STAT = 0x18F

typedef struct 
 {
   unsigned int SSPM:4;
   unsigned int CKP:1;
   unsigned int SSPEN:1;
   unsigned int SSPOV:1;
   unsigned int WCOL:1;
} SSP1CON1BITS;
SSP1CON1BITS SSP1CON1bits;
#byte SSP1CON1bits = 0x190
#byte SSP1CON1 = 0x190

typedef struct 
 {
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
} SSP1CON2BITS;
SSP1CON2BITS SSP1CON2bits;
#byte SSP1CON2bits = 0x191
#byte SSP1CON2 = 0x191

typedef struct 
 {
   unsigned int DHEN:1;
   unsigned int AHEN:1;
   unsigned int SBCDE:1;
   unsigned int SDAHT:1;
   unsigned int BOEN:1;
   unsigned int SCIE:1;
   unsigned int PCIE:1;
   unsigned int ACKTIM:1;
} SSP1CON3BITS;
SSP1CON3BITS SSP1CON3bits;
#byte SSP1CON3bits = 0x192
#byte SSP1CON3 = 0x192

#byte SSP2BUF = 0x196


typedef struct 
 {
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
} SSP2ADDBITS;
SSP2ADDBITS SSP2ADDbits;
#byte SSP2ADDbits = 0x197
#byte SSP2ADD = 0x197


typedef struct 
 {
   unsigned int MSK:8;
} SSP2MSKBITS;
SSP2MSKBITS SSP2MSKbits;
#byte SSP2MSKbits = 0x198
#byte SSP2MSK = 0x198

typedef struct 
 {
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
} SSP2STATBITS;
SSP2STATBITS SSP2STATbits;
#byte SSP2STATbits = 0x199
#byte SSP2STAT = 0x199

typedef struct 
 {
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
} SSP2CON1BITS;
SSP2CON1BITS SSP2CON1bits;
#byte SSP2CON1bits = 0x19A
#byte SSP2CON1 = 0x19A

typedef struct 
 {
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
} SSP2CON2BITS;
SSP2CON2BITS SSP2CON2bits;
#byte SSP2CON2bits = 0x19B
#byte SSP2CON2 = 0x19B

typedef struct 
 {
   unsigned int DHEN:1;
   unsigned int AHEN:1;
   unsigned int SBCDE:1;
   unsigned int SDAHT:1;
   unsigned int BOEN:1;
   unsigned int SCIE:1;
   unsigned int PCIE:1;
   unsigned int ACKTIM:1;
} SSP2CON3BITS;
SSP2CON3BITS SSP2CON3bits;
#byte SSP2CON3bits = 0x19C
#byte SSP2CON3 = 0x19C

typedef struct 
 {
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
} TMR1LBITS;
TMR1LBITS TMR1Lbits;
#byte TMR1Lbits = 0x20C
#byte TMR1L = 0x20C

typedef struct 
 {
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
} TMR1HBITS;
TMR1HBITS TMR1Hbits;
#byte TMR1Hbits = 0x20D
#byte TMR1H = 0x20D

typedef struct 
 {
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
} T1CONBITS;
T1CONBITS T1CONbits;
#byte T1CONbits = 0x20E
#byte T1CON = 0x20E

typedef struct 
 {
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
} T1GCONBITS;
T1GCONBITS T1GCONbits;
#byte T1GCONbits = 0x20F
#byte T1GCON = 0x20F

#byte T1GATE = 0x210

#byte T1CLK = 0x211

typedef struct 
 {
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
} TMR3LBITS;
TMR3LBITS TMR3Lbits;
#byte TMR3Lbits = 0x212
#byte TMR3L = 0x212

typedef struct 
 {
   union {
      struct {
         unsigned int TMR3H:8;
      };

      struct {
         unsigned int TMR38:2;
         unsigned int TMR31:6;
      };
   };
} TMR3HBITS;
TMR3HBITS TMR3Hbits;
#byte TMR3Hbits = 0x213
#byte TMR3H = 0x213

typedef struct 
 {
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
} T3CONBITS;
T3CONBITS T3CONbits;
#byte T3CONbits = 0x214
#byte T3CON = 0x214

typedef struct 
 {
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
} T3GCONBITS;
T3GCONBITS T3GCONbits;
#byte T3GCONbits = 0x215
#byte T3GCON = 0x215

#byte T3GATE = 0x216

#byte T3CLK = 0x217

typedef struct 
 {
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
} TMR5LBITS;
TMR5LBITS TMR5Lbits;
#byte TMR5Lbits = 0x218
#byte TMR5L = 0x218

typedef struct 
 {
   union {
      struct {
         unsigned int TMR5H:8;
      };

      struct {
         unsigned int TMR58:2;
         unsigned int TMR51:6;
      };
   };
} TMR5HBITS;
TMR5HBITS TMR5Hbits;
#byte TMR5Hbits = 0x219
#byte TMR5H = 0x219

typedef struct 
 {
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
} T5CONBITS;
T5CONBITS T5CONbits;
#byte T5CONbits = 0x21A
#byte T5CON = 0x21A

typedef struct 
 {
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
} T5GCONBITS;
T5GCONBITS T5GCONbits;
#byte T5GCONbits = 0x21B
#byte T5GCON = 0x21B

#byte T5GATE = 0x21C

#byte T5CLK = 0x21D

typedef struct 
 {
   unsigned int C1TSEL:2;
   unsigned int C2TSEL:2;
   unsigned int C3TSEL:2;
   unsigned int C4TSEL:2;
} CCPTMRS0BITS;
CCPTMRS0BITS CCPTMRS0bits;
#byte CCPTMRS0bits = 0x21E
#byte CCPTMRS0 = 0x21E

typedef struct 
 {
   unsigned int C5TSEL:2;
   unsigned int P6TSEL:2;
   unsigned int P7TSEL:2;
} CCPTMRS1BITS;
CCPTMRS1BITS CCPTMRS1bits;
#byte CCPTMRS1bits = 0x21F
#byte CCPTMRS1 = 0x21F

#byte T2TMR = 0x28C

#byte T2PR = 0x28D

typedef struct 
 {
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
} T2CONBITS;
T2CONBITS T2CONbits;
#byte T2CONbits = 0x28E
#byte T2CON = 0x28E

typedef struct 
 {
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
} T2HLTBITS;
T2HLTBITS T2HLTbits;
#byte T2HLTbits = 0x28F
#byte T2HLT = 0x28F

#byte T2CLK = 0x290

#byte T2RST = 0x291

#byte T4TMR = 0x292

#byte T4PR = 0x293

typedef struct 
 {
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
} T4CONBITS;
T4CONBITS T4CONbits;
#byte T4CONbits = 0x294
#byte T4CON = 0x294

typedef struct 
 {
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
} T4HLTBITS;
T4HLTBITS T4HLTbits;
#byte T4HLTbits = 0x295
#byte T4HLT = 0x295

#byte T4CLK = 0x296

#byte T4RST = 0x297

#byte T6TMR = 0x298

#byte T6PR = 0x299

typedef struct 
 {
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
} T6CONBITS;
T6CONBITS T6CONbits;
#byte T6CONbits = 0x29A
#byte T6CON = 0x29A

typedef struct 
 {
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
} T6HLTBITS;
T6HLTBITS T6HLTbits;
#byte T6HLTbits = 0x29B
#byte T6HLT = 0x29B

#byte T6CLK = 0x29C

#byte T6RST = 0x29D

#word CCPR1 = 0x30C

typedef struct 
 {
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
} CCP1CONBITS;
CCP1CONBITS CCP1CONbits;
#byte CCP1CONbits = 0x30E
#byte CCP1CON = 0x30E


typedef struct 
 {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP1CTS:8;
      };
   };
} CCP1CAPBITS;
CCP1CAPBITS CCP1CAPbits;
#byte CCP1CAPbits = 0x30F
#byte CCP1CAP = 0x30F

#word CCPR2 = 0x310

typedef struct 
 {
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
} CCP2CONBITS;
CCP2CONBITS CCP2CONbits;
#byte CCP2CONbits = 0x312
#byte CCP2CON = 0x312


typedef struct 
 {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP2CTS:8;
      };
   };
} CCP2CAPBITS;
CCP2CAPBITS CCP2CAPbits;
#byte CCP2CAPbits = 0x313
#byte CCP2CAP = 0x313

#word CCPR3 = 0x314

typedef struct 
 {
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
} CCP3CONBITS;
CCP3CONBITS CCP3CONbits;
#byte CCP3CONbits = 0x316
#byte CCP3CON = 0x316


typedef struct 
 {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP3CTS:8;
      };
   };
} CCP3CAPBITS;
CCP3CAPBITS CCP3CAPbits;
#byte CCP3CAPbits = 0x317
#byte CCP3CAP = 0x317

#word CCPR4 = 0x318

typedef struct 
 {
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
} CCP4CONBITS;
CCP4CONBITS CCP4CONbits;
#byte CCP4CONbits = 0x31A
#byte CCP4CON = 0x31A


typedef struct 
 {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP4CTS:8;
      };
   };
} CCP4CAPBITS;
CCP4CAPBITS CCP4CAPbits;
#byte CCP4CAPbits = 0x31B
#byte CCP4CAP = 0x31B

#word CCPR5 = 0x31C

typedef struct 
 {
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
} CCP5CONBITS;
CCP5CONBITS CCP5CONbits;
#byte CCP5CONbits = 0x31E
#byte CCP5CON = 0x31E

typedef struct 
 {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP5CTS:8;
      };
   };
} CCP5CAPBITS;
CCP5CAPBITS CCP5CAPbits;
#byte CCP5CAPbits = 0x31F
#byte CCP5CAP = 0x31F

typedef struct 
 {
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
} PWM6DCLBITS;
PWM6DCLBITS PWM6DCLbits;
#byte PWM6DCLbits = 0x38C
#byte PWM6DCL = 0x38C

typedef struct 
 {
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
} PWM6DCHBITS;
PWM6DCHBITS PWM6DCHbits;
#byte PWM6DCHbits = 0x38D
#byte PWM6DCH = 0x38D

typedef struct 
 {
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
} PWM6CONBITS;
PWM6CONBITS PWM6CONbits;
#byte PWM6CONbits = 0x38E
#byte PWM6CON = 0x38E

typedef struct 
 {
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
} PWM7DCLBITS;
PWM7DCLBITS PWM7DCLbits;
#byte PWM7DCLbits = 0x390
#byte PWM7DCL = 0x390

typedef struct 
 {
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
} PWM7DCHBITS;
PWM7DCHBITS PWM7DCHbits;
#byte PWM7DCHbits = 0x391
#byte PWM7DCH = 0x391

typedef struct 
 {
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
} PWM7CONBITS;
PWM7CONBITS PWM7CONbits;
#byte PWM7CONbits = 0x392
#byte PWM7CON = 0x392


typedef struct 
 {
   union {
      struct {
         unsigned int LADR:8;
      };

      struct {
         unsigned int SCANLADR:8;
      };
   };
} SCANLADRLBITS;
SCANLADRLBITS SCANLADRLbits;
#byte SCANLADRLbits = 0x40C
#byte SCANLADRL = 0x40C


typedef struct 
 {
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
} SCANLADRHBITS;
SCANLADRHBITS SCANLADRHbits;
#byte SCANLADRHbits = 0x40D
#byte SCANLADRH = 0x40D


typedef struct 
 {
   union {
      struct {
         unsigned int HADR:8;
      };

      struct {
         unsigned int SCANHADR:8;
      };
   };
} SCANHADRLBITS;
SCANHADRLBITS SCANHADRLbits;
#byte SCANHADRLbits = 0x40E
#byte SCANHADRL = 0x40E


typedef struct 
 {
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
} SCANHADRHBITS;
SCANHADRHBITS SCANHADRHbits;
#byte SCANHADRHbits = 0x40F
#byte SCANHADRH = 0x40F

typedef struct 
 {
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
} SCANCON0BITS;
SCANCON0BITS SCANCON0bits;
#byte SCANCON0bits = 0x410
#byte SCANCON0 = 0x410

#byte SCANTRIG = 0x411

typedef struct 
 {
   unsigned int DATA:8;
} CRCDATLBITS;
CRCDATLBITS CRCDATLbits;
#byte CRCDATLbits = 0x416
#byte CRCDATL = 0x416

typedef struct 
 {
   unsigned int DATA8:2;
   unsigned int DATA1:6;
} CRCDATHBITS;
CRCDATHBITS CRCDATHbits;
#byte CRCDATHbits = 0x417
#byte CRCDATH = 0x417

typedef struct 
 {
   unsigned int ACC:8;
} CRCACCLBITS;
CRCACCLBITS CRCACCLbits;
#byte CRCACCLbits = 0x418
#byte CRCACCL = 0x418

typedef struct 
 {
   unsigned int ACC8:2;
   unsigned int ACC1:6;
} CRCACCHBITS;
CRCACCHBITS CRCACCHbits;
#byte CRCACCHbits = 0x419
#byte CRCACCH = 0x419

typedef struct 
 {
   unsigned int SHFT:8;
} CRCSHIFTLBITS;
CRCSHIFTLBITS CRCSHIFTLbits;
#byte CRCSHIFTLbits = 0x41A
#byte CRCSHIFTL = 0x41A

typedef struct 
 {
   unsigned int SHFT8:2;
   unsigned int SHFT1:6;
} CRCSHIFTHBITS;
CRCSHIFTHBITS CRCSHIFTHbits;
#byte CRCSHIFTHbits = 0x41B
#byte CRCSHIFTH = 0x41B

typedef struct 
 {
   unsigned int :1;
   unsigned int X1:7;
} CRCXORLBITS;
CRCXORLBITS CRCXORLbits;
#byte CRCXORLbits = 0x41C
#byte CRCXORL = 0x41C

typedef struct 
 {
   unsigned int X8:2;
   unsigned int X1:6;
} CRCXORHBITS;
CRCXORHBITS CRCXORHbits;
#byte CRCXORHbits = 0x41D
#byte CRCXORH = 0x41D

typedef struct 
 {
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
} CRCCON0BITS;
CRCCON0BITS CRCCON0bits;
#byte CRCCON0bits = 0x41E
#byte CRCCON0 = 0x41E

typedef struct 
 {
   unsigned int PLEN:4;
   unsigned int DLEN:4;
} CRCCON1BITS;
CRCCON1BITS CRCCON1bits;
#byte CRCCON1bits = 0x41F
#byte CRCCON1 = 0x41F

typedef struct 
 {
   union {
      struct {
         unsigned int TMR:8;
      };

      struct {
         unsigned int SMT1TMR:8;
      };
   };
} SMT1TMRLBITS;
SMT1TMRLBITS SMT1TMRLbits;
#byte SMT1TMRLbits = 0x48C
#byte SMT1TMRL = 0x48C

typedef struct 
 {
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
} SMT1TMRHBITS;
SMT1TMRHBITS SMT1TMRHbits;
#byte SMT1TMRHbits = 0x48D
#byte SMT1TMRH = 0x48D

typedef struct 
 {
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
} SMT1TMRUBITS;
SMT1TMRUBITS SMT1TMRUbits;
#byte SMT1TMRUbits = 0x48E
#byte SMT1TMRU = 0x48E

typedef struct 
 {
   union {
      struct {
         unsigned int CPR:8;
      };

      struct {
         unsigned int SMT1CPR:8;
      };
   };
} SMT1CPRLBITS;
SMT1CPRLBITS SMT1CPRLbits;
#byte SMT1CPRLbits = 0x48F
#byte SMT1CPRL = 0x48F

typedef struct 
 {
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
} SMT1CPRHBITS;
SMT1CPRHBITS SMT1CPRHbits;
#byte SMT1CPRHbits = 0x490
#byte SMT1CPRH = 0x490

typedef struct 
 {
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
} SMT1CPRUBITS;
SMT1CPRUBITS SMT1CPRUbits;
#byte SMT1CPRUbits = 0x491
#byte SMT1CPRU = 0x491

typedef struct 
 {
   union {
      struct {
         unsigned int CPW:8;
      };

      struct {
         unsigned int SMT1CPW:8;
      };
   };
} SMT1CPWLBITS;
SMT1CPWLBITS SMT1CPWLbits;
#byte SMT1CPWLbits = 0x492
#byte SMT1CPWL = 0x492

typedef struct 
 {
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
} SMT1CPWHBITS;
SMT1CPWHBITS SMT1CPWHbits;
#byte SMT1CPWHbits = 0x493
#byte SMT1CPWH = 0x493

typedef struct 
 {
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
} SMT1CPWUBITS;
SMT1CPWUBITS SMT1CPWUbits;
#byte SMT1CPWUbits = 0x494
#byte SMT1CPWU = 0x494

typedef struct 
 {
   union {
      struct {
         unsigned int PR:8;
      };

      struct {
         unsigned int SMT1PR:8;
      };
   };
} SMT1PRLBITS;
SMT1PRLBITS SMT1PRLbits;
#byte SMT1PRLbits = 0x495
#byte SMT1PRL = 0x495

typedef struct 
 {
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
} SMT1PRHBITS;
SMT1PRHBITS SMT1PRHbits;
#byte SMT1PRHbits = 0x496
#byte SMT1PRH = 0x496

typedef struct 
 {
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
} SMT1PRUBITS;
SMT1PRUBITS SMT1PRUbits;
#byte SMT1PRUbits = 0x497
#byte SMT1PRU = 0x497

typedef struct 
 {
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
} SMT1CON0BITS;
SMT1CON0BITS SMT1CON0bits;
#byte SMT1CON0bits = 0x498
#byte SMT1CON0 = 0x498

typedef struct 
 {
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
} SMT1CON1BITS;
SMT1CON1BITS SMT1CON1bits;
#byte SMT1CON1bits = 0x499
#byte SMT1CON1 = 0x499

typedef struct 
 {
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
} SMT1STATBITS;
SMT1STATBITS SMT1STATbits;
#byte SMT1STATbits = 0x49A
#byte SMT1STAT = 0x49A

#byte SMT1CLK = 0x49B

#byte SMT1SIG = 0x49C

#byte SMT1WIN = 0x49D

typedef struct 
 {
   union {
      struct {
         unsigned int TMR:8;
      };

      struct {
         unsigned int SMT2TMR:8;
      };
   };
} SMT2TMRLBITS;
SMT2TMRLBITS SMT2TMRLbits;
#byte SMT2TMRLbits = 0x50C
#byte SMT2TMRL = 0x50C

typedef struct 
 {
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
} SMT2TMRHBITS;
SMT2TMRHBITS SMT2TMRHbits;
#byte SMT2TMRHbits = 0x50D
#byte SMT2TMRH = 0x50D

typedef struct 
 {
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
} SMT2TMRUBITS;
SMT2TMRUBITS SMT2TMRUbits;
#byte SMT2TMRUbits = 0x50E
#byte SMT2TMRU = 0x50E

typedef struct 
 {
   union {
      struct {
         unsigned int CPR:8;
      };

      struct {
         unsigned int SMT2CPR:8;
      };
   };
} SMT2CPRLBITS;
SMT2CPRLBITS SMT2CPRLbits;
#byte SMT2CPRLbits = 0x50F
#byte SMT2CPRL = 0x50F

typedef struct 
 {
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
} SMT2CPRHBITS;
SMT2CPRHBITS SMT2CPRHbits;
#byte SMT2CPRHbits = 0x510
#byte SMT2CPRH = 0x510

typedef struct 
 {
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
} SMT2CPRUBITS;
SMT2CPRUBITS SMT2CPRUbits;
#byte SMT2CPRUbits = 0x511
#byte SMT2CPRU = 0x511

typedef struct 
 {
   union {
      struct {
         unsigned int CPW:8;
      };

      struct {
         unsigned int SMT2CPW:8;
      };
   };
} SMT2CPWLBITS;
SMT2CPWLBITS SMT2CPWLbits;
#byte SMT2CPWLbits = 0x512
#byte SMT2CPWL = 0x512

typedef struct 
 {
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
} SMT2CPWHBITS;
SMT2CPWHBITS SMT2CPWHbits;
#byte SMT2CPWHbits = 0x513
#byte SMT2CPWH = 0x513

typedef struct 
 {
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
} SMT2CPWUBITS;
SMT2CPWUBITS SMT2CPWUbits;
#byte SMT2CPWUbits = 0x514
#byte SMT2CPWU = 0x514

typedef struct 
 {
   union {
      struct {
         unsigned int PR:8;
      };

      struct {
         unsigned int SMT2PR:8;
      };
   };
} SMT2PRLBITS;
SMT2PRLBITS SMT2PRLbits;
#byte SMT2PRLbits = 0x515
#byte SMT2PRL = 0x515

typedef struct 
 {
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
} SMT2PRHBITS;
SMT2PRHBITS SMT2PRHbits;
#byte SMT2PRHbits = 0x516
#byte SMT2PRH = 0x516

typedef struct 
 {
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
} SMT2PRUBITS;
SMT2PRUBITS SMT2PRUbits;
#byte SMT2PRUbits = 0x517
#byte SMT2PRU = 0x517

typedef struct 
 {
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
} SMT2CON0BITS;
SMT2CON0BITS SMT2CON0bits;
#byte SMT2CON0bits = 0x518
#byte SMT2CON0 = 0x518

typedef struct 
 {
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
} SMT2CON1BITS;
SMT2CON1BITS SMT2CON1bits;
#byte SMT2CON1bits = 0x519
#byte SMT2CON1 = 0x519

typedef struct 
 {
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
} SMT2STATBITS;
SMT2STATBITS SMT2STATbits;
#byte SMT2STATbits = 0x51A
#byte SMT2STAT = 0x51A

#byte SMT2CLK = 0x51B

#byte SMT2SIG = 0x51C

#byte SMT2WIN = 0x51D

typedef struct 
 {
   unsigned int NCO1ACC:8;
} NCO1ACCLBITS;
NCO1ACCLBITS NCO1ACCLbits;
#byte NCO1ACCLbits = 0x58C
#byte NCO1ACCL = 0x58C

typedef struct 
 {
   unsigned int NCO1ACC8:2;
   unsigned int NCO1ACC1:6;
} NCO1ACCHBITS;
NCO1ACCHBITS NCO1ACCHbits;
#byte NCO1ACCHbits = 0x58D
#byte NCO1ACCH = 0x58D

typedef struct 
 {
   unsigned int NCO1ACC16:4;
   unsigned int NCO1ACC2:4;
} NCO1ACCUBITS;
NCO1ACCUBITS NCO1ACCUbits;
#byte NCO1ACCUbits = 0x58E
#byte NCO1ACCU = 0x58E

typedef struct 
 {
   unsigned int NCO1INC:8;
} NCO1INCLBITS;
NCO1INCLBITS NCO1INCLbits;
#byte NCO1INCLbits = 0x58F
#byte NCO1INCL = 0x58F

typedef struct 
 {
   unsigned int NCO1INC8:2;
   unsigned int NCO1INC1:6;
} NCO1INCHBITS;
NCO1INCHBITS NCO1INCHbits;
#byte NCO1INCHbits = 0x590
#byte NCO1INCH = 0x590

typedef struct 
 {
   unsigned int NCO1INC16:4;
   unsigned int NCO1INC2:4;
} NCO1INCUBITS;
NCO1INCUBITS NCO1INCUbits;
#byte NCO1INCUbits = 0x591
#byte NCO1INCU = 0x591

typedef struct 
 {
   unsigned int N1PFM:1;
   unsigned int :3;
   unsigned int N1POL:1;
   unsigned int N1OUT:1;
   unsigned int N1OE:1;
   unsigned int N1EN:1;
} NCO1CONBITS;
NCO1CONBITS NCO1CONbits;
#byte NCO1CONbits = 0x592
#byte NCO1CON = 0x592

typedef struct 
 {
   unsigned int N1CKS:4;
   unsigned int :1;
   unsigned int N1PWS:3;
} NCO1CLKBITS;
NCO1CLKBITS NCO1CLKbits;
#byte NCO1CLKbits = 0x593
#byte NCO1CLK = 0x593

typedef struct 
 {
   union {
      struct {
         unsigned int CS:1;
      };

      struct {
         unsigned int CWG1CS:1;
      };
   };
} CWG1CLKCONBITS;
CWG1CLKCONBITS CWG1CLKCONbits;
#byte CWG1CLKCONbits = 0x60C
#byte CWG1CLKCON = 0x60C

#byte CWG1ISM = 0x60D

#byte CWG1DBR = 0x60E

#byte CWG1DBF = 0x60F

typedef struct 
 {
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
} CWG1CON0BITS;
CWG1CON0BITS CWG1CON0bits;
#byte CWG1CON0bits = 0x610
#byte CWG1CON0 = 0x610

typedef struct 
 {
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
} CWG1CON1BITS;
CWG1CON1BITS CWG1CON1bits;
#byte CWG1CON1bits = 0x611
#byte CWG1CON1 = 0x611

typedef struct 
 {
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
} CWG1AS0BITS;
CWG1AS0BITS CWG1AS0bits;
#byte CWG1AS0bits = 0x612
#byte CWG1AS0 = 0x612

typedef struct 
 {
   unsigned int AS0E:1;
   unsigned int AS1E:1;
   unsigned int AS2E:1;
   unsigned int AS3E:1;
   unsigned int AS4E:1;
   unsigned int AS5E:1;
   unsigned int AS6E:1;
} CWG1AS1BITS;
CWG1AS1BITS CWG1AS1bits;
#byte CWG1AS1bits = 0x613
#byte CWG1AS1 = 0x613

typedef struct 
 {
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
} CWG1STRBITS;
CWG1STRBITS CWG1STRbits;
#byte CWG1STRbits = 0x614
#byte CWG1STR = 0x614

typedef struct 
 {
   union {
      struct {
         unsigned int CS:1;
      };

      struct {
         unsigned int CWG2CS:1;
      };
   };
} CWG2CLKCONBITS;
CWG2CLKCONBITS CWG2CLKCONbits;
#byte CWG2CLKCONbits = 0x616
#byte CWG2CLKCON = 0x616

#byte CWG2ISM = 0x617

#byte CWG2DBR = 0x618

#byte CWG2DBF = 0x619

typedef struct 
 {
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
} CWG2CON0BITS;
CWG2CON0BITS CWG2CON0bits;
#byte CWG2CON0bits = 0x61A
#byte CWG2CON0 = 0x61A

typedef struct 
 {
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
} CWG2CON1BITS;
CWG2CON1BITS CWG2CON1bits;
#byte CWG2CON1bits = 0x61B
#byte CWG2CON1 = 0x61B

typedef struct 
 {
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
} CWG2AS0BITS;
CWG2AS0BITS CWG2AS0bits;
#byte CWG2AS0bits = 0x61C
#byte CWG2AS0 = 0x61C

typedef struct 
 {
   unsigned int AS0E:1;
   unsigned int AS1E:1;
   unsigned int AS2E:1;
   unsigned int AS3E:1;
   unsigned int AS4E:1;
   unsigned int AS5E:1;
   unsigned int AS6E:1;
} CWG2AS1BITS;
CWG2AS1BITS CWG2AS1bits;
#byte CWG2AS1bits = 0x61D
#byte CWG2AS1 = 0x61D

typedef struct 
 {
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
} CWG2STRBITS;
CWG2STRBITS CWG2STRbits;
#byte CWG2STRbits = 0x61E
#byte CWG2STR = 0x61E

typedef struct 
 {
   union {
      struct {
         unsigned int CS:1;
      };

      struct {
         unsigned int CWG3CS:1;
      };
   };
} CWG3CLKCONBITS;
CWG3CLKCONBITS CWG3CLKCONbits;
#byte CWG3CLKCONbits = 0x68C
#byte CWG3CLKCON = 0x68C

#byte CWG3ISM = 0x68D

#byte CWG3DBR = 0x68E

#byte CWG3DBF = 0x68F

typedef struct 
 {
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
} CWG3CON0BITS;
CWG3CON0BITS CWG3CON0bits;
#byte CWG3CON0bits = 0x690
#byte CWG3CON0 = 0x690

typedef struct 
 {
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
} CWG3CON1BITS;
CWG3CON1BITS CWG3CON1bits;
#byte CWG3CON1bits = 0x691
#byte CWG3CON1 = 0x691

typedef struct 
 {
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
} CWG3AS0BITS;
CWG3AS0BITS CWG3AS0bits;
#byte CWG3AS0bits = 0x692
#byte CWG3AS0 = 0x692

typedef struct 
 {
   unsigned int AS0E:1;
   unsigned int AS1E:1;
   unsigned int AS2E:1;
   unsigned int AS3E:1;
   unsigned int AS4E:1;
   unsigned int AS5E:1;
   unsigned int AS6E:1;
} CWG3AS1BITS;
CWG3AS1BITS CWG3AS1bits;
#byte CWG3AS1bits = 0x693
#byte CWG3AS1 = 0x693

typedef struct 
 {
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
} CWG3STRBITS;
CWG3STRBITS CWG3STRbits;
#byte CWG3STRbits = 0x694
#byte CWG3STR = 0x694

typedef struct 
 {
   unsigned int INTF:1;
   unsigned int :3;
   unsigned int IOCIF:1;
   unsigned int TMR0IF:1;
} PIR0BITS;
PIR0BITS PIR0bits;
#byte PIR0bits = 0x70C
#byte PIR0 = 0x70C

typedef struct 
 {
   unsigned int ADIF:1;
   unsigned int ADTIF:1;
   unsigned int :4;
   unsigned int CSWIF:1;
   unsigned int OSFIF:1;
} PIR1BITS;
PIR1BITS PIR1bits;
#byte PIR1bits = 0x70D
#byte PIR1 = 0x70D

typedef struct 
 {
   unsigned int C1IF:1;
   unsigned int C2IF:1;
   unsigned int :4;
   unsigned int ZCDIF:1;
} PIR2BITS;
PIR2BITS PIR2bits;
#byte PIR2bits = 0x70E
#byte PIR2 = 0x70E

typedef struct 
 {
   unsigned int SSP1IF:1;
   unsigned int BCL1IF:1;
   unsigned int SSP2IF:1;
   unsigned int BCL2IF:1;
   unsigned int TXIF:1;
   unsigned int RCIF:1;
} PIR3BITS;
PIR3BITS PIR3bits;
#byte PIR3bits = 0x70F
#byte PIR3 = 0x70F

typedef struct 
 {
   unsigned int TMR1IF:1;
   unsigned int TMR2IF:1;
   unsigned int TMR3IF:1;
   unsigned int TMR4IF:1;
   unsigned int TMR5IF:1;
   unsigned int TMR6IF:1;
} PIR4BITS;
PIR4BITS PIR4bits;
#byte PIR4bits = 0x710
#byte PIR4 = 0x710

typedef struct 
 {
   unsigned int TMR1GIF:1;
   unsigned int TMR3GIF:1;
   unsigned int TMR5GIF:1;
   unsigned int :1;
   unsigned int CLC1IF:1;
   unsigned int CLC2IF:1;
   unsigned int CLC3IF:1;
   unsigned int CLC4IF:1;
} PIR5BITS;
PIR5BITS PIR5bits;
#byte PIR5bits = 0x711
#byte PIR5 = 0x711

typedef struct 
 {
   unsigned int CCP1IF:1;
   unsigned int CCP2IF:1;
   unsigned int CCP3IF:1;
   unsigned int CCP4IF:1;
   unsigned int CCP5IF:1;
} PIR6BITS;
PIR6BITS PIR6bits;
#byte PIR6bits = 0x712
#byte PIR6 = 0x712

typedef struct 
 {
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
} PIR7BITS;
PIR7BITS PIR7bits;
#byte PIR7bits = 0x713
#byte PIR7 = 0x713

typedef struct 
 {
   unsigned int SMT1IF:1;
   unsigned int SMT1PRAIF:1;
   unsigned int SMT1PWAIF:1;
   unsigned int SMT2IF:1;
   unsigned int SMT2PRAIF:1;
   unsigned int SMT2PWAIF:1;
} PIR8BITS;
PIR8BITS PIR8bits;
#byte PIR8bits = 0x714
#byte PIR8 = 0x714

typedef struct 
 {
   unsigned int INTE:1;
   unsigned int :3;
   unsigned int IOCIE:1;
   unsigned int TMR0IE:1;
} PIE0BITS;
PIE0BITS PIE0bits;
#byte PIE0bits = 0x716
#byte PIE0 = 0x716

typedef struct 
 {
   unsigned int ADIE:1;
   unsigned int ADTIE:1;
   unsigned int :4;
   unsigned int CSWIE:1;
   unsigned int OSFIE:1;
} PIE1BITS;
PIE1BITS PIE1bits;
#byte PIE1bits = 0x717
#byte PIE1 = 0x717

typedef struct 
 {
   unsigned int C1IE:1;
   unsigned int C2IE:1;
   unsigned int :4;
   unsigned int ZCDIE:1;
} PIE2BITS;
PIE2BITS PIE2bits;
#byte PIE2bits = 0x718
#byte PIE2 = 0x718

typedef struct 
 {
   unsigned int SSP1IE:1;
   unsigned int BCL1IE:1;
   unsigned int SSP2IE:1;
   unsigned int BCL2IE:1;
   unsigned int TXIE:1;
   unsigned int RCIE:1;
} PIE3BITS;
PIE3BITS PIE3bits;
#byte PIE3bits = 0x719
#byte PIE3 = 0x719

typedef struct 
 {
   unsigned int TMR1IE:1;
   unsigned int TMR2IE:1;
   unsigned int TMR3IE:1;
   unsigned int TMR4IE:1;
   unsigned int TMR5IE:1;
   unsigned int TMR6IE:1;
} PIE4BITS;
PIE4BITS PIE4bits;
#byte PIE4bits = 0x71A
#byte PIE4 = 0x71A

typedef struct 
 {
   unsigned int TMR1GIE:1;
   unsigned int TMR3GIE:1;
   unsigned int TMR5GIE:1;
   unsigned int :1;
   unsigned int CLC1IE:1;
   unsigned int CLC2IE:1;
   unsigned int CLC3IE:1;
   unsigned int CLC4IE:1;
} PIE5BITS;
PIE5BITS PIE5bits;
#byte PIE5bits = 0x71B
#byte PIE5 = 0x71B

typedef struct 
 {
   unsigned int CCP1IE:1;
   unsigned int CCP2IE:1;
   unsigned int CCP3IE:1;
   unsigned int CCP4IE:1;
   unsigned int CCP5IE:1;
} PIE6BITS;
PIE6BITS PIE6bits;
#byte PIE6bits = 0x71C
#byte PIE6 = 0x71C

typedef struct 
 {
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
} PIE7BITS;
PIE7BITS PIE7bits;
#byte PIE7bits = 0x71D
#byte PIE7 = 0x71D

typedef struct 
 {
   unsigned int SMT1IE:1;
   unsigned int SMT1PRAIE:1;
   unsigned int SMT1PWAIE:1;
   unsigned int SMT2IE:1;
   unsigned int SMT2PRAIE:1;
   unsigned int SMT2PWAIE:1;
} PIE8BITS;
PIE8BITS PIE8bits;
#byte PIE8bits = 0x71E
#byte PIE8 = 0x71E

typedef struct 
 {
   unsigned int IOCMD:1;
   unsigned int CLKRMD:1;
   unsigned int NVMMD:1;
   unsigned int SCANMD:1;
   unsigned int CRCMD:1;
   unsigned int :1;
   unsigned int FVRMD:1;
   unsigned int SYSCMD:1;
} PMD0BITS;
PMD0BITS PMD0bits;
#byte PMD0bits = 0x796
#byte PMD0 = 0x796

typedef struct 
 {
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
} PMD1BITS;
PMD1BITS PMD1bits;
#byte PMD1bits = 0x797
#byte PMD1 = 0x797

typedef struct 
 {
   unsigned int ZCDMD:1;
   unsigned int CMP1MD:1;
   unsigned int CMP2MD:1;
   unsigned int :2;
   unsigned int ADCMD:1;
   unsigned int DACMD:1;
} PMD2BITS;
PMD2BITS PMD2bits;
#byte PMD2bits = 0x798
#byte PMD2 = 0x798

typedef struct 
 {
   unsigned int CCP1MD:1;
   unsigned int CCP2MD:1;
   unsigned int CCP3MD:1;
   unsigned int CCP4MD:1;
   unsigned int CCP5MD:1;
   unsigned int PWM6MD:1;
   unsigned int PWM7MD:1;
} PMD3BITS;
PMD3BITS PMD3bits;
#byte PMD3bits = 0x799
#byte PMD3 = 0x799

typedef struct 
 {
   unsigned int CWG1MD:1;
   unsigned int CWG2MD:1;
   unsigned int CWG3MD:1;
   unsigned int :1;
   unsigned int MSSP1MD:1;
   unsigned int MSSP2MD:1;
   unsigned int UART1MD:1;
} PMD4BITS;
PMD4BITS PMD4bits;
#byte PMD4bits = 0x79A
#byte PMD4 = 0x79A

typedef struct 
 {
   unsigned int DSMMD:1;
   unsigned int CLC1MD:1;
   unsigned int CLC2MD:1;
   unsigned int CLC3MD:1;
   unsigned int CLC4MD:1;
   unsigned int :1;
   unsigned int SMT1MD:1;
   unsigned int SMT2MD:1;
} PMD5BITS;
PMD5BITS PMD5bits;
#byte PMD5bits = 0x79B
#byte PMD5 = 0x79B

typedef struct 
 {
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
} WDTCON0BITS;
WDTCON0BITS WDTCON0bits;
#byte WDTCON0bits = 0x80C
#byte WDTCON0 = 0x80C

typedef struct 
 {
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
} WDTCON1BITS;
WDTCON1BITS WDTCON1bits;
#byte WDTCON1bits = 0x80D
#byte WDTCON1 = 0x80D

typedef struct 
 {
   union {
      struct {
         unsigned int PSCNT:8;
      };

      struct {
         unsigned int WDTPSCNT:8;
      };
   };
} WDTPSLBITS;
WDTPSLBITS WDTPSLbits;
#byte WDTPSLbits = 0x80E
#byte WDTPSL = 0x80E

typedef struct 
 {
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
} WDTPSHBITS;
WDTPSHBITS WDTPSHbits;
#byte WDTPSHbits = 0x80F
#byte WDTPSH = 0x80F

typedef struct 
 {
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
} WDTTMRBITS;
WDTTMRBITS WDTTMRbits;
#byte WDTTMRbits = 0x810
#byte WDTTMR = 0x810

typedef struct 
 {
   unsigned int BORRDY:1;
   unsigned int :6;
   unsigned int SBOREN:1;
} BORCONBITS;
BORCONBITS BORCONbits;
#byte BORCONbits = 0x811
#byte BORCON = 0x811


typedef struct 
 {
   unsigned int :1;
   unsigned int VREGPM:1;
} VREGCONBITS;
VREGCONBITS VREGCONbits;
#byte VREGCONbits = 0x812
#byte VREGCON = 0x812

typedef struct 
 {
   unsigned int BOR:1;
   unsigned int POR:1;
   unsigned int RI:1;
   unsigned int RMCLR:1;
   unsigned int RWDT:1;
   unsigned int WDTWV:1;
   unsigned int STKUNF:1;
   unsigned int STKOVF:1;
} PCON0BITS;
PCON0BITS PCON0bits;
#byte PCON0bits = 0x813
#byte PCON0 = 0x813

typedef struct 
 {
   unsigned int CCDS:2;
   unsigned int :5;
   unsigned int CCDEN:1;
} CCDCONBITS;
CCDCONBITS CCDCONbits;
#byte CCDCONbits = 0x814
#byte CCDCON = 0x814

typedef struct 
 {
   unsigned int NVMADR:8;
} NVMADRLBITS;
NVMADRLBITS NVMADRLbits;
#byte NVMADRLbits = 0x81A
#byte NVMADRL = 0x81A

typedef struct 
 {
   unsigned int NVMADR8:2;
   unsigned int NVMADR1:5;
} NVMADRHBITS;
NVMADRHBITS NVMADRHbits;
#byte NVMADRHbits = 0x81B
#byte NVMADRH = 0x81B

typedef struct 
 {
   unsigned int NVMDAT:8;
} NVMDATLBITS;
NVMDATLBITS NVMDATLbits;
#byte NVMDATLbits = 0x81C
#byte NVMDATL = 0x81C

typedef struct 
 {
   unsigned int NVMDAT8:2;
   unsigned int NVMDAT1:4;
} NVMDATHBITS;
NVMDATHBITS NVMDATHbits;
#byte NVMDATHbits = 0x81D
#byte NVMDATH = 0x81D

typedef struct 
 {
   unsigned int RD:1;
   unsigned int WR:1;
   unsigned int WREN:1;
   unsigned int WRERR:1;
   unsigned int FREE:1;
   unsigned int LWLO:1;
   unsigned int NVMREGS:1;
} NVMCON1BITS;
NVMCON1BITS NVMCON1bits;
#byte NVMCON1bits = 0x81E
#byte NVMCON1 = 0x81E

#byte NVMCON2 = 0x81F

typedef struct 
 {
   unsigned int DOZE:3;
   unsigned int :1;
   unsigned int DOE:1;
   unsigned int ROI:1;
   unsigned int DOZEN:1;
   unsigned int IDLEN:1;
} CPUDOZEBITS;
CPUDOZEBITS CPUDOZEbits;
#byte CPUDOZEbits = 0x88C
#byte CPUDOZE = 0x88C

typedef struct 
 {
   unsigned int NDIV:4;
   unsigned int NOSC:3;
} OSCCON1BITS;
OSCCON1BITS OSCCON1bits;
#byte OSCCON1bits = 0x88D
#byte OSCCON1 = 0x88D

typedef struct 
 {
   unsigned int CDIV:4;
   unsigned int COSC:3;
} OSCCON2BITS;
OSCCON2BITS OSCCON2bits;
#byte OSCCON2bits = 0x88E
#byte OSCCON2 = 0x88E

typedef struct 
 {
   unsigned int :3;
   unsigned int NOSCR:1;
   unsigned int ORDY:1;
   unsigned int :1;
   unsigned int SOSCPWR:1;
   unsigned int CSWHOLD:1;
} OSCCON3BITS;
OSCCON3BITS OSCCON3bits;
#byte OSCCON3bits = 0x88F
#byte OSCCON3 = 0x88F

typedef struct 
 {
   unsigned int PLLR:1;
   unsigned int :1;
   unsigned int ADOR:1;
   unsigned int SOR:1;
   unsigned int LFOR:1;
   unsigned int MFOR:1;
   unsigned int HFOR:1;
   unsigned int EXTOR:1;
} OSCSTATBITS;
OSCSTATBITS OSCSTATbits;
#byte OSCSTATbits = 0x890
#byte OSCSTAT = 0x890

typedef struct 
 {
   unsigned int :2;
   unsigned int ADOEN:1;
   unsigned int SOSCEN:1;
   unsigned int LFOEN:1;
   unsigned int MFOEN:1;
   unsigned int HFOEN:1;
   unsigned int EXTOEN:1;
} OSCENBITS;
OSCENBITS OSCENbits;
#byte OSCENbits = 0x891
#byte OSCEN = 0x891

#byte OSCTUNE = 0x892

#byte OSCFRQ = 0x893

typedef struct 
 {
   unsigned int CLKRDIV:3;
   unsigned int CLKRDC:2;
   unsigned int :2;
   unsigned int CLKREN:1;
} CLKRCONBITS;
CLKRCONBITS CLKRCONbits;
#byte CLKRCONbits = 0x895
#byte CLKRCON = 0x895

#byte CLKRCLK = 0x896

typedef struct 
 {
   unsigned int MDBIT:1;
   unsigned int :3;
   unsigned int MDOPOL:1;
   unsigned int MDOUT:1;
   unsigned int :1;
   unsigned int MDEN:1;
} MDCON0BITS;
MDCON0BITS MDCON0bits;
#byte MDCON0bits = 0x897
#byte MDCON0 = 0x897

typedef struct 
 {
   unsigned int MDCLSYNC:1;
   unsigned int MDCLPOL:1;
   unsigned int :2;
   unsigned int MDCHSYNC:1;
   unsigned int MDCHPOL:1;
} MDCON1BITS;
MDCON1BITS MDCON1bits;
#byte MDCON1bits = 0x898
#byte MDCON1 = 0x898

#byte MDSRC = 0x899

#word MDCAR = 0x89A

typedef struct 
 {
   unsigned int ADFVR:2;
   unsigned int CDAFVR:2;
   unsigned int TSRNG:1;
   unsigned int TSEN:1;
   unsigned int FVRRDY:1;
   unsigned int FVREN:1;
} FVRCONBITS;
FVRCONBITS FVRCONbits;
#byte FVRCONbits = 0x90C
#byte FVRCON = 0x90C

typedef struct 
 {
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
} DAC1CON0BITS;
DAC1CON0BITS DAC1CON0bits;
#byte DAC1CON0bits = 0x90E
#byte DAC1CON0 = 0x90E

#byte DAC1CON1 = 0x90F

typedef struct 
 {
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
} ZCD1CONBITS;
ZCD1CONBITS ZCD1CONbits;
#byte ZCD1CONbits = 0x91F
#byte ZCD1CON = 0x91F

typedef struct 
 {
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
} CMOUTBITS;
CMOUTBITS CMOUTbits;
#byte CMOUTbits = 0x98F
#byte CMOUT = 0x98F

typedef struct 
 {
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
} CM1CON0BITS;
CM1CON0BITS CM1CON0bits;
#byte CM1CON0bits = 0x990
#byte CM1CON0 = 0x990

typedef struct 
 {
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
} CM1CON1BITS;
CM1CON1BITS CM1CON1bits;
#byte CM1CON1bits = 0x991
#byte CM1CON1 = 0x991

#byte CM1NSEL = 0x992

#byte CM1PSEL = 0x993

typedef struct 
 {
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
} CM2CON0BITS;
CM2CON0BITS CM2CON0bits;
#byte CM2CON0bits = 0x994
#byte CM2CON0 = 0x994

typedef struct 
 {
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
} CM2CON1BITS;
CM2CON1BITS CM2CON1bits;
#byte CM2CON1bits = 0x995
#byte CM2CON1 = 0x995

#byte CM2NSEL = 0x996

#byte CM2PSEL = 0x997

typedef struct 
 {
   unsigned int MLC1OUT:1;
   unsigned int MLC2OUT:1;
   unsigned int MLC3OUT:1;
   unsigned int MLC4OUT:1;
} CLCDATABITS;
CLCDATABITS CLCDATAbits;
#byte CLCDATAbits = 0xE0F
#byte CLCDATA = 0xE0F

typedef struct 
 {
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
} CLC1CONBITS;
CLC1CONBITS CLC1CONbits;
#byte CLC1CONbits = 0xE10
#byte CLC1CON = 0xE10

typedef struct 
 {
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
} CLC1POLBITS;
CLC1POLBITS CLC1POLbits;
#byte CLC1POLbits = 0xE11
#byte CLC1POL = 0xE11

typedef struct 
 {
   union {
      struct {
         unsigned int LC1D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} CLC1SEL0BITS;
CLC1SEL0BITS CLC1SEL0bits;
#byte CLC1SEL0bits = 0xE12
#byte CLC1SEL0 = 0xE12

typedef struct 
 {
   union {
      struct {
         unsigned int LC1D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} CLC1SEL1BITS;
CLC1SEL1BITS CLC1SEL1bits;
#byte CLC1SEL1bits = 0xE13
#byte CLC1SEL1 = 0xE13

typedef struct 
 {
   union {
      struct {
         unsigned int LC1D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} CLC1SEL2BITS;
CLC1SEL2BITS CLC1SEL2bits;
#byte CLC1SEL2bits = 0xE14
#byte CLC1SEL2 = 0xE14

typedef struct 
 {
   union {
      struct {
         unsigned int LC1D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} CLC1SEL3BITS;
CLC1SEL3BITS CLC1SEL3bits;
#byte CLC1SEL3bits = 0xE15
#byte CLC1SEL3 = 0xE15

typedef struct 
 {
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
} CLC1GLS0BITS;
CLC1GLS0BITS CLC1GLS0bits;
#byte CLC1GLS0bits = 0xE16
#byte CLC1GLS0 = 0xE16

typedef struct 
 {
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
} CLC1GLS1BITS;
CLC1GLS1BITS CLC1GLS1bits;
#byte CLC1GLS1bits = 0xE17
#byte CLC1GLS1 = 0xE17

typedef struct 
 {
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
} CLC1GLS2BITS;
CLC1GLS2BITS CLC1GLS2bits;
#byte CLC1GLS2bits = 0xE18
#byte CLC1GLS2 = 0xE18

typedef struct 
 {
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
} CLC1GLS3BITS;
CLC1GLS3BITS CLC1GLS3bits;
#byte CLC1GLS3bits = 0xE19
#byte CLC1GLS3 = 0xE19

typedef struct 
 {
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
} CLC2CONBITS;
CLC2CONBITS CLC2CONbits;
#byte CLC2CONbits = 0xE1A
#byte CLC2CON = 0xE1A

typedef struct 
 {
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
} CLC2POLBITS;
CLC2POLBITS CLC2POLbits;
#byte CLC2POLbits = 0xE1B
#byte CLC2POL = 0xE1B

typedef struct 
 {
   union {
      struct {
         unsigned int LC2D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} CLC2SEL0BITS;
CLC2SEL0BITS CLC2SEL0bits;
#byte CLC2SEL0bits = 0xE1C
#byte CLC2SEL0 = 0xE1C

typedef struct 
 {
   union {
      struct {
         unsigned int LC2D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} CLC2SEL1BITS;
CLC2SEL1BITS CLC2SEL1bits;
#byte CLC2SEL1bits = 0xE1D
#byte CLC2SEL1 = 0xE1D

typedef struct 
 {
   union {
      struct {
         unsigned int LC2D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} CLC2SEL2BITS;
CLC2SEL2BITS CLC2SEL2bits;
#byte CLC2SEL2bits = 0xE1E
#byte CLC2SEL2 = 0xE1E

typedef struct 
 {
   union {
      struct {
         unsigned int LC2D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} CLC2SEL3BITS;
CLC2SEL3BITS CLC2SEL3bits;
#byte CLC2SEL3bits = 0xE1F
#byte CLC2SEL3 = 0xE1F

typedef struct 
 {
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
} CLC2GLS0BITS;
CLC2GLS0BITS CLC2GLS0bits;
#byte CLC2GLS0bits = 0xE20
#byte CLC2GLS0 = 0xE20

typedef struct 
 {
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
} CLC2GLS1BITS;
CLC2GLS1BITS CLC2GLS1bits;
#byte CLC2GLS1bits = 0xE21
#byte CLC2GLS1 = 0xE21

typedef struct 
 {
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
} CLC2GLS2BITS;
CLC2GLS2BITS CLC2GLS2bits;
#byte CLC2GLS2bits = 0xE22
#byte CLC2GLS2 = 0xE22

typedef struct 
 {
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
} CLC2GLS3BITS;
CLC2GLS3BITS CLC2GLS3bits;
#byte CLC2GLS3bits = 0xE23
#byte CLC2GLS3 = 0xE23

typedef struct 
 {
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
} CLC3CONBITS;
CLC3CONBITS CLC3CONbits;
#byte CLC3CONbits = 0xE24
#byte CLC3CON = 0xE24

typedef struct 
 {
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
} CLC3POLBITS;
CLC3POLBITS CLC3POLbits;
#byte CLC3POLbits = 0xE25
#byte CLC3POL = 0xE25

typedef struct 
 {
   union {
      struct {
         unsigned int LC3D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} CLC3SEL0BITS;
CLC3SEL0BITS CLC3SEL0bits;
#byte CLC3SEL0bits = 0xE26
#byte CLC3SEL0 = 0xE26

typedef struct 
 {
   union {
      struct {
         unsigned int LC3D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} CLC3SEL1BITS;
CLC3SEL1BITS CLC3SEL1bits;
#byte CLC3SEL1bits = 0xE27
#byte CLC3SEL1 = 0xE27

typedef struct 
 {
   union {
      struct {
         unsigned int LC3D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} CLC3SEL2BITS;
CLC3SEL2BITS CLC3SEL2bits;
#byte CLC3SEL2bits = 0xE28
#byte CLC3SEL2 = 0xE28

typedef struct 
 {
   union {
      struct {
         unsigned int LC3D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} CLC3SEL3BITS;
CLC3SEL3BITS CLC3SEL3bits;
#byte CLC3SEL3bits = 0xE29
#byte CLC3SEL3 = 0xE29

typedef struct 
 {
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
} CLC3GLS0BITS;
CLC3GLS0BITS CLC3GLS0bits;
#byte CLC3GLS0bits = 0xE2A
#byte CLC3GLS0 = 0xE2A

typedef struct 
 {
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
} CLC3GLS1BITS;
CLC3GLS1BITS CLC3GLS1bits;
#byte CLC3GLS1bits = 0xE2B
#byte CLC3GLS1 = 0xE2B

typedef struct 
 {
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
} CLC3GLS2BITS;
CLC3GLS2BITS CLC3GLS2bits;
#byte CLC3GLS2bits = 0xE2C
#byte CLC3GLS2 = 0xE2C

typedef struct 
 {
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
} CLC3GLS3BITS;
CLC3GLS3BITS CLC3GLS3bits;
#byte CLC3GLS3bits = 0xE2D
#byte CLC3GLS3 = 0xE2D

typedef struct 
 {
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
} CLC4CONBITS;
CLC4CONBITS CLC4CONbits;
#byte CLC4CONbits = 0xE2E
#byte CLC4CON = 0xE2E

typedef struct 
 {
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
} CLC4POLBITS;
CLC4POLBITS CLC4POLbits;
#byte CLC4POLbits = 0xE2F
#byte CLC4POL = 0xE2F

typedef struct 
 {
   union {
      struct {
         unsigned int LC4D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} CLC4SEL0BITS;
CLC4SEL0BITS CLC4SEL0bits;
#byte CLC4SEL0bits = 0xE30
#byte CLC4SEL0 = 0xE30

typedef struct 
 {
   union {
      struct {
         unsigned int LC4D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} CLC4SEL1BITS;
CLC4SEL1BITS CLC4SEL1bits;
#byte CLC4SEL1bits = 0xE31
#byte CLC4SEL1 = 0xE31

typedef struct 
 {
   union {
      struct {
         unsigned int LC4D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} CLC4SEL2BITS;
CLC4SEL2BITS CLC4SEL2bits;
#byte CLC4SEL2bits = 0xE32
#byte CLC4SEL2 = 0xE32

typedef struct 
 {
   union {
      struct {
         unsigned int LC4D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} CLC4SEL3BITS;
CLC4SEL3BITS CLC4SEL3bits;
#byte CLC4SEL3bits = 0xE33
#byte CLC4SEL3 = 0xE33

typedef struct 
 {
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
} CLC4GLS0BITS;
CLC4GLS0BITS CLC4GLS0bits;
#byte CLC4GLS0bits = 0xE34
#byte CLC4GLS0 = 0xE34

typedef struct 
 {
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
} CLC4GLS1BITS;
CLC4GLS1BITS CLC4GLS1bits;
#byte CLC4GLS1bits = 0xE35
#byte CLC4GLS1 = 0xE35

typedef struct 
 {
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
} CLC4GLS2BITS;
CLC4GLS2BITS CLC4GLS2bits;
#byte CLC4GLS2bits = 0xE36
#byte CLC4GLS2 = 0xE36

typedef struct 
 {
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
} CLC4GLS3BITS;
CLC4GLS3BITS CLC4GLS3bits;
#byte CLC4GLS3bits = 0xE37
#byte CLC4GLS3 = 0xE37

typedef struct 
 {
   unsigned int PPSLOCKED:1;
} PPSLOCKBITS;
PPSLOCKBITS PPSLOCKbits;
#byte PPSLOCKbits = 0xE8F
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

typedef struct 
 {
   unsigned int ANSA:8;
} ANSELABITS;
ANSELABITS ANSELAbits;
#byte ANSELAbits = 0xF38
#byte ANSELA = 0xF38

typedef struct 
 {
   unsigned int WPUA:8;
} WPUABITS;
WPUABITS WPUAbits;
#byte WPUAbits = 0xF39
#byte WPUA = 0xF39

typedef struct 
 {
   unsigned int ODCA:8;
} ODCONABITS;
ODCONABITS ODCONAbits;
#byte ODCONAbits = 0xF3A
#byte ODCONA = 0xF3A

typedef struct 
 {
   unsigned int SLRA:8;
} SLRCONABITS;
SLRCONABITS SLRCONAbits;
#byte SLRCONAbits = 0xF3B
#byte SLRCONA = 0xF3B

typedef struct 
 {
   unsigned int INLVLA:8;
} INLVLABITS;
INLVLABITS INLVLAbits;
#byte INLVLAbits = 0xF3C
#byte INLVLA = 0xF3C

typedef struct 
 {
   unsigned int IOCAP:8;
} IOCAPBITS;
IOCAPBITS IOCAPbits;
#byte IOCAPbits = 0xF3D
#byte IOCAP = 0xF3D

typedef struct 
 {
   unsigned int IOCAN:8;
} IOCANBITS;
IOCANBITS IOCANbits;
#byte IOCANbits = 0xF3E
#byte IOCAN = 0xF3E

typedef struct 
 {
   unsigned int IOCAF:8;
} IOCAFBITS;
IOCAFBITS IOCAFbits;
#byte IOCAFbits = 0xF3F
#byte IOCAF = 0xF3F

typedef struct 
 {
   unsigned int CCDNA:8;
} CCDNABITS;
CCDNABITS CCDNAbits;
#byte CCDNAbits = 0xF40
#byte CCDNA = 0xF40

typedef struct 
 {
   unsigned int CCDPA:8;
} CCDPABITS;
CCDPABITS CCDPAbits;
#byte CCDPAbits = 0xF41
#byte CCDPA = 0xF41

typedef struct 
 {
   unsigned int ANSB:8;
} ANSELBBITS;
ANSELBBITS ANSELBbits;
#byte ANSELBbits = 0xF43
#byte ANSELB = 0xF43

typedef struct 
 {
   unsigned int WPUB:8;
} WPUBBITS;
WPUBBITS WPUBbits;
#byte WPUBbits = 0xF44
#byte WPUB = 0xF44

typedef struct 
 {
   unsigned int ODCB:8;
} ODCONBBITS;
ODCONBBITS ODCONBbits;
#byte ODCONBbits = 0xF45
#byte ODCONB = 0xF45

typedef struct 
 {
   unsigned int SLRB:8;
} SLRCONBBITS;
SLRCONBBITS SLRCONBbits;
#byte SLRCONBbits = 0xF46
#byte SLRCONB = 0xF46

typedef struct 
 {
   unsigned int INLVLB:8;
} INLVLBBITS;
INLVLBBITS INLVLBbits;
#byte INLVLBbits = 0xF47
#byte INLVLB = 0xF47

typedef struct 
 {
   unsigned int IOCBP:8;
} IOCBPBITS;
IOCBPBITS IOCBPbits;
#byte IOCBPbits = 0xF48
#byte IOCBP = 0xF48

typedef struct 
 {
   unsigned int IOCBN:8;
} IOCBNBITS;
IOCBNBITS IOCBNbits;
#byte IOCBNbits = 0xF49
#byte IOCBN = 0xF49

typedef struct 
 {
   unsigned int IOCBF:8;
} IOCBFBITS;
IOCBFBITS IOCBFbits;
#byte IOCBFbits = 0xF4A
#byte IOCBF = 0xF4A

typedef struct 
 {
   unsigned int CCDNB:8;
} CCDNBBITS;
CCDNBBITS CCDNBbits;
#byte CCDNBbits = 0xF4B
#byte CCDNB = 0xF4B

typedef struct 
 {
   unsigned int CCDPB:8;
} CCDPBBITS;
CCDPBBITS CCDPBbits;
#byte CCDPBbits = 0xF4C
#byte CCDPB = 0xF4C

typedef struct 
 {
   unsigned int ANSC:8;
} ANSELCBITS;
ANSELCBITS ANSELCbits;
#byte ANSELCbits = 0xF4E
#byte ANSELC = 0xF4E

typedef struct 
 {
   unsigned int WPUC:8;
} WPUCBITS;
WPUCBITS WPUCbits;
#byte WPUCbits = 0xF4F
#byte WPUC = 0xF4F

typedef struct 
 {
   unsigned int ODCC:8;
} ODCONCBITS;
ODCONCBITS ODCONCbits;
#byte ODCONCbits = 0xF50
#byte ODCONC = 0xF50

typedef struct 
 {
   unsigned int SLRC:8;
} SLRCONCBITS;
SLRCONCBITS SLRCONCbits;
#byte SLRCONCbits = 0xF51
#byte SLRCONC = 0xF51

typedef struct 
 {
   unsigned int INLVLC:8;
} INLVLCBITS;
INLVLCBITS INLVLCbits;
#byte INLVLCbits = 0xF52
#byte INLVLC = 0xF52

typedef struct 
 {
   unsigned int IOCCP:8;
} IOCCPBITS;
IOCCPBITS IOCCPbits;
#byte IOCCPbits = 0xF53
#byte IOCCP = 0xF53

typedef struct 
 {
   unsigned int IOCCN:8;
} IOCCNBITS;
IOCCNBITS IOCCNbits;
#byte IOCCNbits = 0xF54
#byte IOCCN = 0xF54

typedef struct 
 {
   unsigned int IOCCF:8;
} IOCCFBITS;
IOCCFBITS IOCCFbits;
#byte IOCCFbits = 0xF55
#byte IOCCF = 0xF55

typedef struct 
 {
   unsigned int CCDNC:8;
} CCDNCBITS;
CCDNCBITS CCDNCbits;
#byte CCDNCbits = 0xF56
#byte CCDNC = 0xF56

typedef struct 
 {
   unsigned int CCDPC:8;
} CCDPCBITS;
CCDPCBITS CCDPCbits;
#byte CCDPCbits = 0xF57
#byte CCDPC = 0xF57

typedef struct 
 {
   unsigned int :3;
   unsigned int WPUE3:1;
} WPUEBITS;
WPUEBITS WPUEbits;
#byte WPUEbits = 0xF65
#byte WPUE = 0xF65

typedef struct 
 {
   unsigned int :3;
   unsigned int INLVLE3:1;
} INLVLEBITS;
INLVLEBITS INLVLEbits;
#byte INLVLEbits = 0xF68
#byte INLVLE = 0xF68

typedef struct 
 {
   unsigned int :3;
   unsigned int IOCEP3:1;
} IOCEPBITS;
IOCEPBITS IOCEPbits;
#byte IOCEPbits = 0xF69
#byte IOCEP = 0xF69

typedef struct 
 {
   unsigned int :3;
   unsigned int IOCEN3:1;
} IOCENBITS;
IOCENBITS IOCENbits;
#byte IOCENbits = 0xF6A
#byte IOCEN = 0xF6A

typedef struct 
 {
   unsigned int :3;
   unsigned int IOCEF3:1;
} IOCEFBITS;
IOCEFBITS IOCEFbits;
#byte IOCEFbits = 0xF6B
#byte IOCEF = 0xF6B

typedef struct 
 {
   unsigned int C_SHAD:1;
   unsigned int DC_SHAD:1;
   unsigned int Z_SHAD:1;
} STATUS_SHADBITS;
STATUS_SHADBITS STATUS_SHADbits;
#byte STATUS_SHADbits = 0xFE4
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

