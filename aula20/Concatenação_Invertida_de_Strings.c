#include <stdio.h>
#include <string.h>

void concat_inv(char str1[], char str2[]) {
    char aux[30]; // Declaração de um array auxiliar para armazenar a concatenação

    strcpy(aux, str2); // Copia str2 para aux
    strcat(aux, str1); // Concatena str1 ao final de aux

    printf("Concatenação invertida: %s\n", strrev(aux)); // Imprime a concatenação invertida
}

int main() {
    char str1[] = "mundo!";
    char str2[] = "Olá, ";

    concat_inv(str1, str2);

    return 0;
}

