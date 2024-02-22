// Este programa calcula a resistência equivalente em um circuito em série e em paralelo.

// Inclui a biblioteca padrão de entrada e saída
#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int i, N; // Número de resistências
    float resistencia, serie, paralelo; // Valores de resistência, série e paralelo

    // Solicita ao usuário o valor de N
    printf("Entre com o valor de N:  \n");
    scanf("%d", &N); // Lê o valor de N fornecido pelo usuário

    // Inicializa as variáveis de série e paralelo
    serie = 0; 
    paralelo = 0;
    
    // Loop para ler as resistências e calcular a resistência equivalente em série e em paralelo
    for (i = 0; i < N; i++) {
        printf("Entre com o valor da resistencia %d\n", i + 1);
        scanf("%f", &resistencia); // Lê o valor da resistência fornecido pelo usuário
        serie = serie + resistencia; // Adiciona a resistência atual à resistência total em série
        if (resistencia > 0) 
            paralelo = paralelo + 1 / resistencia; // Adiciona o inverso da resistência atual à resistência total em paralelo
    }         
    
    // Calcula a resistência total em paralelo, se aplicável
    if (paralelo > 0)
        paralelo = 1 / paralelo;
    
    // Exibe os valores calculados
    printf("Valor da resistência em série: %f\n", serie);		
    printf("Valor da resistência em paralelo: %f\n", paralelo);
    
    return 0;
}

