#CASE
#include <16F18855.h>

#fuses NOEXTOSC,RSTOSC_HFINTRC_32MHZ,NOCLKOUT,MCLR,ZCDDIS,NOWDT,LVP,NOPROTECT,NOCPD

#device ADC=10 
#use delay(internal=32MHz)
//#use delay(clock=32M)
#use rs232(baud=115200,parity=N,xmit=PIN_C0,rcv=PIN_C1,bits=8,STOP=1,UART1 )
#use i2c(Master,Fast,sda=PIN_C3,scl=PIN_C4)




//////// Program memory: 8192x14  Data RAM: 1008  Stack: 16
//////// I/O: 25   Analog Pins: 24
//////// Data EEPROM: 256
//////// C Scratch area: 77   ID Location: 8000
//////// Fuses: LP,XT,HS,NOEXTOSC,ECL,ECM,ECH,RSTOSC_HFINTRC_32MHZ
//////// Fuses: RSTOSC_HFINTRC_PLL,RSTOSC_EXT_PLL,RSTOSC_SOSC,RSTOSC_LFINTRC
//////// Fuses: RSTOSC_HFINTRC_1MHZ,RSTOSC_EXT,CLKOUT,NOCLKOUT,CKS,NOCKS
//////// Fuses: FCMEN,NOFCMEN,MCLR,NOMCLR,PUT,NOPUT,LPBOR,NOLPBOR,NOBROWNOUT
//////// Fuses: BROWNOUT_SW,BROWNOUT_NOSL,BROWNOUT,BORV27,BORV24,ZCDDIS
//////// Fuses: NOZCDDIS,PPS1WAY,NOPPS1WAY,STVREN,NOSTVREN,DEBUG,NODEBUG
//////// Fuses: WDT64,WDT128,WDT256,WDT512,WDT1024,WDT2048,WDT4096,WDT8192
//////// Fuses: WDT16384,WDT32768,WDT65536,WDT131072,WDT262144,WDT524299
//////// Fuses: WDT1048576,WDT2097152,WDT4194304,WDT8388608,WDT32,WDTSW
//////// Fuses: NOWDT,WDT_SW,WDT_NOSL,WDT,WDTWIN_12%,WDTWIN_25%,WDTWIN_37%
//////// Fuses: WDTWIN_50%,WDTWIN_62%,WDTWIN_75%,WDTWIN_100%,WDTWIN_SW
//////// Fuses: WDTCLK_LFINTRC,WDTCLK_HFINTRC,WDTCLK_SW,WRT_200,NOWRT,SCANE
//////// Fuses: NOSCANE,LVP,NOLVP,PROTECT,NOPROTECT,CPD,NOCPD
