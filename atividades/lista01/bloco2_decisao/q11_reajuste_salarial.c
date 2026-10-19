#include <stdio.h>

int main(void) {
    float salario;
    float novoSalario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    novoSalario = salario * 1.05f;

    if (salario <= 750.0f) {
        novoSalario = novoSalario + 100.0f;
    }

    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}