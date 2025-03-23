#include <stdio.h>

int main() {

    int num, min, i;

    printf("Ingrese 5 numeros:\n");
    scanf("%d", &min);

    for (i = 1; i < 5; i++) {
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
    }

    printf("El numero minimo es: %d\n", min);

    return 0;
}
