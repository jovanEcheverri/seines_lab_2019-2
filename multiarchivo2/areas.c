#include "areas.h"

/*
Generacion del codigo objeto:  gcc -I . areas.c -c
*/

double areaTrapecio(double B, double b, double h) {
    double area;
    area = (B + b)*h/2;
    return area;
}

double areaCirculo(double r) {
  return PI*r*r;
}

double areaCuadrado(double l) {
    return l*l;
}

