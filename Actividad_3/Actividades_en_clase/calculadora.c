#include <stdio.h>

int main() {

    float num_1, num_2, resultado;
    int operador;

    do {

        printf("Las operaciones disponibles son:\n");
        printf("\n 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division \n 5. Salir \n");
        printf("\n Seleccione una opcion: ");
        scanf("%d", &operador);


        switch (operador) {
            case 1:
            printf("Ingrese el primer numero: ");
            scanf("%f", &num_1);
            printf("Ingrese el segundo numero: ");
            scanf("%f", &num_2);
                resultado = num_1 + num_2;
                printf("\n El resultado es: %.2f\n \n", resultado);
                break;
            case 2:
            printf("Ingrese el primer numero: ");
            scanf("%f", &num_1);
            printf("Ingrese el segundo numero: ");
            scanf("%f", &num_2);
                resultado = num_1 - num_2;
                printf("\n El resultado es: %.2f\n \n", resultado);
                break;
            case 3:
            printf("Ingrese el primer numero: ");
            scanf("%f", &num_1);
            printf("Ingrese el segundo numero: ");
            scanf("%f", &num_2);
                resultado = num_1 * num_2;
                printf("\n El resultado es: %.2f\n \n", resultado);
                break;
            case 4:
            printf("Ingrese el primer numero: ");
            scanf("%f", &num_1);
            printf("Ingrese el segundo numero: ");
            scanf("%f", &num_2);
                if (num_2 != 0) {
                    resultado = num_1 / num_2;
                    printf("\n El resultado es: %.2f\n \n", resultado);
                } else {
                    printf("\n Error: No se puede dividir por cero.\n \n");
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
