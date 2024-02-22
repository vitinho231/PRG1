#include <stdio.h> // Incluindo a biblioteca de entrada e saída padrão
#include <string.h> // Incluindo a biblioteca para manipulação de strings

// Função para concatenar duas strings
void concatenar_strings(char dest[], const char fonte[])
{
    strcat(dest, fonte); // Concatenando a string fonte na string dest usando a função strcat
}

int main()
{
    char string_destino[20] = "IFSC-SJ"; // String de destino
    char string_fonte[20] = " University"; // String a ser concatenada

    concatenar_strings(string_destino, string_fonte); // Chamando a função para concatenar as strings
    printf("String concatenada: %s\n", string_destino); // Imprimindo a string resultante

    return 0; // Indicando que o programa foi executado com sucesso
}

