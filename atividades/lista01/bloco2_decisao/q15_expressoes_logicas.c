#include <stdio.h>

int main(void) {
    int primeiroResultado;
    int segundoResultado;
    int terceiroResultado;
    int quartoResultado;

    primeiroResultado = !3;
    segundoResultado = !0;
    terceiroResultado = 3 + 'a' > 'b' + 2 && !'b';
    quartoResultado = 1 || !2 && 3;

    printf("%d %d %d %d\n", primeiroResultado, segundoResultado, terceiroResultado, quartoResultado);

    return 0;
}