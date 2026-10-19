#include <stdio.h>

int main(void) {
    float distancia;
    float litrosConsumidos;
    float consumo;

    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litrosConsumidos);

    consumo = distancia / litrosConsumidos;

    printf("Consumo medio: %.2f km/l\n", consumo);

    return 0;
}