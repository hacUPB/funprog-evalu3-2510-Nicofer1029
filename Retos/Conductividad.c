#include <stdio.h>

float resistividad(int material);
float coef_temp(int material);

int main() {
    int material;
    float rho, alpha, longitud, area, temperatura, temp_estandar, res_electrica;

    printf("=== Calculo de Resistencia de un Conductor ===\n");
    printf("Seleccione el material del conductor:\n");
    printf("1. Oro\n2. Aluminio\n3. Cobre\n4. Otro\n");
    printf("Ingrese una opción: ");
    scanf("%d", &material);

    if (material == 1 || material == 2 || material == 3) {
        rho = resistividad(material);
        alpha = coef_temp(material);

    } else if (material == 4) {
        printf("Ingrese la resistividad del material: ");
        scanf("%f", &rho);
        printf("Ingrese el coeficiente de temperatura (1/°C): ");
        scanf("%f", &alpha);

    } else {
        printf("Opción no válida.\n");
        return 1;
    }

    printf("Ingrese la longitud del conductor (en metros): ");
    scanf("%f", &longitud);
    printf("Ingrese el área transversal del conductor (en metros cuadrados): ");
    scanf("%f", &area);
    printf("Ingrese la temperatura de operación: ");
    scanf("%f", &temperatura);

    temp_estandar = rho * (longitud / area);
    res_electrica = temp_estandar * (1 + alpha * (temperatura - 20));

    printf("La resistencia del conductor a %.2f grados es: %.6f ohmios\n", temperatura, res_electrica);

    return 0;
}

float resistividad(int material) {
    float res_oro, res_aluminio, res_cobre;
    switch (material) {
        case 1:
        res_oro = pow(2.35*10,-8);  
        return res_oro;
        case 2: 
        res_aluminio = pow(2.65*10,-8);
        return res_aluminio;
        case 3: 
        res_cobre = pow(1.724*10,-8);
        return res_cobre;

        default: 
        return 0;
    }
}

float coef_temp(int material) {
    int temp_oro, temp_aluminio, temp_cobre;
    switch (material) {
        case 1:
        temp_oro = 0.0034; 
        return temp_oro;
        case 2:
        temp_aluminio = 0.00429; 
        return temp_aluminio;
        case 3:
        temp_cobre = 0.00393; 
        return temp_cobre;
        default: 
        return 0;
    }
}
