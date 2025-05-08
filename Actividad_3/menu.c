    #include <stdio.h>

    int main() {

        int opcion;
        float num_1 , num_2, resultado;

        do{

            printf("\n Elija una de las sigientes opciones \n");
            printf(" 1.Suma \n 2.Resta \n 3.Salir \n");
            scanf("%d",&opcion);

            if (opcion == 3) {
                printf("Usted ha salido correctamente \n");
                break;
            }

            printf("Ingrese un numero \n");
            scanf("%f",&num_1);
            printf("Ingrese un numero \n");
            scanf("%f",&num_2);

            if (opcion == 1) {
                resultado = num_1 + num_2;
                printf("El resultado de la suma es: %.2f \n" , resultado);
            }

            else if (opcion == 2) {
                resultado = num_1 - num_2;
                printf("El resultado de la resta es: %.2f \n" , resultado);
            }

            else {
                printf("La opcion que usted ha elegido no es valida \n \n");
            }

        } while (opcion != 3);
        
        return 0;
    }