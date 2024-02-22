#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;

    // Itera sobre todos os argumentos passados para o programa
    for (i = 0; i < argc; i++) {
        printf("%s\n", argv[i]); // Imprime cada argumento
    }

    // Imprime o número total de parâmetros passados, excluindo o nome do arquivo executável
    printf("Numero de parametros passados = %d\n", argc - 1);

    return 0; 

