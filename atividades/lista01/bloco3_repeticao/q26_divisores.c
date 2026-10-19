#include <stdio.h>

int main(void) {
    int numero;
    int soma;
    int i;

    printf("Digite um numero natural: ");
    scanf("%d", &numero);

    soma = 0;

    printf("Divisores de %d: ", numero);

    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
            soma = soma + i;
        }
    }

    printf("\nSoma dos divisores: %d\n", soma);

    return 0;
}