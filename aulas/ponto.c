#include "ponto.h"
#include <math.h>

float calcularDistancia(Ponto p1, Ponto p2) {
    float subX = p2.x - p1.x;
    float subY = p2.y - p1.y;
    float distancia = sqrt((subX * subX) + (subY * subY));
    return distancia;
}
