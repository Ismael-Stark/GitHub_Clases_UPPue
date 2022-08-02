
; PIC16F18855 Configuration Bit Settings

; Assembly source line config statements

; CONFIG1
  CONFIG  FEXTOSC = OFF         ; External Oscillator mode selection bits (Oscillator not enabled)
  CONFIG  RSTOSC = HFINT32      ; Power-up default value for COSC bits (HFINTOSC with OSCFRQ= 32 MHz and CDIV = 1:1)
  //CONFIG  RSTOSC = HFINTPLL     ; Power-up default value for COSC bits (HFINTOSC with 2x PLL, with OSCFRQ = 16 MHz and CDIV = 1:1 (FOSC = 32 MHz))
  //CONFIG  RSTOSC = HFINT1       ; Power-up default value for COSC bits (HFINTOSC (1MHz))
  CONFIG  CLKOUTEN = OFF        ; Clock Out Enable bit (CLKOUT function is disabled; i/o or oscillator function on OSC2)
  CONFIG  CSWEN = ON            ; Clock Switch Enable bit (Writing to NOSC and NDIV is allowed)
  CONFIG  FCMEN = ON            ; Fail-Safe Clock Monitor Enable bit (FSCM timer enabled)

; CONFIG2
  CONFIG  MCLRE = ON            ; Master Clear Enable bit (MCLR pin is Master Clear function)
  CONFIG  PWRTE = OFF           ; Power-up Timer Enable bit (PWRT disabled)
  CONFIG  LPBOREN = OFF         ; Low-Power BOR enable bit (ULPBOR disabled)
  CONFIG  BOREN = ON            ; Brown-out reset enable bits (Brown-out Reset Enabled, SBOREN bit is ignored)
  CONFIG  BORV = LO             ; Brown-out Reset Voltage Selection (Brown-out Reset Voltage (VBOR) set to 1.9V on LF, and 2.45V on F Devices)
  CONFIG  ZCD = OFF             ; Zero-cross detect disable (Zero-cross detect circuit is disabled at POR.)
  CONFIG  PPS1WAY = ON          ; Peripheral Pin Select one-way control (The PPSLOCK bit can be cleared and set only once in software)
  CONFIG  STVREN = ON           ; Stack Overflow/Underflow Reset Enable bit (Stack Overflow or Underflow will cause a reset)

; CONFIG3
  CONFIG  WDTCPS = WDTCPS_31    ; WDT Period Select bits (Divider ratio 1:65536; software control of WDTPS)
  CONFIG  WDTE = OFF            ; WDT operating mode (WDT Disabled, SWDTEN is ignored)
  CONFIG  WDTCWS = WDTCWS_7     ; WDT Window Select bits (window always open (100%); software control; keyed access not required)
  CONFIG  WDTCCS = SC           ; WDT input clock selector (Software Control)

; CONFIG4
  CONFIG  WRT = OFF             ; UserNVM self-write protection bits (Write protection off)
  CONFIG  SCANE = available     ; Scanner Enable bit (Scanner module is available for use)
  CONFIG  LVP = ON              ; Low Voltage Programming Enable bit (Low Voltage programming enabled. MCLR/Vpp pin function is MCLR.)

; CONFIG5
  CONFIG  CP = OFF              ; UserNVM Program memory code protection bit (Program Memory code protection disabled)
  CONFIG  CPD = OFF             ; DataNVM code protection bit (Data EEPROM code protection disabled)

// config statements should precede project file includes.
#include <xc.inc>
; When assembly code is placed in a psect, it can be manipulated as a
; whole by the linker and placed in memory.  
;
; In this example, barfunc is the program section (psect) name, 'local' means
; that the section will not be combined with other sections even if they have
; the same name.  class=CODE means the barfunc must go in the CODE container.
; PIC18's should have a delta (addressible unit size) of 1 (default) since they
; are byte addressible.  PIC10/12/16's have a delta of 2 since they are word
; addressible.  PIC18's should have a reloc (alignment) flag of 2 for any
; psect which contains executable code.  PIC10/12/16's can use the default
; reloc value of 1.  Use one of the psects below for the device you use:

psect   barfunc,global,class=CODE,delta=2 ; PIC10/12/16  
  
    cont    equ	0x05		    ;20H
    d1	    equ	0x06
    d2	    equ	0x07
    d3	    equ	0x08
	    
    
    org 0;
    goto main;
    
    
    main:
    BANKSEL PORTA
    clrf PORTA ;LIMPIO ENTRADA
    BANKSEL LATA
    clrf LATA	;LIMPIO SALIDA
    BANKSEL ANSELA
    CLRF ANSELA; TODO EL PUERTO ES E/S DIGITAL
    ;PARA DECLARAR ENTRADAS, SE PONE EN 1 EL BIT A USAR
    ;PARA DECLARAR SALIDAS SE PONE EN 0, EL BIT A USAR
    BANKSEL TRISA
    ;BCF TRISA,0	;PINA0 COMO SALIDA, BSF= BIT CLEAR F
    ;BSF TRISA,5	;PINA5 COMO ENTRADA, BIT SET F

    MOVLW 0b00110000 
    MOVWF TRISA
    
    /*
    LOOP:	; LOOP INFINITO DEL PROGRAMA PRINCIPAL
    BTFSS PORTA,5   ;VERIFICO SI EL BOTON ESTA PRESIONADO RECORDAR QUE EL BOTON 
		    ;ESTA CONECTADO DE FORMA QUE SIEMPRE HAY UN 1 EN LA ENTRADA
    GOTO ENCIENDE   ;SI ESTA PRESIONADO ENCIENDO
    GOTO APAGA
    
    ENCIENDE:
    MOVLW 0b00001010    ;DIGO QUE LEDS A ENCENDER 
    MOVWF LATA	    ;AQUI MANDO A ENCENDER LOS LEDS
    ;BSF LATA,0	;SOLO ENCIENDE EL PIN A0
    GOTO LOOP
	
    APAGA:
    CLRF LATA ;APAGO TODO EL PUERTO
    ;BCF LATA,0	;APAGO SOLO EL PIN A0
    GOTO LOOP*/
    
    /*
    ;;ciclos de reloj y ciclos de instruccion------------------------
    ;cilco de reloj = 1/32Mhz= 31.25nS
    ;ciclo de instruccion = 4xcixlodeReloj = 125nS
    LOOP:
    BCF LATA,0	;125nS led encendido
    BSF LATA,0	;125nS led apagado
    goto LOOP; 250nS el goto
    ;;4CICLOS DE INSTRUCCION, EL PROGRAMA TOMA 500nS
    ;EJECUTARSE
    ;el led tarda 125nS encendido y 375nS apagado
    */
    
    //Parpadeo de un led
    
    
    LOOP:
    BSF LATA,0	;125nS led encendido
    call	retardo_75ms ;llamar delay
    BCF LATA,0	;125nS led apagado
    call	retardo_75ms   ;;llamar delay
    goto LOOP; 250nS el goto
    
    
    retardo_500ms:	;http://www.piclist.com/techref/piclist/codegen/delay.htm
;    movlw 255
;    movwf cont
;    decfsz cont,1
;    GOTO $-1 ;No, test again
    
    movlw	0x23
    movwf	d1
    movlw	0xB9
    movwf	d2
    movlw	0x09
    movwf	d3
Delay_0:
    decfsz	d1, f
    goto	$+2
    decfsz	d2, f
    goto	$+2
    decfsz	d3, f
    goto	Delay_0
		;6 cycles
    goto	$+1
    goto	$+1
    goto	$+1
    return
    
retardo_75ms:
	movlw	0xD1
	movwf	d1
	movlw	0x4F
	movwf	d2
	movlw	0x02
	movwf	d3
Delay_1:
	decfsz	d1, f
	goto	$+2
	decfsz	d2, f
	goto	$+2
	decfsz	d3, f
	goto	Delay_1
			;4 cycles
	goto	$+1
	goto	$+1
	
	return
	
end
	
;;luces auto fatastico
/*	50ms
	100ms
	200ms
	300ms*/