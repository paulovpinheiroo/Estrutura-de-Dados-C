#include <stdio.h>

int main(void) {
    float numero;
    float menor;
    float maior;

    printf("Digite um numero positivo (0 encerra): ");
    scanf("%f", &numero);

    menor = numero;
    maior = numero;

    while (numero != 0) {
        if (numero < menor) {
            menor = numero;
        }

        if (numero > maior) {
            maior = numero;
        }

        printf("Digite um numero positivo (0 encerra): ");

        if (scanf("%f", &numero) != 1) {
            break;
        }
    }

    printf("Menor: %.2f\n", menor);
    printf("Maior: %.2f\n", maior);

    return 0;
}