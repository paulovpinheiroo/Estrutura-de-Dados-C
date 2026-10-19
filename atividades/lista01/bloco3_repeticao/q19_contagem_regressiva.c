#include <stdio.h>

int main(void) {
    int numero;
    int i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for (i = numero; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}