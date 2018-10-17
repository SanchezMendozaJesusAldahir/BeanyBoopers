#include "Bresenham.h"
#include <iostream>
using namespace std;

class Cuadrado
{
    public:
        Cuadrado( int, int, int , int );
        void dibujar();
        void setColor( int );
        void trasladarY( int );
        int getColor();
        int getY();
        int getX();
    private:
        int ancho, altura, x1, y1, color;

};

Cuadrado::Cuadrado( int x, int y, int _ancho, int _altura ) {
    x1 = x; y1 = y; ancho = _ancho; altura = _altura;
}

void Cuadrado::dibujar() {
    Bresenham s;
    s.trazarLinea( x1, y1, ancho + x1, y1, color );
    s.trazarLinea( x1, y1, ancho + x1, y1, color );
    s.trazarLinea( x1, y1, x1, altura + y1, color );
    s.trazarLinea( x1, y1, x1, altura + y1, color );
    s.trazarLinea( x1, altura + y1, ancho + x1, altura + y1, color );
    s.trazarLinea( ancho + x1 , altura + y1, ancho + x1, y1, color );
    s.trazarLinea( x1, altura + y1, ancho + x1, altura + y1, color );
    s.trazarLinea( ancho + x1 , altura + y1, ancho + x1, y1, color );
}

void Cuadrado::setColor( int c ) {
    color = c;
}

void Cuadrado::trasladarY( int t ) {
    y1 += t;
}

int Cuadrado::getColor() { return color; }

int Cuadrado::getY(){ return y1; }
int Cuadrado::getX() { return x1; }





