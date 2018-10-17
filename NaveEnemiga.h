#include "Bresenham.h"
#include <conio.h>
#include <winbgim.h>

class NaveEnemiga
{
    public:

        void figuraEnemiga();
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

//====================================FIN DE PINTAR LA FIGURA DE NEGRO============================================================000
void NaveEnemiga::figuraEnemiga()
{
    Bresenham enem ;
        //trazarLinea( xInicial, yInicial, xFinal, yFinal, int color )
        //el color verde es el 7
//=========================La parte del contorno de la figura===============================================
        //Linea 1 yInicial-15 por que va hacia arriba && yFinal-15 todo sigue igual
        enem.trazarLinea( 410 , 200 , 454 , 200 ,2 );
        //Linea 2
        enem.trazarLinea( 454 , 200 , 454 , 206 , 2 );
        //Linea 3
        enem.trazarLinea( 454 , 206 , 438 , 206 , 2 );
        //Linea 4
        enem.trazarLinea( 438 , 206 , 438 , 212 , 2 );
        //Linea 5
        enem.trazarLinea( 438 , 212 , 444 , 212 , 2 );
        //Linea 6
        enem.trazarLinea( 444 , 212 , 444 , 215 , 2 );
        //Linea 7
        enem.trazarLinea( 444 , 215 , 449 , 215 , 2 );
        //Linea 8
        enem.trazarLinea( 449 , 215 , 449 , 221 , 2 );
        //Linea 9
        enem.trazarLinea( 449 , 221 , 454 , 221 , 2 );
        //Linea 10
        enem.trazarLinea( 454 , 221 , 454 , 235 , 2 );
        //Linea 11
        enem.trazarLinea( 410 , 235 , 454 , 235 , 2 );
        //Linea 12 aumenta 14
        enem.trazarLinea( 410 , 221 , 410 , 235 , 2 );
        //Linea 13
        enem.trazarLinea( 415 , 221 , 410 , 221 , 2 );
        //Linea 14
        enem.trazarLinea( 415 , 215 , 415 , 221 , 2 );
        //Linea 15
        enem.trazarLinea( 420 , 215 , 415 , 215 , 2 );
        //Linea 16
        enem.trazarLinea( 420 , 212 , 420 , 215 , 2 );
        //Linea 17
        enem.trazarLinea( 426 , 212 , 420 , 212 , 2 );
        //Linea 18
        enem.trazarLinea( 426 , 206 , 426 , 212 , 2 );
        //Linea 19
        enem.trazarLinea( 410 , 206 , 426 , 206 , 2 );
        //Linea 20
        enem.trazarLinea( 410 , 200 , 410 , 206 , 2 );
//=================================================================================================================
//===================================La parte del centro de la nave================================================
//===========================================PRIMER OJO============================================================
        enem.trazarLinea( 426,218,421,218,4);
        enem.trazarLinea( 426,218,426,220,4);
        enem.trazarLinea( 426,220,421,220,4);
        enem.trazarLinea( 421,218,421,220,4);
//=================================================================================================================
//=============================================SEGUNDO OJO=========================================================
//=================================================================================================================
        enem.trazarLinea( 438,218,443,218,4);
        enem.trazarLinea( 443,218,443,220,4);
        enem.trazarLinea( 443,220,438,220,4);
        enem.trazarLinea( 438,220,438,218,4);
//=================================================================================================================
//=================================================BOCA============================================================
//=================================================================================================================
        enem.trazarLinea( 443,226,421,226,4);
        enem.trazarLinea( 443,226,443,228,4);
        enem.trazarLinea( 443,228,421,228,4);
        enem.trazarLinea( 421,228,421,226,4);
}
