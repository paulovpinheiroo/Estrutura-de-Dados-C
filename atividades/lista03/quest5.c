#include <stdio.h>

int main() {
    // a)
    int vet[5];
    int *p = vet;
    int soma = 0;
    int maior;

    // b)
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", (p + i));
    }
    maior = *p;

    // c) e d)
    for (int i = 0; i < 5; i++) {
        int valor_atual = *(p + i);
        soma += valor_atual;
        if (valor_atual > maior) {
            maior = valor_atual;
        }
    }

    // e)
    printf("\nSoma dos elementos: %d\n", soma);
    printf("Maior elemento: %d\n", maior);

    return 0;
}
