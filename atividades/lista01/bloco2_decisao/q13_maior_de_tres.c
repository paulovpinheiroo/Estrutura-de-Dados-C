#include <stdio.h>

int main(void) {
    float primeiroNumero;
    float segundoNumero;
    float terceiroNumero;
    float maior;

    printf("Digite o primeiro numero: ");
    scanf("%f", &primeiroNumero);

    printf("Digite o segundo numero: ");
    scanf("%f", &segundoNumero);

    printf("Digite o terceiro numero: ");
    scanf("%f", &terceiroNumero);

    if (primeiroNumero >= segundoNumero && primeiroNumero >= terceiroNumero) {
        maior = primeiroNumero;
    } else if (segundoNumero >= terceiroNumero) {
        maior = segundoNumero;
    } else {
        maior = terceiroNumero;
    }

    printf("O maior numero e %.2f\n", maior);

    return 0;
}