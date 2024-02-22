#include <stdio.h> 

int main()
{
    int N, i; // Declaração das variáveis

    printf("Entre com o número de x a ser impresso\n"); // Solicita ao usuário o número de vezes que 'x' será impresso
    scanf("%d", &N); // Lê o número fornecido pelo usuário

    i = 0; // Inicializa a variável de controle i

    // Loop para imprimir 'x' N vezes
    while (i < N) {
        printf("x"); // Imprime 'x'
        i = i + 1; // Incrementa a variável de controle i
    }

    printf("\n"); // Imprime uma nova linha após imprimir 'x' N vezes

    return 0; 
}

