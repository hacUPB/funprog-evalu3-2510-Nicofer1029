#include <stdio.h>

int menu(void);

int main(int argc, char const *argv[])
{
    float amperios, resistencia, voltaje;

    int opcion = menu();
    
    switch (opcion)
    {

    case 1:
        printf("Ingresa el valor de la corriente (I) en amperios \n");
        scanf("%f", &amperios);
        printf("Ingresa el valor de la resistencia (R) en ohmios \n");
        scanf("%f", &resistencia);
        voltaje = amperios*resistencia;
        printf("La tension (V) es: %.2f" , voltaje);
        printf(" Voltios");
    break;

    case 2:
        printf("Ingresa el valor del voltaje (V) en voltios \n");
        scanf("%f", &voltaje);
        printf("Ingresa el valor de la resistencia (R) en ohmios \n");
        scanf("%f", &resistencia);
        amperios = voltaje/resistencia;
        printf("La corriente (I) es: %.2f" , amperios);
        printf(" Amperios");
    break;

    case 3:
        printf("Ingresa el valor del voltaje (V) en voltios \n");
        scanf("%f", &voltaje);
        printf("Ingresa el valor de la corriente (I) en amperios \n");
        scanf("%f", &amperios);
        resistencia = voltaje/amperios;
        printf("La corriente (I) es: %.2f" , resistencia);
        printf(" Ohmios");
    break;
    
    case 4:
    printf("Volver al menu principal \n");
    break;

    default:
        printf("La opcion que usted eligio no es valida");
    break;
    }

    return 0;
}


int menu(void){

    int opcion;

    printf("Has seleccionado calcular la Ley de Ohm. \n");
    printf("¿Que parametros deseas calcular? \n");
    printf("1. Calcular Tension (Voltaje) \n 2. Calcular Corriente \n 3. Calcular Resistencia \n 4. Volver al menu principal \n");
    printf("Ingresa el numero de la opcion deseada \n");
    scanf("%d", &opcion);

    return opcion;

}