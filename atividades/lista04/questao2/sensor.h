#ifndef SENSOR_H
#define SENSOR_H

typedef struct sensor Sensor;

Sensor *sensor_criar(const char *id, const char *tipo, const char *unidade);
void sensor_registrar_medicao(Sensor *s, float valor);

const char *sensor_get_id(const Sensor *s);
const char *sensor_get_tipo(const Sensor *s);
const char *sensor_get_unidade(const Sensor *s);
float sensor_get_ultima_medicao(const Sensor *s);
void sensor_exibir(const Sensor *s);

void sensor_liberar(Sensor *s);

#endif
