#include <stdio.h> 
#include <string.h> 
// Função para concatenar duas strings
void concatenar_strings(char dest[], const char fonte[])
{
    strcat(dest, fonte); // Concatena a string fonte na string dest usando a função strcat
}

int main()
{
    char string_destino[40] = "IFSC-SJ"; // String de destino inicial
    char string_fonte[20] = " University"; // String a ser concatenada

    concatenar_strings(string_destino, string_fonte); // Chama a função para concatenar as strings
    printf("String resultante: %s\n", string_destino); // Imprime a string resultante

    return 0; 
}

