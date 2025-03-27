#include <stdio.h>

int main() {

    int num, i, j;

    printf("Ingrese el numero \n");
    scanf("%d",&num);

    for (i = 1; i <= num; i++) {

            for (j = 1; j <= i; j++){
                printf("%d" , j);
            }
                printf("\n");
     }

    for (i = 1; i <= num; i++) {

        for (j = 1; j <= 1-i; j++){
            printf("%d" , j);
        }
            printf("\n");
    }


     return 0;
}