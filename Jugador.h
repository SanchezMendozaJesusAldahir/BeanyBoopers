#include "Bresenham.h"
#include <conio.h>
#include <winbgim.h>

class Jugador
{
    public:
        //Jugador( );
        void crearNave();
};

void Jugador::crearNave()
{
    //===============================PRUEBA DE LA NAVE JUGADOR=================================================
    Bresenham b ;
    //trazarLinea( xInicial, yInicial, xFinal, yFinal, int color )
    //Linea 1
    b.trazarLinea( 410     , 495     , 435  , 495  ,5 );
    //Linea 2
    b.trazarLinea( 410     , 530     , 435  , 530  ,5 );
    //Linea 3 Se mantiene igual en x
    b.trazarLinea( 410     , 495     , 410  , 500  ,6 );
    //Linea 4 Se mantiene igual en x
    b.trazarLinea(435      , 495     , 435  , 500  ,6 );
    //Linea 5 Se mantiene igual en y
    b.trazarLinea(435      , 500     , 440  , 500  ,7 );
    //Linea 6 se mantiene igual en y
    b.trazarLinea(410      , 500     , 405  , 500  ,7 );
    //Linea 7 se mantiene igual en x pero y sumo 7 a el valor de 500 en xInicial
    b.trazarLinea(405  , 500     , 405  , 507  ,6 );
    //Linea 8 se mantien el valot de x pero se suma 10 e el valor de x final
    b.trazarLinea(440      , 500     , 440  , 507  ,6 ); //Aqui cambie el valor de 507 a 500
    //Linea 9 se mantiene en y pero se la resta 5 a x
    b.trazarLinea(405      , 507     , 400  , 507  ,7);
    //Linea 10 se mantien el valot de y pero se suma en x
    b.trazarLinea(440      , 507     , 445  , 507  ,7 );
    //Linea 11 se mantiene el valor en x se decrementa en y
    b.trazarLinea(400      , 507     , 400  , 520  ,6);
    //Linea 12 se mantiene el valor  en x
    b.trazarLinea(445      , 507     , 445  , 520 , 6 );
    //Linea 13 se mantiene en y
    b.trazarLinea(400      , 520     ,  405 , 520 ,7);
    //Linea 14 se mantiene en y
    b.trazarLinea(445      , 520     , 440  , 520 , 7 );
    //Linea 15 se mantiene en x se mueve en y
    b.trazarLinea(405      , 520     , 405  , 525 ,6);
    //Linea 16 se mantiene en x aumenta  en y
    b.trazarLinea(440      , 520     , 440  , 525 ,6 );
    //Linea 17 se mantiene en y aumenta en x (usa 15)
    b.trazarLinea(405      , 525     , 410  , 525 ,7);
    //Linea 18 se mantiene en y decrementa 5 x (usa 16)
    b.trazarLinea(440      , 525     , 435  , 525 ,7);
    //Linea 19 se mantiene en x incrementa y usa ( 17 y 2)
    b.trazarLinea(410      , 525     ,410   , 530,2);
    //Linea 20 se mantiene en x incrementa en y usa (18 y 2)
    b.trazarLinea(435      , 525     , 435  , 530,2);

    //==============================Fin de las lineas de frente=================================
    //Linea cabina1
         b.trazarLinea( 418     , 500     , 427  , 500  ,5 );
    //Linea cabina2
         b.trazarLinea( 418     , 500     , 427  , 500  ,5 );
    //Linea cabina3 se mantiene x aumenta y
         b.trazarLinea( 418     , 500     , 418  , 502  , 6);
    //Linea cabina4 se mantiene x aumenta y
         b.trazarLinea( 427     , 500     , 427  , 502  , 6);
    //Linea cabina5 se mantiene y aumenta x --------------- izquierda usa 3
         b.trazarLinea(418      , 502     , 415  , 502  , 5);
    //Linea cabina6 se mantiene y aumenta x ---------------derecha
         b.trazarLinea(427      , 502     , 430  , 502  , 5);
    //Linea cabina7
         b.trazarLinea(430      , 502     , 431  , 502  , 6);

    //LINEAS =================INMEDIO================================
        //Linea cabina8 izquierda abajo
         b.trazarLinea(415      , 502     , 415  , 504  , 5);
         //Linea cabina9 derecha derecha
         b.trazarLinea(431      ,502      , 431  ,504   , 5);
        //===================================================0
         b.trazarLinea(415  , 504,  418,504, 6);
         b.trazarLinea(431  ,504 ,  427,504, 6);
    //ULTIMAS LINEAS DE ABAJO
         b.trazarLinea(418,504,418, 507,8);
         b.trazarLinea(427,504,427, 507,8);

    //Linea cabina final de abajo
         b.trazarLinea( 418     , 507     , 427  , 507  ,5 );
    //LOS ABUERLOS DE LA NADA - MIL HORAS

//=======================FIN DE LAS PRUEBAS PARA CONSTRUIT LA NAVE DEL JUGADOR===============================
}
