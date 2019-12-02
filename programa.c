#include <stdio.h>

/*
Para compilar:
gcc programa.c -o xxx
*/

// Declaraciones de funciones
void saludos(int n);

// Variables globales

// Funcion main
int main() {
  // Variables locales
  // Codigo
  printf("Entonces que gonorrea!!!!\n\n");
  saludos(-6);
  printf("\n");
  saludos(3);
  printf("\n");
  return 0;
}

// Otras funciones
void saludos(int n) {
  if (n < 0) {
    printf("Maleducado\n");
  }
  else {
    for(int i = 0; i < n; i++) {
      printf("Quiubo marica!!!!\n");
    }
  }
}
