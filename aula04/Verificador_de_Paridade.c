#include <stdio.h> // Inclui a biblioteca de entrada e saída padrão

// Função para verificar se um número é par ou ímpar
int impar_par(int n)
{
    if (n % 2 == 0)
        return 0; // Retorna 0 se o número for par
    else
        return 1; // Retorna 1 se o número for ímpar
}

int main()
{
    int numero;

    // Teste da função com diferentes números
    numero = 15;
    printf("O número %d retorna %d\n", numero, impar_par(numero));

    numero = 7;
    printf("O número %d retorna %d\n", numero, impar_par(numero));

    numero = 66;
    printf("O número %d retorna %d\n", numero, impar_par(numero));

    return 0; // Indica que o programa foi executado com sucesso
}

