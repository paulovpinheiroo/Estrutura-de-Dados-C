#include <stdio.h>

int main(void) {
    int posicao;
    int anterior;
    int atual;
    int proximo;
    int i;

    printf("Digite a posicao na serie (a partir de 1): ");
    scanf("%d", &posicao);

    anterior = 1;
    atual = 1;

    for (i = 3; i <= posicao; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    printf("O termo %d da serie e %d\n", posicao, atual);

    return 0;
}