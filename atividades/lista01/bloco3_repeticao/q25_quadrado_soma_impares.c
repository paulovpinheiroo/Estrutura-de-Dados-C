#include <stdio.h>

int main(void) {
    int numero;
    int soma;
    int impar;
    int i;

    printf("Digite um numero natural: ");
    scanf("%d", &numero);

    soma = 0;
    impar = 1;

    for (i = 0; i < numero; i++) {
        soma = soma + impar;
        impar = impar + 2;
    }

    printf("%d ao quadrado = %d\n", numero, soma);

    return 0;
}