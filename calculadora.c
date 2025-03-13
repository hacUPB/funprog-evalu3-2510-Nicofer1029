#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num_1 , num_2, operacion, resultado;
    printf("Ingrese los numeros que desea operar \n");
    scanf("%d" , &num_1);
    printf("Ingrese los numeros que desea operar \n");
    scanf("%d" , &num_2);
    printf("Las operaciones que tenemos son: \n 1. Sum \n 2. Resta \n 3. Multiplicacion \n 4. Division \n");
    scanf("%d" , &operacion);

    switch (operacion)
    {
    case 1:
        resultado = num_1 + num_2;
        printf("El resultado es: %d \n", resultado);
        break;
    case 2:
        resultado = num_1 - num_2;
        printf("El resultado es: %d \n", resultado);
        break;
    case 3:
        resultado = num_1*num_2;
        printf("El resultado es: %d \n", resultado);
        break;
    case 4:
        resultado = num_1/num_2;
        printf("El resultado es: %d \n", resultado);
        break;
    default:
    printf("La operacion que indico no es valida \n");
        break;
    }


    return 0;
}
