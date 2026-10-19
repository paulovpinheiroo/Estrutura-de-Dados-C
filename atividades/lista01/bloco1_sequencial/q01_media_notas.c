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

    printf("Media final: %.2f\n", media);

    return 0;
}