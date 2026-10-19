#include <stdio.h>
#include <math.h>

int main(void) {
    float primeiroCateto;
    float segundoCateto;
    float hipotenusa;

    printf("Digite a medida do primeiro cateto: ");
    scanf("%f", &primeiroCateto);

    printf("Digite a medida do segundo cateto: ");
    scanf("%f", &segundoCateto);

    hipotenusa = sqrtf(primeiroCateto * primeiroCateto + segundoCateto * segundoCateto);

    printf("A hipotenusa mede %.2f\n", hipotenusa);

    return 0;
}