#include <stdio.h>

int main(void) {
    float base;
    int expoente;
    float potencia;
    int i;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    potencia = 1.0f;

    for (i = 0; i < expoente; i++) {
        potencia = potencia * base;
    }

    printf("%.2f elevado a %d = %.2f\n", base, expoente, potencia);

    return 0;
}