#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 15;
    int resultado;
    // Reemplaza el operador en la siguiente línea
    resultado = (a < b) && (c != 0) || (a + b > c);
    printf("El resultado es %d\n", resultado);
    return 0;
}