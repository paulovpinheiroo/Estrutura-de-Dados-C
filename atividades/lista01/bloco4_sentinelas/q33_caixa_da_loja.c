#include <stdio.h>

int main(void) {
    float preco;
    float total;
    float percentual;
    float valorDesconto;
    float totalFinal;

    printf("Digite o preco do produto (0 encerra): ");
    scanf("%f", &preco);

    total = 0.0f;

    while (preco != 0.0f) {
        total = total + preco;

        printf("Digite o preco do produto (0 encerra): ");

        if (scanf("%f", &preco) != 1) {
            break;
        }
    }

    if (total < 50.0f) {
        percentual = 5.0f;
    } else if (total < 100.0f) {
        percentual = 10.0f;
    } else if (total <= 200.0f) {
        percentual = 15.0f;
    } else {
        percentual = 20.0f;
    }

    valorDesconto = total * percentual / 100.0f;
    totalFinal = total - valorDesconto;

    printf("Total da compra: R$ %.2f\n", total);
    printf("Desconto aplicado: %.0f%%\n", percentual);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", totalFinal);

    return 0;
}