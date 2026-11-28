#include <stdio.h>
#include "sensor.h"

int main(void) {
    Sensor *s = sensor_criar("TMP-01", "Temperatura", "C");
    if (s == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    sensor_registrar_medicao(s, 27.5f);
    sensor_exibir(s);

    sensor_registrar_medicao(s, 29.1f);
    printf("\nNova medicao do sensor %s: %.2f %s\n",
           sensor_get_id(s),
           sensor_get_ultima_medicao(s),
           sensor_get_unidade(s));

    sensor_liberar(s);
    return 0;
}
