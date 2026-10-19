#include <stdio.h>

int main(void) {
    int numero;
    int quantidadePares;
    int quantidadeImpares;
    int maiorPar;
    int menorPar;
    int maiorImpar;
    int menorImpar;

    quantidadePares = 0;
    quantidadeImpares = 0;

    printf("Digite um numero natural (0 encerra): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 2 == 0) {
            quantidadePares = quantidadePares + 1;

            if (quantidadePares == 1) {
                maiorPar = numero;
                menorPar = numero;
            } else {
                if (numero > maiorPar) {
                    maiorPar = numero;
                }

                if (numero < menorPar) {
                    menorPar = numero;
                }
            }
        } else {
            quantidadeImpares = quantidadeImpares + 1;

            if (quantidadeImpares == 1) {
                maiorImpar = numero;
                menorImpar = numero;
            } else {
                if (numero > maiorImpar) {
                    maiorImpar = numero;
                }

                if (numero < menorImpar) {
                    menorImpar = numero;
                }
            }
        }

        printf("Digite um numero natural (0 encerra): ");

        if (scanf("%d", &numero) != 1) {
            break;
        }
    }

    printf("Pares informados: %d\n", quantidadePares);
    printf("Impares informados: %d\n", quantidadeImpares);

    if (quantidadePares == 0) {
        printf("Nenhum numero par foi informado\n");
    } else {
        printf("Maior par: %d\n", maiorPar);
        printf("Menor par: %d\n", menorPar);
    }

    if (quantidadeImpares == 0) {
        printf("Nenhum numero impar foi informado\n");
    } else {
        printf("Maior impar: %d\n", maiorImpar);
        printf("Menor impar: %d\n", menorImpar);
    }

    return 0;
}