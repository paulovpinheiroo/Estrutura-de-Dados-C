#ifndef PONTO_H
#define PONTO_H

// struct ponto {
//     int x;
//     int y;
// };

typedef struct ponto {
    int x;
    int y;
} Ponto; // Para tirar o struct

float calcularDistancia(Ponto p1, Ponto p2);

#endif
