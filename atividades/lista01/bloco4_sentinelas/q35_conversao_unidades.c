#include <stdio.h>

int main(void) {
    int classe;
    int conversao;
    float valor;
    float resultado;
    float fator;
    const char *origem;
    const char *destino;

    while (1) {
        printf("\n1 - Peso\n");
        printf("2 - Volume\n");
        printf("3 - Comprimento\n");
        printf("4 - Sair\n");
        printf("Escolha a classe de unidade: ");

        if (scanf("%d", &classe) != 1) {
            break;
        }

        if (classe == 4) {
            break;
        }

        switch (classe) {
            case 1:
                printf("\n1 - Libra para quilograma\n");
                printf("2 - Quilograma para libra\n");
                printf("3 - Onca para grama\n");
                printf("4 - Grama para onca\n");
                printf("Escolha a conversao: ");
                scanf("%d", &conversao);

                switch (conversao) {
                    case 1:
                        fator = 0.4536f;
                        origem = "libra";
                        destino = "quilograma";
                        break;

                    case 2:
                        fator = 1.0f / 0.4536f;
                        origem = "quilograma";
                        destino = "libra";
                        break;

                    case 3:
                        fator = 28.3495f;
                        origem = "onca";
                        destino = "grama";
                        break;

                    case 4:
                        fator = 1.0f / 28.3495f;
                        origem = "grama";
                        destino = "onca";
                        break;

                    default:
                        printf("Conversao invalida\n");
                        continue;
                }
                break;

            case 2:
                printf("\n1 - Galão para litro\n");
                printf("2 - Litro para galão\n");
                printf("3 - Onca liquida para mililitro\n");
                printf("4 - Mililitro para onca liquida\n");
                printf("Escolha a conversao: ");
                scanf("%d", &conversao);

                switch (conversao) {
                    case 1:
                        fator = 3.7854f;
                        origem = "galao";
                        destino = "litro";
                        break;

                    case 2:
                        fator = 1.0f / 3.7854f;
                        origem = "litro";
                        destino = "galao";
                        break;

                    case 3:
                        fator = 29.5735f;
                        origem = "onca liquida";
                        destino = "mililitro";
                        break;

                    case 4:
                        fator = 1.0f / 29.5735f;
                        origem = "mililitro";
                        destino = "onca liquida";
                        break;

                    default:
                        printf("Conversao invalida\n");
                        continue;
                }
                break;

            case 3:
                printf("\n1 - Milha para quilometro\n");
                printf("2 - Quilometro para milha\n");
                printf("3 - Jarda para metro\n");
                printf("4 - Metro para jarda\n");
                printf("Escolha a conversao: ");
                scanf("%d", &conversao);

                switch (conversao) {
                    case 1:
                        fator = 1.6093f;
                        origem = "milha";
                        destino = "quilometro";
                        break;

                    case 2:
                        fator = 1.0f / 1.6093f;
                        origem = "quilometro";
                        destino = "milha";
                        break;

                    case 3:
                        fator = 0.9144f;
                        origem = "jarda";
                        destino = "metro";
                        break;

                    case 4:
                        fator = 1.0f / 0.9144f;
                        origem = "metro";
                        destino = "jarda";
                        break;

                    default:
                        printf("Conversao invalida\n");
                        continue;
                }
                break;

            default:
                printf("Classe invalida\n");
                continue;
        }

        printf("Digite o valor em %s: ", origem);
        scanf("%f", &valor);

        resultado = valor * fator;

        printf("Resultado: %.4f %s\n", resultado, destino);
    }

    return 0;
}