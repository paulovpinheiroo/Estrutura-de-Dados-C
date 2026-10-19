#include <stdio.h>

int main(void) {
    int numero;
    long fatorial;
    int i;

    printf("Digite um numero natural: ");
    scanf("%d", &numero);

    fatorial = 1;

    for (i = 2; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    printf("%d! = %ld\n", numero, fatorial);

    return 0;
}