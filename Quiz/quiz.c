#include <stdio.h>

int main() {

    int stock = 50, cantidad, stock_restante;

    printf("Bienvenido al sistema de inventario. Stock disponible: 50. Para salir ingrese 0.\n");

    do { // Puse el bucle mal, por lo que en el codigo cuando pregunta por la cantidad de cosas a comprar queda fuera del bucle. 
        printf("Ingrese la cantidad que desea comprar: ");
        scanf("%d", &cantidad);

        if (cantidad == 0) {
            printf("Usted ha salido correctamente.\n");
            break; // Me falto poner el break para que el programa finalize.
        }

        if (cantidad > stock) { // Me falto evaluar si hay stock o no antes de descontar la cantidad de compras del usuario del stock.
            printf("No hay suficientes productos disponibles. Stock actual: %d\n", stock);
        } else {
            stock_restante = stock - cantidad;
            stock = stock_restante;
            printf("Compra realizada. Stock restante: %d\n", stock_restante);
        }
    } while (stock > 0);

    return 0;
}