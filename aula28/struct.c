#include <stdio.h>
#include <math.h>

// Definição da estrutura para representar números complexos
struct tcomplexo {
    float real; // Parte real
    float imag; // Parte imaginária
};

// Função para calcular o módulo de um número complexo
float modulo_complexo(struct tcomplexo x)
{
    float mod;
    mod = sqrtf(x.real * x.real + x.imag * x.imag); // Calcula a raiz quadrada da soma dos quadrados das partes real e imaginária
    return mod; // Retorna o módulo
}

// Função para imprimir um número complexo
void imprimir_complexo(struct tcomplexo x)
{
    printf("Parte real = %.2f\n", x.real); // Imprime a parte real com duas casas decimais
    printf("Parte imag = %.2f\n", x.imag); // Imprime a parte imaginária com duas casas decimais
}

int main()
{
    // Declaração e inicialização de um número complexo
    struct tcomplexo num1 = {3.5, 7.2};
    float modulo;

    // Chamada da função para imprimir o número complexo
    printf("Número complexo:\n");
    imprimir_complexo(num1);

    // Chamada da função para calcular o módulo do número complexo
    modulo = modulo_complexo(num1);

    // Imprime o resultado do módulo do número complexo
    printf("Modulo = %.2f\n", modulo);

    return 0; // Indica que o programa foi executado com sucesso
}

