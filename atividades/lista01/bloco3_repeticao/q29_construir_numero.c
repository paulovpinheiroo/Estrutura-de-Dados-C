#include <stdio.h>

int main(void) {
    int quantidade;
    long numero;
    int i;

    printf("Digite a quantidade de algarismos: ");
    scanf("%d", &quantidade);

    if (quantidade < 1 || quantidade > 18) {
        printf("Quantidade invalida, o limite e de 1 a 18 algarismos\n");

        return 0;
    }

    int digitos[quantidade];

    printf("Informe os %d algarismos: ", quantidade);

    for (i = 0; i < quantidade; i++) {
        scanf("%d", &digitos[i]);
    }

    numero = 0;

    for (i = 0; i < quantidade; i++) {
        numero = numero * 10 + digitos[i];
    }

    printf("Numero formado: %ld\n", numero);

    return 0;
}