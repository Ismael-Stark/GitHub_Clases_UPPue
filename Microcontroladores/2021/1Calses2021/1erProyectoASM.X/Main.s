#include <xc.inc>
    ; CONFIG1
  CONFIG  FEXTOSC = OFF         ; External Oscillator mode selection bits (Oscillator not enabled)
  CONFIG  RSTOSC = HFINT32      ; Power-up default value for COSC bits (HFINTOSC with OSCFRQ= 32 MHz and CDIV = 1:1)
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

    cont    equ	0x20		    ;20H
    d1	    equ	0x21
    d2	    equ	0x22
    d3	    equ	0x23

; PORTx registers , sirve para leer entradas digitales
; LATx registers , sirve para obtener una salida digital en un pin del microcontrolador
;//TRISx registers , sirve para configurar un pin como entrada o salida
;//ANSELx registers (analog select), es para seleccionar un pin como entrada analogica
    ORG 0;
    
    GOTO MAIN
    
    MAIN:

    BANKSEL PORTA ;
    CLRF PORTA ;Init PORTA
    BANKSEL LATA ;Data Latch
    CLRF LATA ;
    BANKSEL ANSELA ;
    CLRF  ANSELA ;digital I/O
    BANKSEL TRISA ;
    MOVLW 0b00110000 ;Set RA<5:3> as inputs
    MOVWF TRISA ;and set RA<2:0> as
    
    ;;programa1
    ;BANKSEL LATA ;Data Latch
    ;BSF LATA,0 ;
    ;BSF LATA,1 ;
    ;BSF LATA,2 ;
    ;BSF LATA,3 ;
    ;
;    bucle:
;    BSF LATA,0
;    BCF LATA,0
;    goto bucle
    ;
    ;MOVLW 0b00000010
    ;MOVWF LATA
    
    ;;programa2
    ;bucle:  ;bucle es una etiqueta
    ;btfsc PORTA,5
    ;;linea a saltar
    ;goto apaga
    ;;linea a donde salta
    ;GOTO enciende
    
    ;enciende:
    ;BSF LATA,0 ;
    ;goto bucle
    ;apaga:
    ;BCF LATA,0 ;
    ;goto bucle
    
    
    ;;programa3 parpadea un led
;    ciclo:
;	BSF LATA,0 ;a125ns en ejecutarse
;	call retardo_75ms 
;	BCF LATA,0  //125ns en ejecutarse
;	call retardo_75ms
;	goto ciclo //250ns en ejecutarse
	
	;el led tarda 125ns encendido
	;y 375ns apagado
	
;;programa4 led va y viene
;    ciclo:
;	BCF LATA,3  //125ns en ejecutarse
;	BSF LATA,0 ;a125ns en ejecutarse
;	call retardo_500ms 
;	BCF LATA,0  //125ns en ejecutarse
;	BSF LATA,1
;	call retardo_500ms
;	BCF LATA,1  //125ns en ejecutarse
;	BSF LATA,2
;	call retardo_500ms
;	BCF LATA,2  //125ns en ejecutarse
;	BSF LATA,3
;	call retardo_500ms
;	goto ciclo //250ns en ejecutarse

	;programa5 led va y viene CON rrf Y rlf
    empieza:
	movlw 0x01
	movwf LATA
	call retardo_500ms
    ciclo:
	RLF	LATA  //125ns en ejecutarse
	call	retardo_500ms
	BTFSS	LATA,4
	goto ciclo //250ns en ejecutarse
	
	goto empieza
	
	
	
;    
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