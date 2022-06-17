#include "stdio.h"
#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
	printf("Hola\n");
   initwindow(800, 400, "First Sample");
    circle(200, 200, 100);
    while (!kbhit( ))
    {
        delay(200);
    }
    return 0;
}

/*
int main( )
{
    initwindow(400, 300, "First Sample");
    circle(100, 50, 40);
    while (!kbhit( ))
    {
        delay(200);
    }
    return 0;
}
*/