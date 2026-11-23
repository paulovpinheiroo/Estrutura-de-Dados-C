#include <stdio.h>

#include "ponto.h"



int main(void) {

    // Ponto p1;

    // p1.x = 20;

    // p1.y = 20;



    // Ponto p2 = {5, 7};

    Ponto p1;

    Ponto p2;



    Ponto *pp = &p1; // Ponteiro para estrutura ponto p1

    (*pp).x = 15; // acessando campo interno via ponteiro

    (*pp).y = 20; // os () são necessários devido a precedência do .



    pp->x = 15; // Sintaxe simplificada de seta -> faz o mesmo

    pp->y = 20;



    printf("Ponto 1 - Cordenadas: %d e %d\n", p1.x, p1.y);

    printf("Ponto 2 - Cordenadas: %d e %d\n", p2.x, p2.y);



    printf("Distancia entre os pontos: %.2f", calcularDistancia(p1, p2));



    return 0;

}
