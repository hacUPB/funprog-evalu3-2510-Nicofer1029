#include <stdio.h>
#include "funcion.restart.h"

int main() {
  int a = 10;
  int b  = 5;
  int resultado = restar(a, b);

  printf("La resta de %d y %d es: %d\n", a, b, resultado);

  return 0;
}