#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Verifica se o número de argumentos passados é igual a 3
    if (argc == 3) {
        // Compara as strings passadas como argumentos
        if (strcmp(argv[1], argv[2]) == 0) {
            printf("As strings são iguais\n"); // Se forem iguais, imprime que são iguais
        } else {
            printf("As strings são diferentes\n"); // Se forem diferentes, imprime que são diferentes
        }
    } else {
        // Se o número de argumentos não for igual a 3, imprime uma mensagem de erro
        printf("%s: Número de argumento inválido\n", argv[0]);
    }
    return 0;
}

