#include <stdio.h>
#include <math.h>

int main(){

    float num, resultado;

    printf("Ingrese un numero \n");
    scanf("%f", &num);

    if (num>=0){

        resultado = sqrt(num);
    printf("La raiz cuadrada de ese numero es: %.2f" , resultado);

    }

        else {
            printf("Error, no se puede sacar raiz cuadrada de numeros negativos");
        }
        
    return 0;
}
