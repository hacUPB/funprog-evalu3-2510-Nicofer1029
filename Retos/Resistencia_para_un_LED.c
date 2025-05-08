#include <stdio.h>

int main() {
    float V_fuente, V_f, I_f, R, P_R, P_Total, I_Total;
    int num_leds, conexion;

    printf("Has seleccionado calcular la Resistencia para un LED\n");

    printf("Ingrese la tension de la fuente (V): ");
    scanf("%f", &V_fuente);

    printf("Ingrese el numero de LEDs: ");
    scanf("%d", &num_leds);

    printf("Ingrese el tipo de conexion (1 para serie | 2 para paralelo): ");
    scanf("%d", &conexion);

    printf("Ingrese la tension nominal del LED (Vf): ");
    scanf("%f", &V_f);

    printf("Ingrese la corriente nominal del LED (If, en amperios): ");
    scanf("%f", &I_f);

    if (conexion == 1) {
        float V_total_leds = num_leds * V_f;
        I_Total = I_f;

        if (V_fuente <= V_total_leds) {
            printf("Error: La tension de la fuente es insuficiente para los LEDs en serie.\n");
            return 1;
        }

        R = (V_fuente - V_total_leds) / I_f;

    } else if (conexion == 2) {
        float I_total_leds = num_leds * I_f;
        I_Total = I_total_leds;

        if (V_fuente <= V_f) {
            printf("Error: La tension de la fuente es insuficiente para los LEDs en paralelo.\n");
            return 1;
        }
        R = (V_fuente - V_f) / I_Total;

    } else {
        printf("Tipo de conexion no valido.\n");
        return 1;
    }

    P_R = I_Total * I_Total * R;
    P_Total = V_fuente * I_Total;

    printf("\n RESULTADOS \n");
    printf("Resistencia requerida (R): %.2f ohmios\n", R);
    printf("Potencia en la resistencia (P_R): %.2f W\n", P_R);
    printf("Corriente total (I_Total): %.2f A\n", I_Total);
    printf("Potencia total del circuito (P_Total): %.2f W\n", P_Total);

    return 0;
}
