#include <stdio.h>

int main(void) {
    int numero;
    int quantidadeDivisores;
    int i;

    printf("Digite um numero natural: ");
    scanf("%d", &numero);

    quantidadeDivisores = 0;

    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            quantidadeDivisores = quantidadeDivisores + 1;
        }
    }

    if (quantidadeDivisores == 2) {
        printf("%d e primo\n", numero);
    } else {
        printf("%d nao e primo\n", numero);
    }

    return 0;
}