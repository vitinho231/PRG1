#include <stdio.h> // Incluindo a biblioteca de entrada e saída padrão

// Função para somar os elementos de um vetor
int soma_vetor(int vetor[], int tamanho)
{
    int soma = 0; // Inicializa a variável de soma

    // Loop para percorrer os elementos do vetor e somá-los
    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i]; // Adiciona o elemento atual ao total da soma
    }

    return soma; // Retorna o valor da soma
}

int main()
{
    int vetor[] = {1, 2, 3, 4, 5}; // Declaração e inicialização do vetor
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor
    int resultado = soma_vetor(vetor, tamanho); // Chama a função para somar os elementos do vetor

    // Imprime o resultado da soma
    printf("A soma dos elementos do vetor é: %d\n", resultado);

    return 0; // Indica que o programa foi executado com sucesso
}

