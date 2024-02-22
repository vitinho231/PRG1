#include <stdio.h> 

// Função para imprimir uma linha com 'N' caracteres 'x'
void imprime_linha(int N)
{
    int i = 0; // Declaração e inicialização da variável de controle 'i'

    while (i < N) { // Loop para imprimir 'N' caracteres 'x'
        printf("x"); // Imprime o caractere 'x'
        i = i + 1; // Incrementa a variável de controle 'i'
    }
    printf("\n"); // Imprime uma nova linha
}

// Função para imprimir um quadrado de 'N' linhas e 'N' colunas de caracteres 'x'
void imprime_quadrado(int N)
{
    int i, j; // Declaração das variáveis de controle 'i' e 'j'

    printf("Entre com o número de 'x's a ser impresso no quadrado\n"); // Solicita ao usuário o número de 'x's
    scanf("%d", &N); // Lê o número fornecido pelo usuário

    for (i = 0; i < N; i++) { // Loop para imprimir 'N' linhas
        imprime_linha(N); // Chama a função imprime_linha para imprimir uma linha com 'N' caracteres 'x'
    }
}

int main()
{
    int N; // Declaração da variável 'N' para o número de linhas e colunas

    printf("Entre com o número de 'x's a ser impresso\n"); // Solicita ao usuário o número de 'x's
    scanf("%d", &N); // Lê o número fornecido pelo usuário

    imprime_quadrado(N); // Chama a função imprime_quadrado para imprimir um quadrado de 'N' linhas e colunas de 'x's

    return 0; 

