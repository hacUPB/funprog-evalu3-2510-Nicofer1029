# include <stdio.h>

void simplificar (int, int, int);

int main(int argc, char const *argv[])
{
    int numerador, denominador, mcd;
    
    mcd = 5;
    numerador = 15;
    denominador = 5;

    simplificar;

    return 0;
}

void simplificar (numerador, denominador, mcd){

    numerador = numerador/mcd;
    denominador = denominador/mcd;

    printf("El numerador es: %d" , numerador);
    printf("El denominador es: %d", denominador);


}
