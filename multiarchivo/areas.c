#include "areas.h"

/*
gcc -I. areas.c -c
*/

double areaTriangulo(double b, double h) {
  double area;
  area = (b*h)/2;
  return area;
}
double areaRectangulo(double b, double h) {
  return b*h;
}

double areaCirculo(double r) {
  return PI*r*r;
}

