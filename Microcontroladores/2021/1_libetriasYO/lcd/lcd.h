
#ifndef lcd
#define	lcd

//#include "p18cxxx.h"
//#include <stdint.h>

#define RS LATDbits.LD0
#define EN LATDbits.LD2
#define D4 LATDbits.LD7
#define D5 LATDbits.LD6
#define D6 LATDbits.LD5
#define D7 LATDbits.LD4

/*#define RS RD0
#define EN RD2
#define D4 RD7
#define D5 RD6
#define D6 RD5
#define D7 RD4*/

void Lcd_Port(char a);
void Lcd_Cmd(char a);
void lcd_clear();
void lcd_gotoxy(char a, char b);
void lcd_init();
void lcd_write_char(char a);
void lcd_putc(char *a);
void lcd_shift_right();
void lcd_shift_left();

#endif

