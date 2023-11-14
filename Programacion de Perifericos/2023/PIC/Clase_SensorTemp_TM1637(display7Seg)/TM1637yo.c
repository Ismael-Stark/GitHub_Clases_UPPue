
 
// CCS
//!#BIT clk = 0xF81.0                       // Pin mapped to PORTB.0
//!#BIT dio = 0xF81.1                       // Pin mapped to PORTB.1        
 
                        /*0*/ /*1*/ /*2*/ /*3*/ /*4*/ /*5*/ /*6*/ /*7*/ /*8*/ /*9*/
unsigned char digits[]={0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
//!const int8 digitToSegment[] = {0x3f,0x06,0x5b,0x4f,
//!                        0x66,0x6d,0x7d,0x07,
//!                        0x7f,0x6f,0x77,0x7c,
//!                        0x39,0x5e,0x79,0x71};//0~9,A,b,C,d,E,F
//!const int8 digits[] = {
//!  0b00111111,    // 0
//!  0b00000110,    // 1
//!  0b01011011,    // 2
//!  0b01001111,    // 3
//!  0b01100110,    // 4
//!  0b01101101,    // 5
//!  0b01111101,    // 6
//!  0b00000111,    // 7
//!  0b01111111,    // 8
//!  0b01101111,    // 9
//!  0b01110111,    // A
//!  0b01111100,    // b
//!  0b00111001,    // C
//!  0b01011110,    // d
//!  0b01111001,    // E
//!  0b01110001};   // F
//!//  };
//!#define bright LOW_BRIGHT
//!#define LOW_BRIGHT 0X00
//!#define MID_BRIGHT 0X02
//!#define MAX_BRIGHT 0X07

///  ====== START ========================================
void TM1637_start (){
   CLK_HIGH;
   DIO_HIGH;
   delay_us(2);
   //CLK_LOW;
   DIO_LOW;
}
///  ====== STOP =========================================
void TM1637_stop (){
   CLK_LOW; delay_us(2);
   DIO_LOW; delay_us(2);
   CLK_HIGH; delay_us(2);
   DIO_HIGH;
}
///  ====== ASK ==========================================
void TM1637_ask (void){
   CLK_LOW; delay_us(5);
   //tdio=1;
   while(input(PIN_DIO)==1);
   //tdio=0;
   CLK_HIGH; delay_us(2);
   CLK_LOW;
}

///  ====== WRITE A BYTE =================================
void TM1637_WrByte (unsigned char oneByte){
   unsigned char i;
   for (i=0;i<8;i++){
      CLK_LOW;
      if ((oneByte & 0x01)==1) // low front
         {DIO_HIGH;}
      else {DIO_LOW;}
      delay_us(3);
      oneByte = oneByte >> 1;
      CLK_HIGH;  delay_us(3);
   }
}

void TM1637_init(unsigned int8 brillo){
   unsigned char i;
   unsigned int8 x = 0x88 + brillo;
   TM1637_start();
   TM1637_WrByte(0x40); //40H address is automatically incremented by 1 mode,44H fixed address mode
   TM1637_ask();
   TM1637_stop();
   TM1637_start();
   TM1637_WrByte(0xc0); // Set the first address
   TM1637_ask();
   for(i=0;i<6;i++){ // Addresses from Canada, do not always write address
      TM1637_WrByte(0xff); // Send data
      TM1637_ask();}
   TM1637_stop();
   TM1637_start();
   //TM1637_WrByte(0x8f);  // Open display, maximum brightness
   TM1637_WrByte(x);
   TM1637_ask();
   TM1637_stop();
}

///  Esta función envía al módulo TM1637 un byte con la representación en 7 segmentos en la  posción nDigit
void TM1637_Display(unsigned char segment, unsigned char nDigit){
   TM1637_start();
   TM1637_WrByte(0x44);
   TM1637_ask();
   TM1637_stop();
   TM1637_start();
   TM1637_WrByte(0xC0 | (nDigit & 0x07));
   TM1637_ask();
   TM1637_WrByte(segment);
   TM1637_ask();
   TM1637_stop();
}
/// ================================================
//  Esta función envía 4 caracteres al módulo TM1637 desde la posición 0 hasta la 4 de los segmentos
void TM1637_DisplayAll(unsigned char segment0, unsigned char segment1, unsigned char segment2,unsigned char segment3){
   TM1637_start();
   TM1637_WrByte(0x40);
   TM1637_ask();
   TM1637_stop();
   TM1637_start();
   TM1637_WrByte(0xC0);
   TM1637_ask();
   TM1637_WrByte(segment0);   TM1637_ask();
   TM1637_WrByte(segment1);   TM1637_ask();
   TM1637_WrByte(segment2);   TM1637_ask();
   TM1637_WrByte(segment3);   TM1637_ask();
   TM1637_stop();
}
