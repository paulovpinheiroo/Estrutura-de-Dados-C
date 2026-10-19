#include <stdio.h>

int main(void) {
    float primeiroNumero;
    float segundoNumero;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &primeiroNumero);

    printf("Digite o segundo numero: ");
    scanf("%f", &segundoNumero);

    printf("Digite a operacao (+, -, * ou /): ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            printf("Resultado: %.2f\n", primeiroNumero + segundoNumero);
            break;

        case '-':
            printf("Resultado: %.2f\n", primeiroNumero - segundoNumero);
            break;

        case '*':
            printf("Resultado: %.2f\n", primeiroNumero * segundoNumero);
            break;

        case '/':
            if (segundoNumero == 0.0f) {
                printf("Nao e possivel dividir por zero\n");
            } else {
                printf("Resultado: %.2f\n", primeiroNumero / segundoNumero);
            }
            break;

        default:
            printf("Operacao invalida\n");
    }

    return 0;
}