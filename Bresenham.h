#ifndef BRESENHAM_H
#define BRESENHAM_H

#include <conio.h>
#include <winbgim.h>
class Bresenham {

    public:
        void trazarLinea( int xInicial, int yInicial, int xFinal, int yFinal );
        void trazarCirculo( int x, int y, int radio );
        void coordenadas(int xc, int yc, int x, int y);
    private:
};

void Bresenham::trazarLinea( int _xInicial, int _yInicial, int _xFinal, int _yFinal ) {

    int x, y, dx, dy, p,stepx, stepy;

    dx = (_xFinal - _xInicial); // calculamos dx
    dy = (_yFinal - _yInicial); // calculamos dy

    // Determinamos hacia donde ira Y
    if (dy < 0) { dy = -dy; stepy = -1; }
    else stepy = 1;

    // determinamos hacia donde ira X
    if (dx < 0) { dx = -dx; stepx = -1; }
    else stepx = 1;

    x = _xInicial;
    y = _yInicial;
    putpixel(x,y,15);

    if( dx > dy ){ // x incrementara mas que Y
        p = 2 * dy - dx; // calculamos el punto de desicion
        while ( x != _xFinal ) { // mientras Xinicial sea menor a Xfinal
          x = x + stepx; // incrementamos en 1 a X
          if (p < 0){
            p = p + 2 * dy;
          }
          else {
            y = y + stepy;
            p = p + 2*( dy -dx );
          }
           putpixel( x, y, 15 ); // pintamos el otro punto a graficar
        }
    }
    else {
        p = 2*dx - dy;
        while ( y != _yFinal ) {
          y = y + stepy;
          if (p < 0){
            p = p + 2*dx;
          }
          else {
            x = x + stepx;
            p = p + 2*(dx-dy);
          }
          putpixel( x, y, 15 );
        }
    }
}

void Bresenham::trazarCirculo( int xc, int yc, int r ) {

  int x, y, p;
  x = 0;
  y = r;
  p = 1 - r;
  coordenadas(xc,yc,x,y);
/* se cicla hasta trazar todo un octante */
  while (x < y) {
    x = x + 1;
    if (p < 0)
      p = p + 2*x + 1;
    else {
      y = y - 1;
      p = p + 2*(x - y) + 1;
    }
    coordenadas(xc,yc,x,y);
  }
}

void Bresenham::coordenadas(int xc, int yc, int x, int y) {
    putpixel(xc + x,yc + y,15);
    putpixel(xc - x,yc + y,15);
    putpixel(xc + x,yc - y,15);
    putpixel(xc - x,yc - y,15);
    putpixel(xc + x,yc + y,15);
    putpixel(xc - x,yc + y,15);
    putpixel(xc + y,yc - x,15);
    putpixel(xc - y,yc - x,15);
}

#endif
