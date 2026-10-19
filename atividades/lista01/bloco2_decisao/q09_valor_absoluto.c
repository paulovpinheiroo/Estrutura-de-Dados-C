#include <stdio.h>

int main(void) {
    float numero;
    float absoluto;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero < 0) {
        absoluto = -numero;
    } else {
        absoluto = numero;
    }

    printf("Valor absoluto: %.2f\n", absoluto);

    return 0;
}