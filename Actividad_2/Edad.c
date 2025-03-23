#include <stdio.h>

int main(){
    
    int edad;

    printf("Ingrese su edad \n");
    scanf("%d",&edad);

    if (edad >= 18) {
        printf("Usted es mayor de edad");
    }
    else {
        printf("Usted es menor de edad");
    }

    return 0;
}
