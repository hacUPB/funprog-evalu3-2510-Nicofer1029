#include <stdio.h>
#include <math.h>

int menu(void);

int main(int argc, char const *argv[])
{
    float factor_de_potencia, potencia_aparente, coseno, potencia_activa, potencia_reactiva;

    int S, P, fp, Q, opcion = menu();
    
    switch (opcion)
    {

    case 1:
        printf("Ingresa el valor de la potencia aparente (S) en VA: ");
        scanf("%f", &S);
        printf("Ingresa el valor del factor de potencia (fp, es decir cos(ϕ)): ");
        scanf("%f", &fp);

        P = S * fp;
        Q = sqrt(S * S - P * P);

        printf("Potencia activa (P): %.2f W\n", P);
        printf("Potencia reactiva (Q): %.2f VAR\n", Q);
        printf("cos(ϕ): %.2f\n", fp);
    break;

    case 2:
        printf("Ingresa el valor de la potencia activa (P) en W: ");
        scanf("%f", &P);
        printf("Ingresa el valor de la potencia reactiva (Q) en VAR: ");
        scanf("%f", &Q);

        S = sqrt(P * P + Q * Q);
        fp = P / S;

        printf("Potencia aparente (S): %.2f VA\n", S);
        printf("Factor de potencia (fp): %.2f\n", fp);
        printf("cos(ϕ): %.2f\n", fp);
    break;

    case 3:
        printf("Ingresa el valor de la potencia activa (P) en W: ");
        scanf("%f", &P);
        printf("Ingresa el valor de la potencia aparente (S) en VA: ");
        scanf("%f", &S);

        fp = P / S;
        Q = sqrt(S * S - P * P);

        printf("Factor de potencia (fp): %.2f\n", fp);
        printf("Potencia reactiva (Q): %.2f VAR\n", Q);
        printf("cos(ϕ): %.2f\n", fp);
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
    printf("1. Calcular Potencia Activa (P). \n 2. Calcular Potencia Aparente (S). \n 3. Calcular Factor de Potencia(fp). \n");
    printf("Ingresa el numero de la opcion deseada \n");
    scanf("%d", &opcion);

    return opcion;

}