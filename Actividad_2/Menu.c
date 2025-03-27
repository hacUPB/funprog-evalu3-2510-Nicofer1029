#include <stdio.h>

int main() {
    int opcion;

    do {

        printf("MENU \n");
        printf("1. Sopa y carne \n");
        printf("2. Arroz con pollo\n");
        printf("3. Pasta \n");
        printf("4. Jugo natural\n");
        printf("5. Salir\n");
        scanf("%d", &opcion);
    
        switch(opcion) {
            case 1:
                printf("Usted eligio sopa y carne. Este plato tiene un valor de $22.000\n");
                break;
            case 2:
                printf("usted eligio arroz con pollo. Este plato tiene un valor de $15.000 \n");
                break;
            case 3:
                printf("Usted eligio pasta. Este plato tiene un valor de $13.000 \n");
                break;
            case 4:
            printf("Usted eligio jugo natural. Este plato tiene un valor de $8.000 \n");
                break;
            case 5:
            printf("Usted has salido correctamente\n");
                break;
            default:
                printf("Opcion invalida.\n");
                break;
        }

    } while(opcion != 5);

    return 0;
}
