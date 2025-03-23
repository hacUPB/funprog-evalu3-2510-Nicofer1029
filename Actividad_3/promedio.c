#include <stdio.h>

int main() {

    int num, i, cantidad;
    float suma = 0, promedio;

    printf(" ¿Cuantos numeros va a ingresar? \n");
    scanf("%d", &cantidad);

    printf("Ingrese los numeros:\n");

    for (i = 0; i < cantidad; i++) {
        scanf("%d", &num);
        suma += num;
    }

    promedio = suma/cantidad;

    printf("El promedio de los numeros es: %.2f \n", promedio);

    return 0;
}
