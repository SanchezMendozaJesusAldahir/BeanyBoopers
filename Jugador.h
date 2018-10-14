#include "Bresenham.h"
#include <conio.h>
#include <winbgim.h>

class Jugador
{
    public:
        //Jugador( );
        void crearNave();
        //void moverNaveArriba(int, int , int ,int , int, int, int, int, int, int, int, int, int);
        void moverNaveArriba(int);
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

};

void Jugador::crearNave()
{
    //===============================PRUEBA DE LA NAVE JUGADOR=================================================
    Bresenham tr ;
    //trazarLinea( xInicial, yInicial, xFinal, yFinal, int color )
    //Linea 1
    tr.trazarLinea( 410     , 495     , 435  , 495  ,5 );
    //Linea 2
    tr.trazarLinea( 410     , 530     , 435  , 530  ,5 );
    //Linea 3 Se mantiene igual en x
    tr.trazarLinea( 410     , 495     , 410  , 500  ,6 );
    //Linea 4 Se mantiene igual en x
    tr.trazarLinea(435      , 495     , 435  , 500  ,6 );
    //Linea 5 Se mantiene igual en y
    tr.trazarLinea(435      , 500     , 440  , 500  ,7 );
    //Linea 6 se mantiene igual en y
    tr.trazarLinea(410      , 500     , 405  , 500  ,7 );
    //Linea 7 se mantiene igual en x pero y sumo 7 a el valor de 500 en xInicial
    tr.trazarLinea(405  , 500     , 405  , 507  ,6 );
    //Linea 8 se mantien el valot de x pero se suma 10 e el valor de x final
    tr.trazarLinea(440      , 500     , 440  , 507  ,6 ); //Aqui cambie el valor de 507 a 500
    //Linea 9 se mantiene en y pero se la resta 5 a x
    tr.trazarLinea(405      , 507     , 400  , 507  ,7);
    //Linea 10 se mantien el valot de y pero se suma en x
    tr.trazarLinea(440      , 507     , 445  , 507  ,7 );
    //Linea 11 se mantiene el valor en x se decrementa en y
    tr.trazarLinea(400      , 507     , 400  , 520  ,6);
    //Linea 12 se mantiene el valor  en x
    tr.trazarLinea(445      , 507     , 445  , 520 , 6 );
    //Linea 13 se mantiene en y
    tr.trazarLinea(400      , 520     ,  405 , 520 ,7);
    //Linea 14 se mantiene en y
    tr.trazarLinea(445      , 520     , 440  , 520 , 7 );
    //Linea 15 se mantiene en x se mueve en y
    tr.trazarLinea(405      , 520     , 405  , 525 ,6);
    //Linea 16 se mantiene en x aumenta  en y
    tr.trazarLinea(440      , 520     , 440  , 525 ,6 );
    //Linea 17 se mantiene en y aumenta en x (usa 15)
    tr.trazarLinea(405      , 525     , 410  , 525 ,7);
    //Linea 18 se mantiene en y decrementa 5 x (usa 16)
    tr.trazarLinea(440      , 525     , 435  , 525 ,7);
    //Linea 19 se mantiene en x incrementa y usa ( 17 y 2)
    tr.trazarLinea(410      , 525     ,410   , 530,2);
    //Linea 20 se mantiene en x incrementa en y usa (18 y 2)
    tr.trazarLinea(435      , 525     , 435  , 530,2);

    //==============================Fin de las lineas de frente=================================
    //Linea cabina1
         tr.trazarLinea( 418     , 500     , 427  , 500  ,5 );
    //Linea cabina2
         tr.trazarLinea( 418     , 500     , 427  , 500  ,5 );
    //Linea cabina3 se mantiene x aumenta y
         tr.trazarLinea( 418     , 500     , 418  , 502  , 6);
    //Linea cabina4 se mantiene x aumenta y
         tr.trazarLinea( 427     , 500     , 427  , 502  , 6);
    //Linea cabina5 se mantiene y aumenta x --------------- izquierda usa 3
         tr.trazarLinea(418      , 502     , 415  , 502  , 5);
    //Linea cabina6 se mantiene y aumenta x ---------------derecha
         tr.trazarLinea(427      , 502     , 430  , 502  , 5);
    //Linea cabina7
         tr.trazarLinea(430      , 502     , 431  , 502  , 6);

    //LINEAS =================INMEDIO================================
        //Linea cabina8 izquierda abajo
         tr.trazarLinea(415      , 502     , 415  , 504  , 5);
         //Linea cabina9 derecha derecha
         tr.trazarLinea(431      ,502      , 431  ,504   , 5);
        //===================================================0
         tr.trazarLinea(415      , 504     , 418  ,504   , 6);
         tr.trazarLinea(431      , 504     , 427  ,504   , 6);
    //ULTIMAS LINEAS DE ABAJO
         tr.trazarLinea(418      ,504      ,418   , 507  ,8);
         tr.trazarLinea(427      ,504      ,427   , 507  ,8);

    //Linea cabina final de abajo
         tr.trazarLinea( 418     , 507     , 427  , 507  ,5 );
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


//=======================FIN DE LAS PRUEBAS PARA CONSTRUIT LA NAVE DEL JUGADOR===============================
}
void Jugador::moverNaveArriba(int numactivacion)
{
    if(numactivacion==1)
    {
            //, e, f, g, h, i, j, k, l, m
        Bresenham trd ;
        //trazarLinea( xInicial, yInicial, xFinal, yFinal, int color )
        //Linea 1 yInicial-15 por que va hacia arriba && yFinal-15 todo sigue igual
        trd.trazarLinea( a     , b-15     , c  , b-15  ,5 );
        //Linea 2 todas las y decrementa menos 15
        trd.trazarLinea( a     , d-15     , c  , d-15  ,5 );
        //Linea 3 Se mantiene igual en x
        //trd.trazarLinea( a     , b-15     , a  , e-15  ,6 );
        //Linea 4 Se mantiene igual en x
        //trd.trazarLinea(c      , b-15     , c  , e-15  ,6 );
        //Linea 5 Se mantiene igual en y
        //trd.trazarLinea(c      , e-15     , f  , e-15  ,7 );
        //Linea 6 se mantiene igual en y
        //trd.trazarLinea(a      , e-15     , h  , e-15  ,7 );
        //Linea 7 se mantiene igual en x pero y sumo 7 a el valor de 500 en xInicial
        //trd.trazarLinea(h      , e-15     , h  , i-15  ,6 );
        //Linea 8 se mantien el valot de x pero se suma 10 e el valor de x final
        //trd.trazarLinea(f      , e-15     , f  , i-15  ,6 ); //Aqui cambie el valor de 507 a 500
        //Linea 9 se mantiene en y pero se la resta 5 a x
        //trd.trazarLinea(h      , i-15     , j  , i-15  ,7);
        //Linea 10 se mantien el valot de y pero se suma en x
        //trd.trazarLinea(f      , i-15     , k  , i-15  ,7 );
        //Linea 11 se mantiene el valor en x se decrementa en y
        //trd.trazarLinea(j      , i-15     , j  , l-15  ,6);
        //Linea 12 se mantiene el valor  en x
        //trd.trazarLinea(k      , i-15     , k  , l-15 , 6 );
        //Linea 13 se mantiene en y
        //trd.trazarLinea(j      , l-15     , k  , l-15 , 7);
        //Linea 14 se mantiene en y
        //trd.trazarLinea(k      , l-15     , j  , l-15 , 7 );
        //Linea 15 se mantiene en x se mueve en y
        //trd.trazarLinea(h      , l-15     , h  , m-15 , 6);
        //Linea 16 se mantiene en x aumenta  en y
        //trd.trazarLinea(f      , l-15     , f  , m-15 , 6 );
        //Linea 17 se mantiene en y aumenta en x (usa 15)
        //trd.trazarLinea(h      , m-15     , f  , m-15 , 7);
        //Linea 18 se mantiene en y decrementa 5 x (usa 16)
        //trd.trazarLinea(f      , m-15     , c  , m-15 , 7);
        //Linea 19 se mantiene en x incrementa y usa ( 17 y 2)
        //trd.trazarLinea(g      , m-15     , a  , d-15 , 2);
        //Linea 20 se mantiene en x incrementa en y usa (18 y 2)
        //trd.trazarLinea(c      , m-15     , c  , d-15 , 2);
    }

}


