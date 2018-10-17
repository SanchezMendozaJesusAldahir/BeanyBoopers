#include "Bresenham.h"
#include <conio.h>
#include <winbgim.h>

class FiguraPuntos
{
    public:
        //Jugador( );
        void fPuntos();
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
void FiguraPuntos::fPuntos()
    {
        Bresenham fig ;
        //trazarLinea( xInicial, yInicial, xFinal, yFinal, int color )
        //Linea 1 yInicial-15 por que va hacia arriba && yFinal-15 todo sigue igual
        fig.trazarLinea( 80     , 60     , 86  , 60  , 3);
        //Linea 2
        fig.trazarLinea( 86     , 60     , 86  , 66  , 3);
        //Linea 3 se mantiene en y
        fig.trazarLinea( 86     , 66     , 92  , 66  , 3);
        //Linea 4---------
        fig.trazarLinea( 92     , 66     , 92  , 60  , 3);
        //Linea 5
        fig.trazarLinea( 92     , 60     , 100  , 60 , 3);
        //Linea 6
        fig.trazarLinea( 100    , 60     , 100  , 68 , 3);
        //Linea 7----------------------------------------------------
        fig.trazarLinea( 100    , 68     , 92   , 68 , 3);
        //Linea 8
        fig.trazarLinea( 92     , 68     , 92   , 86 , 3);
        //Linea 9
        fig.trazarLinea( 86 , 86, 92 , 86 , 3);
        //Linea 10
        fig.trazarLinea( 86 , 86 , 86 , 92, 3);
        //Linea 11
        fig.trazarLinea( 86 , 92 , 80 , 92 , 3);
        //Linea 12
        fig.trazarLinea( 80 , 92, 80,86,3 );
        //Linea 13
        fig.trazarLinea( 80,86,74,86,3);
        //Linea 14
        fig.trazarLinea(74,68,74,86,3);
        //Linea 15
        fig.trazarLinea(66, 68,74,68,3);
        //Linea 16
        fig.trazarLinea(66,60,66, 68,3);
        //Linea 17
        fig.trazarLinea(74,60, 66,60 ,3);
        //Linea 18
        fig.trazarLinea(74,66, 74,60 ,3);
        //Linea 19
        fig.trazarLinea(80 , 66, 74,66 ,3);
        //Linea 20
        fig.trazarLinea( 80  , 60 , 80 , 66 , 3);
    }
