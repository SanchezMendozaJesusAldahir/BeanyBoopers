#include <list>
class Tablero {

public :
    list<Cuadrado*> cuadros();
};

list<Cuadrado*> Tablero::cuadros() {
    list<Cuadrado> c;
    Cuadrado b( 250,150,100,130);
    Cuadrado a(500,150,100,130);
    c.push_front( b );
    c.push_front( a );
}

