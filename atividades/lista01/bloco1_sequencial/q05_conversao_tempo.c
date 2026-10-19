#include <stdio.h>

int main(void) {
    int segundos;
    int horas;
    int minutos;
    int resto;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d hora, %d minuto e %d segundo", horas,minutos,segundos);

    return 0;
}