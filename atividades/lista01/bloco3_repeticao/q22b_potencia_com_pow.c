#include <stdio.h>
#include <math.h>

int main(void) {
    float base;
    int expoente;
    float potencia;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    potencia = powf(base, expoente);

    printf("%.2f elevado a %d = %.2f\n", base, expoente, potencia);

    return 0;
}