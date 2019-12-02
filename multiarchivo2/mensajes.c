#include "mensajes.h"

void saludo(int lenguaje) {
    
    switch (lenguaje) {
        case 0:
          // español
          printf("Hola\n");
          break;
        case 1:
          // ingles
          printf("Hello\n");
          break;
        default:
          // idioma no encontrado
          printf("IDIOMA NO ENCONTRADO\n");
    }
}
void raya(char c, int n) {
    for(int i = 0; i < n; i++) {
        printf("%c",c);
    }
    printf("\n");
}