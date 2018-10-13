#include "Bresenham.h"
#include <iostream>
using namespace std;
class Cuadrado
{
    public:
        Cuadrado( int x, int y, int _ancho, int _altura );
        void dibujar( );
        void moverEnX( int _x );
        int ancho, altura, x1, y1, color = 0;

        void moverX( int _ac ) {
            x1 += _ac;
            color = 0;
        }
};

Cuadrado::Cuadrado( int x, int y, int _ancho, int _altura ) {
    x1 = x; y1 = y; ancho = _ancho; altura = _altura;;
}

void Cuadrado::dibujar() {
    Bresenham s; color = 15;
    cout << x1 << endl;
    s.trazarLinea( x1, y1, ancho + x1, y1, color );
    s.trazarLinea( x1, y1, x1, altura + y1, color );
    s.trazarLinea( x1, altura + y1, ancho + x1, altura + y1, color );
    s.trazarLinea( ancho + x1 , altura + y1, ancho + x1, y1, color );
}








