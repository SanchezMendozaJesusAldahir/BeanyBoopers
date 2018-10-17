#include <conio.h>
#include <winbgim.h>
#include <pthread.h>
#include <iostream>
#include "Bresenham.h"
#include "Cuadrado.h"
#include "Jugador.h"
#include "NaveEnemiga.h"
#include "FiguraPuntos.h"


using namespace std;

void figuras();

int main(void)
{

    initwindow (900,600);
    Cuadrado m( 40,40,800,500);
    m.setColor(2);

    m.dibujar();



figuras();

    getch();
    closegraph();
}

void figuras( )
{
    Jugador jg;
    FiguraPuntos fp;
    NaveEnemiga naem;
    jg.crearNave();
    fp.fPuntos();
    naem.figuraEnemiga();
    //El metid kbnit() esta en conio.



    Cuadrado c( 250,150,100,130);
    c.setColor(15);
    c.dibujar();

    Cuadrado a(500,150,100,130);
    a.setColor(15);
    a.dibujar();
    Cuadrado p( 250,0,50,40);
    while( true )
    {
        a.setColor(0);
        a.dibujar();
        a.trasladarY(2);
        a.setColor(15);
        a.dibujar();

        c.setColor(0);
        c.dibujar();
        c.trasladarY(2);
        c.setColor(15);
        c.dibujar();


        if( kbhit() )
   		{
   			char tecla = getch();
   			if(tecla == 72)
                {
                    jg.moverNaveArriba();
   				    cout<<"puto";
                }

        }

        Sleep(50);
        //cout << a.getY();
        if( c.getY() == 160 && a.getY() == 160 )
        {

            p.setColor(0);
            p.dibujar();
            p.setColor(0);
            p.dibujar();
            p.trasladarY(2);
            p.setColor(15);
            p.dibujar();
        }
    }

}

