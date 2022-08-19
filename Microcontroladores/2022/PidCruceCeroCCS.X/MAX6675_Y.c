//!#define TC_DATA   PIN_A0 
//!#define TC_CS     PIN_A1 
//!#define TC_CLK    PIN_A2 

int1 MAX66_error; 

void MAX66_init(void){ 
   output_low(TC_CLK); 
   //output_low(TC_DATA); 
   output_high(TC_CS); 
}

int16 read_Termopar(void){
   //int8 i;
   int16 data;
   output_low(TC_CS);   
   delay_us(1);
   for (int i=0;i<16;i++){
      shift_left(&data,2,input(TC_DATA));
      output_high(TC_CLK);
      delay_us(1);
      output_low(TC_CLK); 
      delay_us(1);
   }
   MAX66_error = bit_test(data,2);
   delay_us(50);
   output_high(TC_CS);
   data = (0x0FFF & (data>>3)); 
   return(data); 
} 

float MAX66_readC(void){
   int16 x;
   MAX66_init();
   //delay_ms(200); //la hoja de datos recomienda 0.22 Seg
   //delay_ms(100);
   delay_us(50);
   x = read_Termopar();
   //x >>= 3;
   //x &= 0x0FFF;
   //x = (0x0FFF & (x>>3)); 
   return((float)x/4.0);
   //return(((float)x-44)/2.021142857); 
   //return (float)x*0.25;
}
float MAX66_readF(void){
   int16 x;
   MAX66_init();
   //delay_ms(200); //la hoja de datos recomienda 0.22 Seg
   //delay_ms(100);
   delay_us(50);
   x = read_Termopar();
//!   x=(0x0FFF & (x>>4)); 
//!   x >>= 3;   
   return(  (((float)x/4.0)*(9/5))+32   );
}
