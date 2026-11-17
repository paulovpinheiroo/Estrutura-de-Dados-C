#include <stdio.h>


void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // a)
    int x = 10;
    int y = 20;

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    // b)
    trocar(&x, &y);

    // c)
    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}