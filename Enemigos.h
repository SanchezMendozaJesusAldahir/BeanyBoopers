#include "Cuadrado.h"

class Enemigos
{
    void pintar();
    void setColor( int );
    void trasladarX( int );
    void trasladarY( int );
    int x, y, x1, y1,color;
}
};


void Enemigos::pintar() {
    Cuadrado c( x, y, x1, y1 );
    c.setColor( color );
    c.dibujar();
}


void Enemigos::setColor( int c ) {
    color = c;
}

void Enemigos::trasladarY( int t ) {
    y1 += t;
}

void Enemigos::trasladarX( int _x ) {
    x1 += _x;
}

int Enemigos::getColor() { return color; }

int Enemigos::getY(){ return y1; }
int Enemigos::getX() { return x1; }
