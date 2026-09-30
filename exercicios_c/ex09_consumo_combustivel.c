#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de combustivel (litros): ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    printf("Consumo medio: %.2f km/L\n", consumo);

    return 0;
}
