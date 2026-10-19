#include <stdio.h>

int main(void) {
    int quantidade;
    int numero;
    int quantidadePares;
    int quantidadeImpares;
    int maiorPar;
    int menorPar;
    int maiorImpar;
    int menorImpar;
    int i;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &quantidade);

    quantidadePares = 0;
    quantidadeImpares = 0;

    for (i = 0; i < quantidade; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numero);

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