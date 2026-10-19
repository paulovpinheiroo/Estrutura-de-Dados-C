#include <stdio.h>

int main(void) {
    int numeros[] = {5, 3, 10, 4}; // 4 bytes cada um, e ocupação de memória do array vai ter 16 bytes
    char nome[] = {'P', 'a', 'u', 'l', 'o', '\0'}; // 1 byte cada um, ocupação de memória do array é 6 bytes
    // \0 serve para indicar o fim de uma string 
    char sobrenome[] = "Victor";

    printf("Nome: %s\n", nome);
    printf("Sobrenome: %s\n", sobrenome);


    char cidade[50];

    printf("Digite sua cidade: ");

    // printf("Cidade digitada: %s", cidade); // Lê até o primeiro espaço em branco;
    fgets(cidade, sizeof(cidade), stdin); // variável, tamanho, entrada padrão (teclado);

    printf("Cidade formatada: %s", cidade); // Lê até o primeiro espaço em branco;

    return 0;
}