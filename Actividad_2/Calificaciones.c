#include <stdio.h>

int main() {

    float calificacion;

    printf("Ingrese la calificacion (0-5): ");
    scanf("%f", &calificacion);

    if (calificacion >= 0 && calificacion < 2) {
        printf("Insuficiente\n");
    } else if (calificacion >= 2 && calificacion < 3) {
        printf("Aceptable\n");
    } else if (calificacion >= 3 && calificacion < 4) {
        printf("Bueno\n");
    } else if (calificacion >= 4 && calificacion < 5) {
        printf("Sobresaliente\n");
    } else if (calificacion == 5) {
        printf("Excelente\n");
    } else {
        printf("Calificacion no valida. Ingrese un valor entre 0 y 5.\n");
    }

    return 0;
}
