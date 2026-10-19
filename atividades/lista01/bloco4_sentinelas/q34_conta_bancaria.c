#include <stdio.h>

int main(void) {
    float saldoInicial;
    float operacao;
    float totalCreditos;
    float totalDebitos;
    float taxa;
    float saldoFinal;

    printf("Saldo inicial: ");
    scanf("%f", &saldoInicial);

    saldoFinal = saldoInicial;
    totalCreditos = 0.0f;
    totalDebitos = 0.0f;

    printf("Operacao: ");
    scanf("%f", &operacao);

    while (operacao != 0.0f) {
        if (operacao > 0.0f) {
            totalCreditos = totalCreditos + operacao;
        } else {
            totalDebitos = totalDebitos - operacao;
        }

        saldoFinal = saldoFinal + operacao;

        printf("Operacao: ");

        if (scanf("%f", &operacao) != 1) {
            break;
        }
    }

    taxa = totalDebitos * 0.0035f;
    saldoFinal = saldoFinal - taxa;

    printf("Total de creditos: R$ %.2f\n", totalCreditos);
    printf("Total de debitos: R$ %.2f\n", totalDebitos);
    printf("Taxa paga: R$ %.2f\n", taxa);
    printf("Saldo final: R$ %.2f\n", saldoFinal);

    return 0;
}