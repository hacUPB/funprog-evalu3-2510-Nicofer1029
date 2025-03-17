#include <stdio.h>

int main() {
    int rango;
    int contador = 0;

    printf("Ingrese el rango \n");
    scanf("%d", &rango);

    while (contador <= rango) {
        if (contador % 3 == 0 && contador % 5 == 0) {
            printf("Buzz Biss\n");
        } 
        else if (contador % 5 == 0) {
            printf("Buzz\n");
        } 
        else if (contador % 3 == 0) {
            printf("Biss\n");
        } 
        else {
            printf("%d\n", contador);
        }
        
        contador++;
    }

    return 0;
}
