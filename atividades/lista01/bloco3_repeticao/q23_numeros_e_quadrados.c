#include <stdio.h>

int main(void) {
    int numero;
    int i;

    printf("Digite um numero natural: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++) {
        printf("%d -> %d\n", i, i * i);
    }

    return 0;
}