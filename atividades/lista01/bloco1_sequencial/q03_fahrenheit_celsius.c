#include <stdio.h>

int main(void) {
    float fahrenheit;
    float celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;

    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius\n", fahrenheit, celsius);

    return 0;
}