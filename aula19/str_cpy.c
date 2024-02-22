#include <stdio.h> // Incluindo a biblioteca de entrada e saída padrão
#include <string.h> // Incluindo a biblioteca para manipulação de strings

int main() {
    char x[20] = "IFSC-SJ"; // Declaração e inicialização de uma string x
    char y[20]; // Declaração de uma string y
    char w[] = "-SC"; // Declaração e inicialização de uma string w

    strcpy(y, x); // Copia o conteúdo da string x para a string y
    strcat(y, w); // Concatena o conteúdo da string w com a string y

    printf("%s\n", y); // Imprime a string y

    return 0; // Indica que o programa foi executado com sucesso
}

