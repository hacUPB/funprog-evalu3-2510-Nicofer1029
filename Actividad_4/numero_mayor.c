#include <stdio.h>

int mayor(int num1 , int num2);

int main(int argc, char const *argv[])
{
    int num_mayor, num1, num2;

    printf("Ingrese un numero: \n");
    scanf("%d", &num1);

    printf("Ingrese otro numero: \n");
    scanf("%d", &num2);

    num_mayor = mayor(num1,num2);

    printf("El numero mayor de los dos es: %d", num_mayor);

    return 0;
}


int mayor(int num1 , int num2){

    int num_mayor;

    if (num1>num2)
    {
        num_mayor = num1;
    }

    else {

        num_mayor = num2;
    }
    
    return num_mayor;

}