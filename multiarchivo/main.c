#include "mensajes.h"
#include "areas.h"
#include <stdio.h>

/*
Generando el ejecutable
gcc *.o -o areas.out
*/

void test();

int main() {
  test();
  return 0;
} 


void test() {
  bienvenida();
  menu();
  printf("Area triangulo: %lf\n", areaTriangulo(4,3));
}






