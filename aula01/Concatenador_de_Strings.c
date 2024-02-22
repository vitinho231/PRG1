#include <stdio.h> // Incluindo a biblioteca de entrada e saída padrão
#include <string.h> // Incluindo a biblioteca para manipulação de strings

// Função para concatenar duas strings
void str_cat(char dest[], const char font[])
{
    strcat(dest, font); // Concatenando a string font na string dest usando a função strcat
}

int main()
{
    char x[20] = "IFSC-SJ"; // String de destino
    char y[20] = " University"; // String a ser concatenada

    str_cat(x, y); // Chamando a função para concatenar as strings
    printf("%s\n", x); // Imprimindo a string resultante

    return 0; // Indicando que o programa foi executado com sucesso
}

