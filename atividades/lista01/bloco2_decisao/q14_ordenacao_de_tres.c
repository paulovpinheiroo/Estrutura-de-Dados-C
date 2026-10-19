#include <stdio.h>

int main(void) {
    int primeiroNumero;
    int segundoNumero;
    int terceiroNumero;
    int auxiliar;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &primeiroNumero, &segundoNumero, &terceiroNumero);

    if (primeiroNumero > segundoNumero) {
        auxiliar = primeiroNumero;
        primeiroNumero = segundoNumero;
        segundoNumero = auxiliar;
    }

    if (primeiroNumero > terceiroNumero) {
        auxiliar = primeiroNumero;
        primeiroNumero = terceiroNumero;
        terceiroNumero = auxiliar;
    }

    if (segundoNumero > terceiroNumero) {
        auxiliar = segundoNumero;
        segundoNumero = terceiroNumero;
        terceiroNumero = auxiliar;
    }

    printf("%d %d %d\n", primeiroNumero, segundoNumero, terceiroNumero);

    return 0;
}