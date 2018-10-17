#include "Bresenham.h"
#include <conio.h>

class Puntos
{
    public:
        //Jugador( );
        void fPuntos( int x , int y );
        int a=0;
        int b=0;
        int c=0;
        int d=0;
        int e=0;
        int f=0;
        int g=0;
        int h=0;
        int i=0;
        int j=0;
        int k=0;
        int l=0;
        int m=0;
//=============================================================================
        int n=0;
        int o=0;
        int p=0;
        int q=0;
        int r=0;
        int s=0;
        int t=0;
        int u=0;
        int v=0;
        int w=0;
        int x=0;

};
//====================================FIGURA QUE MUESTRA LOS PUNTOS==================================
void Puntos::fPuntos( int y , int x)
    {
        Bresenham fig ;
        //trazarLinea( xInicial, yInicial, xFinal, yFinal, int color )
        //Linea 1 yInicial-15 por que va hacia arriba && yFinal-15 todo sigue igual
        fig.trazarLinea( 80 +x    , 60 + y    , 86 +x , 60 + y   , 3);
        //Linea 2
        fig.trazarLinea( 86  +x   , 60 +y    , 86 +x , 66 +y , 3);
        //Linea 3 se mantiene en y
        fig.trazarLinea( 86   +x  , 66  + y   , 92 +x , 66+y  , 3);
        //Linea 4---------
        fig.trazarLinea( 92  +x   , 66 +y    , 92 +x , 60+y  , 3);
        //Linea 5
        fig.trazarLinea( 92  +x   , 60+y     , 100 +x , 60 +y, 3);
        //Linea 6
        fig.trazarLinea( 100  +x  , 60   +y  , 100 +x , 68+y , 3);
        //Linea 7----------------------------------------------------
        fig.trazarLinea( 100  +x  , 68   +y  , 92 +x  , 68 +y, 3);
        //Linea 8
        fig.trazarLinea( 92+x, 68 + y, 92+x, 86 + y , 3);
        //Linea 9
        fig.trazarLinea( 86 +x, 86+y, 92+x , 86 +y, 3);
        //Linea 10
        fig.trazarLinea( 86 +x, 86+y , 86 , 92+y, 3);
        //Linea 11
        fig.trazarLinea( 86 +x, 92+y , 80 +x, 92+y , 3);
        //Linea 12
        fig.trazarLinea( 80 +x , 92+y, 80,86+y,3 );
        //Linea 13
        fig.trazarLinea( 80+x,86+y,74+x,86+y,3);
        //Linea 14
        fig.trazarLinea(74+x,68+y,74+x,86+y,3);
        //Linea 15
        fig.trazarLinea(66+x, 68+y,74+x,68+y,3);
        //Linea 16
        fig.trazarLinea(66+x,60+y,66+x, 68+y,3);
        //Linea 17
        fig.trazarLinea(74+x,60+y, 66+x,60+y ,3);
        //Linea 18
        fig.trazarLinea(74+x,66+y, 74+x,60+y ,3);
        //Linea 19
        fig.trazarLinea(80 +x, 66+y, 74+x,66+y ,3);
        //Linea 20
        fig.trazarLinea( 80+x  , 60+y , 80+x , 66+y , 3);
    }
