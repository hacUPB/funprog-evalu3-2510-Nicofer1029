// Calculadora de ingeniería

#include <stdio.h>

int main() {

    int opcion;

    do {
        printf("Bienvenido a la Calculadora de Ingeniería \n Por favor, selecciona una opción:");
        printf("1. Calcular Ley de Ohm \n 2. Calcular Factor de Potencia \n 3. Calcular Resistencia de un Conductor \n 4. Calcular Valor de la Resistencia para un LED \n 5. Salir");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
                
            
            break;
            case 5:
            
            break;
            default:
                printf("La opcion que eligio no es valida.\n");
            break;
        }        

    } while (opcion != 5);
    
    return 0;
}
