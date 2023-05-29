

; PIC18F57Q84 Configuration Bit Settings

; Assembly source line config statements

; CONFIG1
  CONFIG  FEXTOSC = HS          ; External Oscillator Selection (HS (crystal oscillator) above 8 MHz)
  CONFIG  RSTOSC = EXTOSC       ; Reset Oscillator Selection (EXTOSC operating per FEXTOSC bits (device manufacturing default))

; CONFIG2
  CONFIG  CLKOUTEN = OFF        ; Clock out Enable bit (CLKOUT function is disabled)
  CONFIG  PR1WAY = ON           ; PRLOCKED One-Way Set Enable bit (PRLOCKED bit can be cleared and set only once)
  CONFIG  CSWEN = ON            ; Clock Switch Enable bit (Writing to NOSC and NDIV is allowed)
  CONFIG  JTAGEN = ON           ; JTAG Enable bit (Enable JTAG Boundary Scan mode and pins)
  CONFIG  FCMEN = ON            ; Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor enabled)
  CONFIG  FCMENP = ON           ; Fail-Safe Clock Monitor -Primary XTAL Enable bit (FSCM timer will set FSCMP bit and OSFIF interrupt on Primary XTAL failure)
  CONFIG  FCMENS = ON           ; Fail-Safe Clock Monitor -Secondary XTAL Enable bit (FSCM timer will set FSCMS bit and OSFIF interrupt on Secondary XTAL failure)

; CONFIG3
  CONFIG  MCLRE = EXTMCLR       ; MCLR Enable bit (If LVP = 0, MCLR pin is MCLR; If LVP = 1, RE3 pin function is MCLR )
  CONFIG  PWRTS = PWRT_OFF      ; Power-up timer selection bits (PWRT is disabled)
  CONFIG  MVECEN = ON           ; Multi-vector enable bit (Multi-vector enabled, Vector table used for interrupts)
  CONFIG  IVT1WAY = ON          ; IVTLOCK bit One-way set enable bit (IVTLOCKED bit can be cleared and set only once)
  CONFIG  LPBOREN = OFF         ; Low Power BOR Enable bit (Low-Power BOR disabled)
  CONFIG  BOREN = OFF           ; Brown-out Reset Enable bits (Brown-out Reset disabled)

; CONFIG4
  CONFIG  BORV = VBOR_1P9       ; Brown-out Reset Voltage Selection bits (Brown-out Reset Voltage (VBOR) set to 1.9V)
  CONFIG  ZCD = OFF             ; ZCD Disable bit (ZCD module is disabled. ZCD can be enabled by setting the ZCDSEN bit of ZCDCON)
  CONFIG  PPS1WAY = ON          ; PPSLOCK bit One-Way Set Enable bit (PPSLOCKED bit can be cleared and set only once; PPS registers remain locked after one clear/set cycle)
  CONFIG  STVREN = ON           ; Stack Full/Underflow Reset Enable bit (Stack full/underflow will cause Reset)
  CONFIG  LVP = ON              ; Low Voltage Programming Enable bit (Low voltage programming enabled. MCLR/VPP pin function is MCLR. MCLRE configuration bit is ignored)
  CONFIG  XINST = OFF           ; Extended Instruction Set Enable bit (Extended Instruction Set and Indexed Addressing Mode disabled)

; CONFIG5
  CONFIG  WDTCPS = WDTCPS_31    ; WDT Period selection bits (Divider ratio 1:65536; software control of WDTPS)
  CONFIG  WDTE = OFF            ; WDT operating mode (WDT Disabled; SWDTEN is ignored)

; CONFIG6
  CONFIG  WDTCWS = WDTCWS_7     ; WDT Window Select bits (window always open (100%); software control; keyed access not required)
  CONFIG  WDTCCS = SC           ; WDT input clock selector (Software Control)

; CONFIG7
  CONFIG  BBSIZE = BBSIZE_512   ; Boot Block Size selection bits (Boot Block size is 512 words)
  CONFIG  BBEN = OFF            ; Boot Block enable bit (Boot block disabled)
  CONFIG  SAFEN = OFF           ; Storage Area Flash enable bit (SAF disabled)
  CONFIG  DEBUG = OFF           ; Background Debugger (Background Debugger disabled)

; CONFIG8
  CONFIG  WRTB = OFF            ; Boot Block Write Protection bit (Boot Block not Write protected)
  CONFIG  WRTC = OFF            ; Configuration Register Write Protection bit (Configuration registers not Write protected)
  CONFIG  WRTD = OFF            ; Data EEPROM Write Protection bit (Data EEPROM not Write protected)
  CONFIG  WRTSAF = OFF          ; SAF Write protection bit (SAF not Write Protected)
  CONFIG  WRTAPP = OFF          ; Application Block write protection bit (Application Block not write protected)

; CONFIG9
  CONFIG  BOOTPINSEL = RC5      ; CRC on boot output pin selection (CRC on boot output pin is RC5)
  CONFIG  BPEN = OFF            ; CRC on boot output pin enable bit (CRC on boot output pin disabled)
  CONFIG  ODCON = OFF           ; CRC on boot output pin open drain bit (Pin drives both high-going and low-going signals)

; CONFIG10
  CONFIG  CP = OFF              ; PFM and Data EEPROM Code Protection bit (PFM and Data EEPROM code protection disabled)

; CONFIG11
  CONFIG  BOOTSCEN = OFF        ; CRC on boot scan enable for boot area (CRC on boot will not include the boot area of program memory in its calculation)
  CONFIG  BOOTCOE = HALT        ; CRC on boot Continue on Error for boot areas bit (CRC on boot will stop device if error is detected in boot areas)
  CONFIG  APPSCEN = OFF         ; CRC on boot application code scan enable (CRC on boot will not include the application area of program memory in its calculation)
  CONFIG  SAFSCEN = OFF         ; CRC on boot SAF area scan enable (CRC on boot will not include the SAF area of program memory in its calculation)
  CONFIG  DATASCEN = OFF        ; CRC on boot Data EEPROM scan enable (CRC on boot will not include data EEPROM in its calculation)
  CONFIG  CFGSCEN = OFF         ; CRC on boot Config fuses scan enable (CRC on boot will not include the configuration fuses in its calculation)
  CONFIG  COE = HALT            ; CRC on boot Continue on Error for non-boot areas bit (CRC on boot will stop device if error is detected in non-boot areas)
  CONFIG  BOOTPOR = OFF         ; Boot on CRC Enable bit (CRC on boot will not run)

; CONFIG12
  CONFIG  BCRCPOLT = hFF        ; Boot Sector Polynomial for CRC on boot bits 31-24 (Bits 31:24 of BCRCPOL are 0xFF)

; CONFIG13
  CONFIG  BCRCPOLU = hFF        ; Boot Sector Polynomial for CRC on boot bits 23-16 (Bits 23:16 of BCRCPOL are 0xFF)

; CONFIG14
  CONFIG  BCRCPOLH = hFF        ; Boot Sector Polynomial for CRC on boot bits 15-8 (Bits 15:8 of BCRCPOL are 0xFF)

; CONFIG15
  CONFIG  BCRCPOLL = hFF        ; Boot Sector Polynomial for CRC on boot bits 7-0 (Bits 7:0 of BCRCPOL are 0xFF)

; CONFIG16
  CONFIG  BCRCSEEDT = hFF       ; Boot Sector Seed for CRC on boot bits 31-24 (Bits 31:24 of BCRCSEED are 0xFF)

; CONFIG17
  CONFIG  BCRCSEEDU = hFF       ; Boot Sector Seed for CRC on boot bits 23-16 (Bits 23:16 of BCRCSEED are 0xFF)

; CONFIG18
  CONFIG  BCRCSEEDH = hFF       ; Boot Sector Seed for CRC on boot bits 15-8 (Bits 15:8 of BCRCSEED are 0xFF)

; CONFIG19
  CONFIG  BCRCSEEDL = hFF       ; Boot Sector Seed for CRC on boot bits 7-0 (Bits 7:0 of BCRCSEED are 0xFF)

; CONFIG20
  CONFIG  BCRCEREST = hFF       ; Boot Sector Expected Result for CRC on boot bits 31-24 (Bits 31:24 of BCRCERES are 0xFF)

; CONFIG21
  CONFIG  BCRCERESU = hFF       ; Boot Sector Expected Result for CRC on boot bits 23-16 (Bits 23:16 of BCRCERES are 0xFF)

; CONFIG22
  CONFIG  BCRCERESH = hFF       ; Boot Sector Expected Result for CRC on boot bits 15-8 (Bits 15:8 of BCRCERES are 0xFF)

; CONFIG23
  CONFIG  BCRCERESL = hFF       ; Boot Sector Expected Result for CRC on boot bits 7-0 (Bits 7:0 of BCRCERES are 0xFF)

; CONFIG24
  CONFIG  CRCPOLT = hFF         ; Non-Boot Sector Polynomial for CRC on boot bits 31-24 (Bits 31:24 of CRCPOL are 0xFF)

; CONFIG25
  CONFIG  CRCPOLU = hFF         ; Non-Boot Sector Polynomial for CRC on boot bits 23-16 (Bits 23:16 of CRCPOL are 0xFF)

; CONFIG26
  CONFIG  CRCPOLH = hFF         ; Non-Boot Sector Polynomial for CRC on boot bits 15-8 (Bits 15:8 of CRCPOL are 0xFF)

; CONFIG27
  CONFIG  CRCPOLL = hFF         ; Non-Boot Sector Polynomial for CRC on boot bits 7-0 (Bits 7:0 of CRCPOL are 0xFF)

; CONFIG28
  CONFIG  CRCSEEDT = hFF        ; Non-Boot Sector Seed for CRC on boot bits 31-24 (Bits 31:24 of CRCSEED are 0xFF)

; CONFIG29
  CONFIG  CRCSEEDU = hFF        ; Non-Boot Sector Seed for CRC on boot bits 23-16 (Bits 23:16 of CRCSEED are 0xFF)

; CONFIG30
  CONFIG  CRCSEEDH = hFF        ; Non-Boot Sector Seed for CRC on boot bits 15-8 (Bits 15:8 of CRCSEED are 0xFF)

; CONFIG31
  CONFIG  CRCSEEDL = hFF        ; Non-Boot Sector Seed for CRC on boot bits 7-0 (Bits 7:0 of CRCSEED are 0xFF)

; CONFIG32
  CONFIG  CRCEREST = hFF        ; Non-Boot Sector Expected Result for CRC on boot bits 31-24 (Bits 31:24 of CRCERES are 0xFF)

; CONFIG33
  CONFIG  CRCERESU = hFF        ; Non-Boot Sector Expected Result for CRC on boot bits 23-16 (Bits 23:16 of CRCERES are 0xFF)

; CONFIG34
  CONFIG  CRCERESH = hFF        ; Non-Boot Sector Expected Result for CRC on boot bits 15-8 (Bits 15:8 of CRCERES are 0xFF)

; CONFIG35
  CONFIG  CRCERESL = hFF        ; Non-Boot Sector Expected Result for CRC on boot bits 7-0 (Bits 7:0 of CRCERES are 0xFF)

// config statements should precede project file includes.
#include <xc.inc>

psect   barfunc,global,class=CODE,delta=1 ;
  org 0;
  goto inicio;

  inicio:
    BANKSEL PORTA ;
    CLRF PORTA ;Clear PORTA
    BANKSEL LATA ;
    CLRF LATA ;Clear Data Latch
    BANKSEL ANSELA ;
    CLRF ANSELA ;Enable digital drivers
    BANKSEL TRISA ;
    MOVLW 0b00111000 ;Set RA[5:3] as inputs
    MOVWF TRISA ;and set others as outputs
    BANKSEL WPUA; ACTIVO PULL-UP PARA BOTON CONECTADO A RA3
    BSF WPUA,3

    BANKSEL PORTF ;
    BCF PORTF,3 ;Clear PORTA.3, limipo pinf3
    BANKSEL LATF ;
    BCF LATF,3 ;Clear Data Latch
    BANKSEL ANSELF ;
    BCF ANSELF,3 ;Enable digital drivers
    BANKSEL TRISF ;
    BCF TRISF,3; pin rf3 como salida

    loop:
	BANKSEL PORTA ;
	;;BTFSS	    ;BIT TEST f, SKIP IF SET
	;;BTFSC	    ;BIT TEST f, SKIP IF CLEAR
	BTFSS PORTA,3,1;
	GOTO encender;encender led
	GOTO apagar	;apaga led

    
    encender:
    BANKSEL LATF
	BCF LATF,3 ;Clear Data Latch
	GOTO loop;
    
    apagar:
    BANKSEL LATF
	BSF LATF,3 ;set Data Latch
	GOTO loop;
    
    end;aqui termina mi codigo en ensamblador
