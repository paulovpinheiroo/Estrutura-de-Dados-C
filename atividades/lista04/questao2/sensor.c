#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sensor.h"

struct sensor {
    char *id;
    char *tipo;
    char *unidade;
    float ultima_medicao;
};

static char *copiar_string(const char *origem) {
    char *copia = malloc(strlen(origem) + 1);
    if (copia != NULL)
        strcpy(copia, origem);
    return copia;
}

Sensor *sensor_criar(const char *id, const char *tipo, const char *unidade) {
    Sensor *s = malloc(sizeof(Sensor));
    if (s == NULL)
        return NULL;

    s->id = copiar_string(id);
    s->tipo = copiar_string(tipo);
    s->unidade = copiar_string(unidade);
    s->ultima_medicao = 0.0f;

    if (s->id == NULL || s->tipo == NULL || s->unidade == NULL) {
        sensor_liberar(s);
        return NULL;
    }

    return s;
}

void sensor_registrar_medicao(Sensor *s, float valor) {
    if (s != NULL)
        s->ultima_medicao = valor;
}

const char *sensor_get_id(const Sensor *s) {
    return s != NULL ? s->id : NULL;
}

const char *sensor_get_tipo(const Sensor *s) {
    return s != NULL ? s->tipo : NULL;
}

const char *sensor_get_unidade(const Sensor *s) {
    return s != NULL ? s->unidade : NULL;
}

float sensor_get_ultima_medicao(const Sensor *s) {
    return s != NULL ? s->ultima_medicao : 0.0f;
}

void sensor_exibir(const Sensor *s) {
    if (s == NULL)
        return;

    printf("ID: %s\n", s->id);
    printf("Tipo: %s\n", s->tipo);
    printf("Ultima medicao: %.2f %s\n", s->ultima_medicao, s->unidade);
}

void sensor_liberar(Sensor *s) {
    if (s == NULL)
        return;

    free(s->id);
    free(s->tipo);
    free(s->unidade);
    free(s);
}
