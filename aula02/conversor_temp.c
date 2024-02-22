// Este programa converte temperaturas entre Celsius e Fahrenheit.

// Inclui a biblioteca padrão de entrada e saída
#include <stdio.h>

// Função para converter temperatura entre Celsius e Fahrenheit
float converte_temp(float temp, int flag)
{
    float temp_aux;
    if (flag == 0) {
        temp_aux = temp * 1.8 + 32; // Converte de Celsius para Fahrenheit
    } else {
        temp_aux = (5 / 9.0) * (temp - 32); // Converte de Fahrenheit para Celsius
    }
    return temp_aux; 
}

// Função principal
int main()
{
    // Declaração de variáveis
    float temp_conv, temp1 = 25.7;

    // Conversão de Celsius para Fahrenheit
    temp_conv = converte_temp(temp1, 0);
    printf("Conversão de %f Celsius para %f Fahrenheit\n", temp1, temp_conv);

    // Conversão de Celsius para Fahrenheit
    temp1 = -5.7;
    temp_conv = converte_temp(temp1, 0);
    printf("Conversão de %f Celsius para %f Fahrenheit\n", temp1, temp_conv);

    // Conversão de Fahrenheit para Celsius
    temp1 = 87.7;
    temp_conv = converte_temp(temp1, 1);
    printf("Conversão de %f Fahrenheit para %f Celsius\n", temp1, temp_conv);

    return 0;
}

