#include <stdio.h>
#include <math.h>

int menu(void);

int main(int argc, char const *argv[])
{
    float potencia_aparente, resistencia, voltaje;

    int opcion = menu();
    
    switch (opcion)
    {

    case 1:
        printf("Ingresa el valor de la potencia aparente \n");
        scanf("%f", &potencia_aparente);
        printf("Ingresa el valor de la resistencia (R) en ohmios \n");
        scanf("%f", &resistencia);
        voltaje = potencia_aparente*resistencia;
        printf("La tension (V) es: %.2f" , voltaje);
        printf(" Voltios");
    break;

    case 2:
        printf("Ingresa el valor del voltaje (V) en voltios \n");
        scanf("%f", &voltaje);
        printf("Ingresa el valor de la resistencia (R) en ohmios \n");
        scanf("%f", &resistencia);
        potencia_aparente = voltaje/resistencia;
        printf("La corriente (I) es: %.2f" , potencia_aparente);
        printf(" Amperios");
    break;

    case 3:
        printf("Ingresa el valor del voltaje (V) en voltios \n");
        scanf("%f", &voltaje);
        printf("Ingresa el valor de la corriente (I) en amperios \n");
        scanf("%f", &potencia_aparente);
        resistencia = voltaje/potencia_aparente;
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

    printf("Has seleccionado calcular el Factor de Potencia. \n");
    printf("¿Que parametro deseas calcular? \n");
    printf("1. Calcular Potencia Activa. \n 2. Calcular Potencia Aparente. \n 3. Calcular Factor de Potencia. \n");
    printf("Ingresa el numero de la opcion deseada \n");
    scanf("%d", &opcion);

    return opcion;

}