#include <stdio.h>

int main(void) {
    long numero;
    long copia;
    int soma;

    printf("Digite um numero natural: ");
    scanf("%ld", &numero);

    copia = numero;
    soma = 0;

    while (copia > 0) {
        soma = soma + copia % 10;
        copia = copia / 10;
    }

    printf("Soma dos digitos de %ld: %d\n", numero, soma);

    return 0;
}