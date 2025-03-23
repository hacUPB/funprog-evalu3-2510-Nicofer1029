#include <stdio.h>

int main() {
    int opcion;

    do {

        printf("MENU PRINCIPAL \n");
        printf("Opcion 1: Encender LED \n");
        printf("Opcion 2: Apagar LED \n");
        printf("Opcion 3: Mostrar estado del LED \n");
        printf("Opcion 4: Salir \n");
        scanf("%d", &opcion);
    
        switch(opcion) {
            case 1:
                printf("El led esta encendido. \n");
                break;
            case 2:
                printf("El led esta apagado. \n");
                break;
            case 3:
                printf("El led esta: \n");
                break;
            case 4:
            printf("Usted ha salido correctamente \n");
                break;
            default:
                printf("Opcion invalida.\n");
                break;
        }

    } while(opcion != 4);

    return 0;
}
