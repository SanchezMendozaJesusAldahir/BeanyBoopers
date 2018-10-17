#include <conio.h>
#include <graphics.h>
#include <pthread.h>
#include <iostream>
#include <list>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "Bresenham.h"
#include "Cuadrado.h"
#include "Tablero.h"
#include "Puntos.h"
using namespace std;

//==========HILOS==============
pthread_t threadMoverCuadros, threadDisparo, threadMoverNaves, threadPuntos;
pthread_mutex_t mutex;

//==========VARIABLES==========
Puntos puntos;
//==========METODOS ===========
list<Cuadrado*> generarFigurasDos();
list<Cuadrado*> generarFigurasCuatro( int ancho, int largo );
list<Cuadrado*> generarFigurasSeis( int ancho, int largo );
list<Cuadrado*> generarFigurasNueve();
void * moverCuadros( void * arg );
void * generarPuntos( void * arg );
void moverCuadrosDos( int traslacion );
void moverCuadrosCuatro( int traslacion, int ancho, int largo );
void moverCuadrosSeis( int traslacion, int ancho, int largo );
void moverCuadrosNueve( int traslacion );

void moverCuadrosDos( int traslacion ) {
    list<Cuadrado*> dos = generarFigurasDos();
    list<Cuadrado*>::iterator indexDos;
    bool b = true;

    while( b ) {
         for( indexDos = dos.begin(); indexDos != dos.end(); indexDos++ ) {
              pthread_mutex_lock(&mutex);
            (*indexDos)->setColor(15);
            (*indexDos)->dibujar();
             pthread_mutex_unlock(&mutex);

             pthread_mutex_lock(&mutex);
            (*indexDos)->setColor(0);
            (*indexDos)->dibujar();
             pthread_mutex_unlock(&mutex);

              pthread_mutex_lock(&mutex);
            (*indexDos)->trasladarY( traslacion );
            (*indexDos)->setColor(15);
            (*indexDos)->dibujar();
            pthread_mutex_unlock(&mutex);

             pthread_mutex_lock(&mutex);
            if( (*indexDos)->getY() > 282 ) {
                pthread_mutex_lock(&mutex);
                    moverCuadrosDos(2);
                pthread_mutex_unlock(&mutex);
                break;
            }
             pthread_mutex_unlock(&mutex);

        }
    }

}

void moverCuadrosCuatro( int traslacion, int ancho, int largo ) {
    list<Cuadrado*> dos = generarFigurasCuatro( ancho, largo );
    list<Cuadrado*>::iterator indexDos;
    while( true ){
         for( indexDos = dos.begin(); indexDos != dos.end(); indexDos++ ) {
             pthread_mutex_lock(&mutex);
            (*indexDos)->setColor(15);
            (*indexDos)->dibujar();
            (*indexDos)->setColor(0);
            (*indexDos)->dibujar();
            (*indexDos)->trasladarY( traslacion );
            (*indexDos)->setColor(15);
            (*indexDos)->dibujar();
            pthread_mutex_unlock(&mutex);
        }
    }
}

void moverCuadrosSeis( int traslacion, int ancho, int largo ) {
    list<Cuadrado*> dos = generarFigurasSeis( ancho, largo );
    list<Cuadrado*>::iterator indexDos;
     for( indexDos = dos.begin(); indexDos != dos.end(); indexDos++ ) {
             pthread_mutex_lock(&mutex);
            (*indexDos)->setColor(15);
            (*indexDos)->dibujar();
            (*indexDos)->setColor(0);
            (*indexDos)->dibujar();
            (*indexDos)->trasladarY( traslacion );
            (*indexDos)->setColor(15);
            (*indexDos)->dibujar();
            pthread_mutex_unlock(&mutex);
        }
}

void moverCuadrosNueve( int traslacion ) {
    list<Cuadrado*> dos = generarFigurasNueve();
    list<Cuadrado*>::iterator indexDos;
     for( indexDos = dos.begin(); indexDos != dos.end(); indexDos++ ) {
             pthread_mutex_lock(&mutex);
            (*indexDos)->setColor(15);
            (*indexDos)->dibujar();
             pthread_mutex_unlock(&mutex);

             pthread_mutex_lock(&mutex);
            (*indexDos)->setColor(0);
            (*indexDos)->dibujar();
             pthread_mutex_unlock(&mutex);

              pthread_mutex_lock(&mutex);
            (*indexDos)->trasladarY( traslacion );
            (*indexDos)->setColor(15);
            (*indexDos)->dibujar();
            pthread_mutex_unlock(&mutex);
        }
}
//==================================================================
list<Cuadrado*> generarFigurasDos() {
     list<Cuadrado*> objetos2;
     objetos2.push_front( new Cuadrado( 250,100,120, 150 ) );
     objetos2.push_front( new Cuadrado( 610,100, 120,150 ) );
     return objetos2;
}
//=================================================================
list<Cuadrado*> generarFigurasCuatro( int ancho, int largo )
{   // ancho = 100 largo = 90
     list<Cuadrado*> objetos4;
     objetos4.push_front( new Cuadrado( 120,80,ancho,largo ) );
     objetos4.push_front( new Cuadrado( 310,80,ancho,largo ) );
     objetos4.push_front( new Cuadrado( 600,80,ancho,largo ) );
     objetos4.push_front( new Cuadrado( 770,80,ancho,largo ) );
     return objetos4;
}

//==============================================================
list<Cuadrado*> generarFigurasSeis( int ancho, int largo ) {
     list<Cuadrado*> objetos6; //ancho = 50, largo = 100
     objetos6.push_front( new Cuadrado( 130,80,ancho,largo ) );
     objetos6.push_front( new Cuadrado( 230,80,ancho,largo ) );
     objetos6.push_front( new Cuadrado( 330,80,ancho,largo ) );
     objetos6.push_front( new Cuadrado( 550,80,ancho,largo ) );
     objetos6.push_front( new Cuadrado( 650,80,ancho, largo ) );
     objetos6.push_front( new Cuadrado( 750,80,ancho,largo ) );
     return objetos6;
}
//==========================================================================
    list<Cuadrado*> generarFigurasNueve( ){
     list<Cuadrado*> objetos9;
    objetos9.push_front( new Cuadrado( 80,60,50,30 ) );
    objetos9.push_front( new Cuadrado( 130,90,40,60 ) );
    objetos9.push_front( new Cuadrado( 200,90,70,60 ) );
    objetos9.push_front( new Cuadrado( 300,90,40,60 ) );
    objetos9.push_front( new Cuadrado( 340,60,50,30 ) );

    objetos9.push_front( new Cuadrado( 500,60,50,30 ) );
    objetos9.push_front( new Cuadrado( 550,90,40,60 ) );
    objetos9.push_front( new Cuadrado( 615,90,70,60 ) );
    objetos9.push_front( new Cuadrado( 710,90,40,60 ) );
    objetos9.push_front( new Cuadrado( 750,60,40,30 ) );
     return objetos9;
}
//====================================================================

void *moverCuadros(void *arg) {

    int ancho;
    int alto;
    int indiceLista ;
    int t = 2;
    srand(time(NULL));


    while( true ) {
        ancho = 30 + rand() % (100 - 30);
        alto = 40 + rand() % (90 - 40);
        t++;
         moverCuadrosDos(2);
    }
}

void * generarPuntos(void * arg) {
    int ancho;
    int alto;
    int indiceLista ;
    int t = 2;
    srand(time(NULL));
    puntos.fPuntos(10,10);
}

int main()
{
    initwindow(1000,550);
    Cuadrado m( 40,40,900,450);
    m.setColor(2);
    m.dibujar();
    pthread_mutex_init(&mutex,NULL);
    pthread_create(&threadPuntos,NULL,generarPuntos,NULL);
    pthread_create(&threadMoverCuadros,NULL,moverCuadros,NULL);
    pthread_detach(threadMoverCuadros);
    pthread_detach(threadPuntos);
    getch();
    closegraph();
    return 0;
}


