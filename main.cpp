#include <conio.h>
#include <winbgim.h>
#include "Bresenham.h"
#include "Cuadrado.h"
int main()
{
    initwindow (600,400);
    Cuadrado c( 100,100,150,150);
    c.dibujar();
    Cuadrado a(300,100,150,150);
    a.dibujar();
    a.moverX(100);
    a.color = 0;
    a.dibujar();
    getch();
    closegraph();
}
