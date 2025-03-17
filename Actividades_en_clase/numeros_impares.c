#include <stdio.h>

int main() {
    int contador = 99;

    while (contador >= -200) {
        printf("%d\n", contador);
        contador = contador-2;
    }

    return 0;
}