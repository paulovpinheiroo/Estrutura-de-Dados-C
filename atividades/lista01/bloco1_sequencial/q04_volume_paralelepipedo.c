#include <stdio.h>

int main(void) {
    float largura;
    float altura;
    float profundidade;
    float volume;

    printf("Digite a largura: ");
    scanf("%f", &largura);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite a profundidade: ");
    scanf("%f", &profundidade);

    volume = largura * altura * profundidade;

    printf("Volume do paralelepipedo: %.2f\n", volume);

    return 0;
}