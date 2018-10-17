#include "Bresenham.h"
#include <conio.h>
#include <winbgim.h>

class Jugador
{
    public:
        //Jugador( );
        void crearNave();
        void moverNaveArriba();
        void figuraNegro();

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

void Jugador::crearNave()
{
    //===============================PRUEBA DE LA NAVE JUGADOR=================================================
    Bresenham tr ;
    //trazarLinea( xInicial, yInicial, xFinal, yFinal, int color )
    //Linea 1
    tr.trazarLinea( 410, 495, 435, 495,6 );
    //Linea 2
    tr.trazarLinea( 410, 530, 435, 530,6 );
    //Linea 3 Se mantiene igual en x
    tr.trazarLinea( 410, 495, 410, 500,6 );
    //Linea 4 Se mantiene igual en x
    tr.trazarLinea(435, 495, 435, 500, 6 );
    //Linea 5 Se mantiene igual en y
    tr.trazarLinea(435, 500, 440, 500, 6 );
    //Linea 6 se mantiene igual en y
    tr.trazarLinea(410, 500, 405, 500, 6 );
    //Linea 7 se mantiene igual en x pero y sumo 7 a el valor de 500 en xInicial
    tr.trazarLinea(405, 500, 405, 507, 6 );
    //Linea 8 se mantien el valot de x pero se suma 10 e el valor de x final
    tr.trazarLinea(440, 500, 440, 507, 6 ); //Aqui cambie el valor de 507 a 500
    //Linea 9 se mantiene en y pero se la resta 5 a x
    tr.trazarLinea(405, 507, 400, 507, 6 );
    //Linea 10 se mantien el valot de y pero se suma en x
    tr.trazarLinea(440, 507, 445, 507, 6 );
    //Linea 11 se mantiene el valor en x se decrementa en y
    tr.trazarLinea(400, 507, 400, 520, 6 );
    //Linea 12 se mantiene el valor  en x
    tr.trazarLinea(445, 507, 445, 520, 6 );
    //Linea 13 se mantiene en y
    tr.trazarLinea(400, 520, 405, 520, 6 );
    //Linea 14 se mantiene en y
    tr.trazarLinea(445, 520, 440, 520, 6 );
    //Linea 15 se mantiene en x se mueve en y
    tr.trazarLinea(405, 520, 405, 525, 6 );
    //Linea 16 se mantiene en x aumenta  en y
    tr.trazarLinea(440, 520, 440, 525, 6 );
    //Linea 17 se mantiene en y aumenta en x (usa 15)
    tr.trazarLinea(405, 525, 410, 525, 6 );
    //Linea 18 se mantiene en y decrementa 5 x (usa 16)
    tr.trazarLinea(440, 525, 435, 525, 6);
    //Linea 19 se mantiene en x incrementa y usa ( 17 y 2)
    tr.trazarLinea(410, 525, 410, 530, 6);
    //Linea 20 se mantiene en x incrementa en y usa (18 y 2)
    tr.trazarLinea(435, 525, 435, 530, 6);
    //==============================Fin de las lineas de frente=================================
    //Linea cabina1
         tr.trazarLinea(418, 500, 427, 500, 6);
    //Linea cabina2
         tr.trazarLinea(418, 500, 427, 500, 6);
    //Linea cabina3 se mantiene x aumenta y
         tr.trazarLinea(418, 500, 418, 502, 6);
    //Linea cabina4 se mantiene x aumenta y
         tr.trazarLinea(427, 500, 427, 502, 6);
    //Linea cabina5 se mantiene y aumenta x --------------- izquierda usa 3
         tr.trazarLinea(418, 502, 415, 502, 6);
    //Linea cabina6 se mantiene y aumenta x ---------------derecha
         tr.trazarLinea(427, 502, 430, 502, 6);
    //Linea cabina7
         tr.trazarLinea(430, 502, 431, 502, 6);
    //LINEAS =================INMEDIO================================
        //Linea cabina8 izquierda abajo
         tr.trazarLinea(415, 502, 415, 504, 6);
         //Linea cabina9 derecha derecha
         tr.trazarLinea(431, 502, 431, 504, 6);
        //===================================================0
         tr.trazarLinea(415, 504, 418, 504, 6);
         tr.trazarLinea(431, 504, 427, 504, 6);
    //ULTIMAS LINEAS DE ABAJO
         tr.trazarLinea(418, 504, 418, 507, 6);
         tr.trazarLinea(427, 504, 427, 507, 6);
    //Linea cabina final de abajo
         tr.trazarLinea(418, 507, 427, 507, 6);
    //LOS ABUERLOS DE LA NADA - MIL HORAS
    //===================================VALORES ASIGNADOS PARA MANTENERLOS GUARDADOS===========================================
     a=410;
     b=495;
     c=435;
     d=530;
     e=500;
     f=440;
     g=410;
     h=405;
     i=507;
     j=400;
     k=445;
     l=520;
     m=525;

     //=============================================================
     n=418;
     o=500;
     p=427;
     q=502;
     r=427;
     s=415;
     t=430;
     u=431;
     v=504;
     w=507;
     x=418;
//=======================FIN DE LAS PRUEBAS PARA CONSTRUIT LA NAVE DEL JUGADOR===============================
}
void Jugador::moverNaveArriba()
{
        figuraNegro();
        Bresenham trd ;
        //trazarLinea( xInicial, yInicial, xFinal, yFinal, int color )
        //Linea 1 yInicial-15 por que va hacia arriba && yFinal-15 todo sigue igual
        trd.trazarLinea( a     , b-15     , c  , b-15  ,6 );
        //Linea 2 todas las y decrementa menos 15
        trd.trazarLinea( a     , d-15     , c  , d-15  ,6 );
        //Linea 3 Se mantiene igual en x
        trd.trazarLinea( a     , b-15     , a  , e-15  ,6 );
        //Linea 4 Se mantiene igual en x
        trd.trazarLinea(c      , b-15     , c  , e-15  ,6 );
        //Linea 5 Se mantiene igual en y
        trd.trazarLinea(c      , e-15     , f  , e-15  ,6 );
        //Linea 6 se mantiene igual en y
        trd.trazarLinea(a      , e-15     , h  , e-15  ,6 );
        //Linea 7 se mantiene igual en x pero y sumo 7 a el valor de 500 en xInicial
        trd.trazarLinea(h      , e-15     , h  , i-15  ,6 );
        //Linea 8 se mantien el valot de x pero se suma 10 e el valor de x final
        trd.trazarLinea(f      , e-15     , f  , i-15  ,6 ); //Aqui cambie el valor de 507 a 500
        //Linea 9 se mantiene en y pero se la resta 5 a x
        trd.trazarLinea(h      , i-15     , j  , i-15  ,6);
        //Linea 10 se mantien el valot de y pero se suma en x
        trd.trazarLinea(f      , i-15     , k  , i-15  ,6 );
        //Linea 11 se mantiene el valor en x se decrementa en y
        trd.trazarLinea(j      , i-15     , j  , l-15  ,6);
        //Linea 12 se mantiene el valor  en x
        trd.trazarLinea(k      , i-15     , k  , l-15 , 6 );
        //Linea 13 se mantiene en y
        trd.trazarLinea(j      , l-15     , k  , l-15 , 6);
        //Linea 14 se mantiene en y
        trd.trazarLinea(k      , l-15     , j  , l-15 , 6 );
        //Linea 15 se mantiene en x se mueve en y
        trd.trazarLinea(h      , l-15     , h  , m-15 , 6);
        //Linea 16 se mantiene en x aumenta  en y
        trd.trazarLinea(f      , l-15     , f  , m-15 , 6 );
        //Linea 17 se mantiene en y aumenta en x (usa 15)
        trd.trazarLinea(h      , m-15     , f  , m-15 , 6);
        //Linea 18 se mantiene en y decrementa 5 x (usa 16)
        trd.trazarLinea(f      , m-15     , c  , m-15 , 6);
        //Linea 19 se mantiene en x incrementa y usa ( 17 y 2)
        trd.trazarLinea(g      , m-15     , a  , d-15 , 6);
        //Linea 20 se mantiene en x incrementa en y usa (18 y 2)
        trd.trazarLinea(c      , m-15     , c  , d-15 , 6);
//===================================================================================================
        //Linea cabina1
         trd.trazarLinea(n, o-15, p, o-15, 6);
    //Linea cabina2
         trd.trazarLinea(n, o-15, p, o-15, 6);
    //Linea cabina3 se mantiene x aumenta y
         trd.trazarLinea(n, o-15, n, q-15, 6);
    //Linea cabina4 se mantiene x aumenta y
         trd.trazarLinea(r, o-15, p, q-15, 6);
    //Linea cabina5 se mantiene y aumenta x --------------- izquierda usa 3
         trd.trazarLinea(n, q-15, s, q-15, 6);
    //Linead cabina6 se mantiene y aumenta x ---------------derecha
         trd.trazarLinea(p, q-15, t, q-15, 6);
    //Linea cabina7
         trd.trazarLinea(t, q-15, u, q-15, 6);
    //LINEAS =================INMEDIO================================
        //Linea cabina8 izquierda abajo
         trd.trazarLinea(s, q-15, s, v-15, 6);
         //Linea cabina9 derecha derecha
         trd.trazarLinea(u, q-15, u, v-15, 6);
        //===================================================0
         trd.trazarLinea(s, v-15, x, v-15, 6);
         trd.trazarLinea(u, v-15, p, v-15, 6);
    //ULTIMAS LINEAS DE ABAJO
         trd.trazarLinea(n, v-15, n, w-15, 6);
         trd.trazarLinea(p, v-15, p, w-15, 6);
    //Linea cabina final de abajo
         trd.trazarLinea(n, w-15, p, w-15, 6);
         //Pinta los elementos
         b=b-15;
         d=d-15;
         e=e-15;
         i=i-15;
         l=l-15;
         m=m-15;
         d=d-15;
         o=o-15;
         q=q-15;
         v=v-15;
         w=w-15;
}
//============Pintar de negro la ultima figura========================
void Jugador::figuraNegro()
{
    Bresenham trd ;
        //trazarLinea( xInicial, yInicial, xFinal, yFinal, int color )
        //Linea 1 yInicial-15 por que va hacia arriba && yFinal-15 todo sigue igual
        trd.trazarLinea( a     , b     , c  , b  ,0 );
        //Linea 2 todas las y decrementa menos 15
        trd.trazarLinea( a     , d     , c  , d  ,0 );
        //Linea 3 Se mantiene igual en x
        trd.trazarLinea( a     , b     , a  , e  ,0 );
        //Linea 4 Se mantiene igual en x
        trd.trazarLinea(c      , b     , c  , e  ,0 );
        //Linea 5 Se mantiene igual en y
        trd.trazarLinea(c      , e     , f  , e  ,0 );
        //Linea 6 se mantiene igual en y
        trd.trazarLinea(a      , e     , h  , e  ,0 );
        //Linea 7 se mantiene igual en x pero y sumo 7 a el valor de 500 en xInicial
        trd.trazarLinea(h      , e     , h  , i  ,0 );
        //Linea 8 se mantien el valot de x pero se suma 10 e el valor de x final
        trd.trazarLinea(f      , e     , f  , i  ,0 ); //Aqui cambie el valor de 507 a 500
        //Linea 9 se mantiene en y pero se la resta 5 a x
        trd.trazarLinea(h      , i     , j  , i  ,0);
        //Linea 10 se mantien el valot de y pero se suma en x
        trd.trazarLinea(f      , i     , k  , i  ,0 );
        //Linea 11 se mantiene el valor en x se decrementa en y
        trd.trazarLinea(j      , i     , j  , l  ,0);
        //Linea 12 se mantiene el valor  en x
        trd.trazarLinea(k      , i    , k  , l , 0 );
        //Linea 13 se mantiene en y
        trd.trazarLinea(j      , l    , k  , l , 0);
        //Linea 14 se mantiene en y
        trd.trazarLinea(k      , l     , j  , l , 0 );
        //Linea 15 se mantiene en x se mueve en y
        trd.trazarLinea(h      , l     , h  , m , 0);
        //Linea 16 se mantiene en x aumenta  en y
        trd.trazarLinea(f      , l     , f  , m , 0 );
        //Linea 17 se mantiene en y aumenta en x (usa 15)
        trd.trazarLinea(h      , m     , f  , m , 0);
        //Linea 18 se mantiene en y decrementa 5 x (usa 16)
        trd.trazarLinea(f      , m     , c  , m , 0);
        //Linea 19 se mantiene en x incrementa y usa ( 17 y 2)
        trd.trazarLinea(g      , m     , a  , d , 0);
        //Linea 20 se mantiene en x incrementa en y usa (18 y 2)
        trd.trazarLinea(c      , m     , c  , d , 0);
//============================================================================
        //Linea cabina1
         trd.trazarLinea(n, o, p, o, 0);
    //Linea cabina2
         trd.trazarLinea(n, o, p, o, 0);
    //Linea cabina3 se mantiene x aumenta y
         trd.trazarLinea(n, o, n, q, 0);
    //Linea cabina4 se mantiene x aumenta y
         trd.trazarLinea(r, o, p, q, 0);
    //Linea cabina5 se mantiene y aumenta x --------------- izquierda usa 3
         trd.trazarLinea(n, q, s, q, 0);
    //Linead cabina6 se mantiene y aumenta x ---------------derecha
         trd.trazarLinea(p, q, t, q, 0);
    //Linea cabina7
         trd.trazarLinea(t, q, u, q, 0);
    //LINEAS =================INMEDIO================================
        //Linea cabina8 izquierda abajo
         trd.trazarLinea(s, q, s, v, 0);
         //Linea cabina9 derecha derecha
         trd.trazarLinea(u, q, u, v, 0);
        //===================================================0
         trd.trazarLinea(s, v, x, v, 0);
         trd.trazarLinea(u, v, p, v, 0);
    //ULTIMAS LINEAS DE ABAJO
         trd.trazarLinea(n, v, n, w, 0);
         trd.trazarLinea(p, v, p, w, 0);
    //Linea cabina final de abajo
         trd.trazarLinea(n, w, p, w, 0);
}
