///////////////////////////////////////////////////////////////////////////
////                     fuses_PIC16F18855.h                           ////
////                                                                   ////
////                                                                   ////
////                                                                   ////
///////////////////////////////////////////////////////////////////////////

   
// Options for external oscillator fuse:
// LP                            Low power oscillator < 200 kHz
// XT                            Crystal oscillator <= 4 MHz
// HS                            High speed oscillator > 4 MHz
// NOEXTOSC                      External Oscillator not enabled
// ECL                           External clock with CLKOUT(PIC18), low power
// ECM                           External clock with CLKOUT(PIC18), medium power
// ECH                           External clock with CLKOUT(PIC18), high power
#define EXTERNAL_OSCILLATOR_FUSE NOEXTOSC 

// Options for Startup Oscillator fuse:
// RSTOSC_HFINTRC_32MHZ
// RSTOSC_HFINTRC                On Power-up clock running from HFINTRC
// RSTOSC_HFINTRC_PLL            On Power-up clock running from HFINTRC with 2x PLL
// RSTOSC_EXT_PLL                On Power-up clock running from External Oscillator with 4x PLL
// RSTOSC_SOSC                   On Power-up clock running from SOSC
// RSTOSC_LFINTRC                On Power-up clock running from LFINTRC
// RSTOSC_EXT                    On Power-up clock running from External Oscillator

#define STARTUP_OSCILLATOR_FUSE  RSTOSC_HFINTRC

// Options for Clock Output on OSC2/CLKOUT fuse:
// CLKOUT                        Output clock on OSC2
// NOCLKOUT                      I/O function on OSC2
#define CLKOUT_FUSE              NOCLKOUT

// Options for Clock Switching Enable fuse:
// NOCKS                         Clock Switching Disabled
// CKS                           Clock Switching Enabled
#define CLOCK_SWITCH_ENABLE_FUSE NOCKS

// Options for Fail-Safe Clock Monitor (for external oscillator) fuse:
// NOFCMEN                       Fail-safe clock monitor disabled
// FCMEN                         Fail-safe clock monitor enabled
#define EXT_OSCILLATOR_MONITOR_FUSE NOFCMEN

// Options for Master Clear pin fuse:
// NOMCLR                        Master Clear pin used for I/O
// MCLR                          Master Clear pin enabled
#define MCLR_FUSE                MCLR

// Options for Power Up Timer fuse:
// PUT                           Power Up Timer
// NOPUT                         No Power Up Timer
#define PUT_FUSE                 PUT

// Options for Low Power Brownout Reset Enable fuse:
// LPBOR                         Low-Power Brownout reset is enabled
// NOLPBOR                       Low-Power Brownout reset is disabled
#define LOW_POWER_BOR_ENABLE_FUSE NOLPBOR

// Options for Brownout Reset fuse:
// NOBROWNOUT                    No brownout reset
// BROWNOUT_SW                   Brownout controlled by configuration bit in special file register
// BROWNOUT_NOSL                 Brownout enabled during operation, disabled during SLEEP
// BROWNOUT                      Reset when brownout detected
#define BROWNOUT_RESET_FUSE      NOBROWNOUT

// Options for Brownout Reset Voltage selection fuse:
// Note: this fuse is just important if brownout detection is activated by the BROWNOUT_RESET_FUSE
// BORV27                        Brownout reset at 2.70V
// BORV24                        Brownout reset at 2.45V (PIC16F18877) or 1.90V (PIC16LF18877)
#define BROWNOUT_VOLTAGE_FUSE    BORV24

// Optios for Zero-cross detect circuit enable at POR fuse:
// NOZCDDIS                      Zero-cross detect circuit is enabled at POR
// ZCDDIS                        Zero-cross detect circuit is disabled at POR
#define ZCD_ENABLE_FUSE          ZCDDIS   

// Options for Peripheral Pin Select reconfiguration fuse:
// NOPPS1WAY                     Allows multiple reconfigurations of peripheral pins
// PPS1WAY                       Allows only one reconfiguration of peripheral pins
#define PPS_CONFIGURATION_FUSE   NOPPS1WAY

// Options for Stack Overflow/Underflow Reset Enable fuse:
// NOSTVREN                      Stack full/underflow will not cause reset
// STVREN                        Stack full/underflow will cause reset
#define STACK_RESET_FUSE         NOSTVREN

// Options for Debug Mode fuse:
// DEBUG                         Debug mode for use with ICD, pins RB6 and RB7 used by the debugger
// NODEBUG                       No Debug mode for ICD, pins RB6 and RB7 are general purpose I/O pins
#define DEBUG_FUSE               NODEBUG

// Options for Watchdog Timer Postscale fuse
// WDT32                         Watch Dog Timer uses 1:32 Postscale
// WDT64                         Watch Dog Timer uses 1:64 Postscale
// WDT128                        Watch Dog Timer uses 1:128 Postscale
// WDT256                        Watch Dog Timer uses 1:256 Postscale
// WDT512                        Watch Dog Timer uses 1:512 Postscale
// WDT1024                       Watch Dog Timer uses 1:1024 Postscale
// WDT2048                       Watch Dog Timer uses 1:2048 Postscale
// WDT4096                       Watch Dog Timer uses 1:4096 Postscale
// WDT8192                       Watch Dog Timer uses 1:8192 Postscale
// WDT16384                      Watch Dog Timer uses 1:16384 Postscale
// WDT32768                      Watch Dog Timer uses 1:32768 Postscale
// WDT65536                      Watch Dog Timer uses 1:65536 Postscale
// WDT131072                     Watch Dog Timer uses 1:131072 Postscale
// WDT262144                     Watch Dog Timer uses 1:262144 Postscale
// WDT524299                     Watch Dog Timer uses 1:52499 Postscale
// WDT1048576                    Watch Dog Timer uses 1:1048576 Postscale
// WDT2097152                    Watch Dog Timer uses 1:2097152 Postscale
// WDT4194304                    Watch Dog Timer uses 1:4194304 Postscale
// WDT8388608                    Watch Dog Timer uses 1:8388608 Postscale
// WDTSW                         Watch Dog Timer Postscale settable in software
#define WDT_POSTSCALE_FUSE       WDTSW

// Options for Watch Dog Timer fuse:
// NOWDT                         No Watch Dog Timer
// WDT_SW                        No Watch Dog Timer, enabled in Software
// WDT_NOSL                      Watch Dog Timer, disabled during SLEEP
// WDT                           Watch Dog Timer
#define WDT_FUSE                 WDT_SW

// Options for Watch Dog Window fuse:
// WDTWIN_12%                    Watchdog Window is 12.5% of WDT period
// WDTWIN_25%                    Watchdog Window is 25% of WDT period
// WDTWIN_37%                    Watchdog Window is 37.5% of WDT period
// WDTWIN_50%                    Watchdog Window is 50% of WDT period
// WDTWIN_62%                    Watchdog Window is 62.5% of WDT period
// WDTWIN_75%                    Watchdog Window is 75% of WDT period
// WDTWIN_100%                   Watchdog Window is 100% of WDT period
// WDTWIN_SW                     Watchdog Window is settable in software
#define WDT_WINDOW_FUSE          WDTWIN_100%     

// Options for Watch Dog Timer Clock Source fuse:
// WDTCLK_LFINTRC                WDT uses 31.0 kHz LFINTRC as clock source
// WDTCLK_HFINTRC                WDT uses 31.25 kHz MFINTRC(!) as clock source
// WDTCLK_SW                     WDT clock source settable in software
#DEFINE  WDT_CLOCK_FUSE          WDTCLK_LFINTRC

// Options for Program Memory Write Protection (self-writes) fuse:
// WRT                           Program Memory Write Protected
// WRT_4000                      Program Memory Write Protected from 0 to 0x3FFF
// WRT_200                       Program Memory Write Protected from 0 to 0x1FF
// NOWRT                         Program memory not write protected
#define PROGRAM_MEMORY_WRITE_PROTECT_FUSE NOWRT

// Options for memory scanner (for CRC) enable fuse:
// NOSCANE                       Scanner module is not available for use
// SCANE                         Scanner module is available for use
#define SCANNER_ENABLE_FUSE      NOSCANE

// Options for low voltage programming fuse:
// NOLVP                         No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
// LVP                           Low Voltage Programming on B3(PIC16) or B5(PIC18)
#define LVP_FUSE                 NOLVP

// Options for Code Protection from external reading/writing fuse:
// PROTECT                       Code protected from external reads/writes
// NOPROTECT                     Code not protected from external reading/writing
#define CODE_PROTECT_FUSE        NOPROTECT

// Options for Data EEPROM Code Protection from external reading/writing fuse:
// CPD                           Data EEPROM Code Protected
// NOCPD                         No EE protection
#define EEPROM_PROTECT_FUSE      NOCPD

// All possible fuses (in configuration words 1 to 5):
#fuses EXTERNAL_OSCILLATOR_FUSE
//#fuses STARTUP_OSCILLATOR_FUSE
#fuses CLKOUT_FUSE
#fuses CLOCK_SWITCH_ENABLE_FUSE
#fuses EXT_OSCILLATOR_MONITOR_FUSE
#fuses MCLR_FUSE
#fuses PUT_FUSE
#fuses LOW_POWER_BOR_ENABLE_FUSE
#fuses BROWNOUT_RESET_FUSE
#fuses BROWNOUT_VOLTAGE_FUSE
#fuses ZCD_ENABLE_FUSE
#fuses PPS_CONFIGURATION_FUSE
#fuses STACK_RESET_FUSE
#fuses DEBUG_FUSE
#fuses WDT_POSTSCALE_FUSE
#fuses WDT_FUSE
#fuses WDT_WINDOW_FUSE
#fuses WDT_CLOCK_FUSE
#fuses PROGRAM_MEMORY_WRITE_PROTECT_FUSE
#fuses SCANNER_ENABLE_FUSE
#fuses LVP_FUSE
#fuses CODE_PROTECT_FUSE
#fuses EEPROM_PROTECT_FUSE


   
#use delay(clock=32MHz, restart_wdt)    // using the 16 MHz HFINTOSC with 2x PLL for 32 MHz internal clock
