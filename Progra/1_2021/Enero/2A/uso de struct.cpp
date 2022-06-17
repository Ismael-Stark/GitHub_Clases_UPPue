#include "stdio.h"
typedef unsigned int 	uint16_t;
typedef unsigned char 	uint8_t;
typedef char 			int8_t;


typedef struct {
	union{
		uint16_t bitmapOffset; ///< Pointer into GFXfont->bitmap
	  uint8_t width;         ///< Bitmap dimensions in pixels
	  uint8_t height;        ///< Bitmap dimensions in pixels
	  uint8_t xAdvance;      ///< Distance to advance cursor (x axis)
	  int8_t xOffset;        ///< X dist from cursor pos to UL corner
	  int8_t yOffset; 
	};
         ///< Y dist from cursor pos to UL corner
} GFXglyph;


int main(){
	GFXglyph ejemplo;	
	ejemplo.bitmapOffset = 345;
	
	ejemplo.xOffset = 45;
	ejemplo.yOffset = 30;	
}