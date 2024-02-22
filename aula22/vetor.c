#include <stdio.h>

// Função para somar dois vetores e armazenar o resultado em um terceiro vetor
void soma_vet(int vetA[], int vetB[], int vetRes[], int dimensao)
{
    int i;

    // Loop para percorrer os elementos dos vetores
    for (i = 0; i < dimensao; i++)
    {
        vetRes[i] = vetA[i] + vetB[i]; // Soma os elementos dos vetores vetA e vetB e armazena o resultado em vetRes
    }
}

int main()
{
    // Definição dos vetores de entrada e saída
    int x[5] = {6, 9, 7, 3, 1}; // Vetor x
    int y[5] = {10, 3, 5, 8, 1}; // Vetor y
    int w[5]; // Vetor para armazenar o resultado da soma
    
    // Chamada da função soma_vet para somar os vetores x e y e armazenar o resultado em w
    soma_vet(x, y, w, 5);

    // Imprimindo o resultado da soma
    printf("Resultado da soma:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", w[i]); // Imprime cada elemento do vetor resultante
    }
    printf("\n");

    return 0; // Indica que o programa foi executado com sucesso
}

