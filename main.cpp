#include <conio.h>
#include <winbgim.h>
#include "Bresenham.h"
int main()
{
    initwindow (600,400);
    Bresenham b;
    setcolor(15);
    //setlinestyle(1, 0, 1);
    //putpixel(100,8,15);
    //bar(10, 10, 50, 50);
    b.trazarLinea(0,0,30,40);
    getch();
    closegraph();
}
