#include <stdio.h>

int main(void) {
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    int tamanho = 7;
    int valor;
    int restante;
    int quantidade;
    int total;
    int i;

    printf("Digite o valor em dinheiro: ");
    scanf("%d", &valor);

    restante = valor;
    total = 0;

    for (i = 0; i < tamanho; i++) {
        quantidade = restante / cedulas[i];
        restante = restante % cedulas[i];
        total = total + quantidade;

        if (quantidade > 0) {
            printf("%d cedulas de R$ %d\n", quantidade, cedulas[i]);
        }
    }

    printf("Quantidade total de cedulas: %d\n", total);

    return 0;
}