#include <stdio.h>

int main() {

    int num, resultado;

    printf("Escriba el numero que desea ver sus resultados multiplicados \n");
    scanf("%d",&num);

    for (int i = 1; i <= 10; i++) {
        resultado = num * i;
        printf("%d\n", resultado);
    }
    return 0;
}