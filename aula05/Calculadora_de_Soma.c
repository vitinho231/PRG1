#include <stdio.h> 

int main()
{
    int N, S, i, parcela; // Declaração das variáveis

    printf("Entre com o valor de N\n"); // Solicita ao usuário o valor de N
    scanf("%d", &N); // Lê o valor de N fornecido pelo usuário

    i = 0; // Inicializa a variável de controle i
    S = 0; // Inicializa a variável de soma S

    // Loop para somar N parcelas
    while (i < N) {
        printf("Entre com uma parcela\n"); // Solicita ao usuário uma parcela
        scanf("%d", &parcela); // Lê a parcela fornecida pelo usuário
        S = S + parcela; // Adiciona a parcela à soma S
        i = i + 1; // Incrementa a variável de controle i
    }

    printf("O somatório é %d\n", S); // Imprime o somatório

    return 0; 
}

