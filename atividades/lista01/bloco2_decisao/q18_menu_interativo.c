#include <stdio.h>

int main(void) {
    int opcao;
    float primeiroNumero;
    float segundoNumero;
    float resultado;

    do {
        printf("\n1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            break;
        }

        switch (opcao) {
            case 1:
                printf("Primeiro numero: ");
                scanf("%f", &primeiroNumero);
                printf("Segundo numero: ");
                scanf("%f", &segundoNumero);
                resultado = primeiroNumero + segundoNumero;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2:
                printf("Primeiro numero: ");
                scanf("%f", &primeiroNumero);
                printf("Segundo numero: ");
                scanf("%f", &segundoNumero);
                resultado = primeiroNumero - segundoNumero;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3:
                printf("Primeiro numero: ");
                scanf("%f", &primeiroNumero);
                printf("Segundo numero: ");
                scanf("%f", &segundoNumero);
                resultado = primeiroNumero * segundoNumero;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4:
                printf("Primeiro numero: ");
                scanf("%f", &primeiroNumero);
                printf("Segundo numero: ");
                scanf("%f", &segundoNumero);
                if (segundoNumero == 0.0f) {
                    printf("Nao e possivel dividir por zero\n");
                } else {
                    resultado = primeiroNumero / segundoNumero;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;

            case 5:
                printf("Ate a proxima\n");
                break;

            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 5);

    return 0;
}