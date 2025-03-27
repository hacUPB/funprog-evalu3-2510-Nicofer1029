#include <stdio.h>

int main() {

    float num_1, num_2, resultado;
    int operador;

    do {
        printf("Ingrese un numero: ");
        scanf("%f", &num_1);
        printf("Ingrese el otro numero: ");
        scanf("%f", &num_2);
        printf("Las operaciones disponibles son:\n");
        printf("\n 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division \n 5. Salir \n");
        printf("\n Seleccione una opcion: ");
        scanf("%d", &operador);

        switch (operador) {
            case 1:
                resultado = num_1 + num_2;
                printf("El resultado es: %.2f\n", resultado);
                break;
            case 2:
                resultado = num_1 - num_2;
                printf("El resultado es: %.2f\n", resultado);
                break;
            case 3:
                resultado = num_1 * num_2;
                printf("El resultado es: %.2f\n", resultado);
                break;
            case 4:
                if (num_2 != 0) {
                    resultado = num_1 / num_2;
                    printf("El resultado es: %.2f\n", resultado);
                } else {
                    printf("Error: No se puede dividir por cero.\n");
                }
                break;
            case 5:
                printf("Usted salio del programa.\n");
                break;
            default:
                printf("La opcion que eligio no es valida.\n");
                break;
        }

    } while (operador != 5);

    return 0;
}
