#include <stdio.h>

int main(void) {
    float primeiroNumero;
    float segundoNumero;

    printf("Digite o primeiro numero: ");
    scanf("%f", &primeiroNumero);

    printf("Digite o segundo numero: ");
    scanf("%f", &segundoNumero);

    if (primeiroNumero > segundoNumero) {
        printf("O maior numero e %.2f\n", primeiroNumero);
    } else {
        printf("O maior numero e %.2f\n", segundoNumero);
    }

    return 0;
}