#include <stdio.h>

int main(void) {
    float primeiraNota;
    float segundaNota;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNota);

    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNota);

    media = (primeiraNota + segundaNota) / 2.0f;

    if (media >= 7.0f) {
        printf("Media: %.1f\n", media);
        printf("Situacao: aprovado\n");
    } else if (media < 3.0f) {
        printf("Media: %.1f\n", media);
        printf("Situacao: reprovado\n");
    } else {
        printf("Media: %.1f\n", media);
        printf("Situacao: em recuperacao\n");
    }

    return 0;
}