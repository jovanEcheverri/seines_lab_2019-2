#include <stdio.h>
#include "areas.h"
#include "mensajes.h"

/*
Para compilar:
gcc -I. main.c -c


*/

// Declaraciones de funciones
void testFunciones(void);

// Variables globales

// Funcion main
int main() {
  // Variables locales
  // Codigo
  testFunciones();
  return 0;
}

// Otras funciones

void testFunciones(void) {
  printf("Mr. Anderson welcome back!!!\n");  
  raya('*',20);
  saludo(0);
  saludo(1);
  saludo(6);
  raya('-',20);
  printf("Area cuadrado con lado 5: %lf\n", areaCuadrado(5));
}