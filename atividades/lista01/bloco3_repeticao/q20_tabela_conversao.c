#include <stdio.h>

int main(void) {
    int i;

    printf("Polegadas   Centimetros\n");

    for (i = 0; i <= 20; i++) {
        float polegadas = i * 0.5f;
        float centimetros = polegadas * 2.54f;

        printf("%5.1f %13.2f\n", polegadas, centimetros);
    }

    return 0;
}