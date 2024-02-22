#include <stdio.h> 

int main()
{
    int cont; // Declaração da variável de controle

    cont = 0; // Inicialização da variável de controle

    // Loop while para incrementar a variável de controle até atingir 5
    while (cont < 5) {
        cont = cont + 1; // Incrementa a variável de controle
        printf("Valor parcial de cont é %d\n", cont); // Imprime o valor parcial de cont
    }

    printf("Valor final de cont é %d\n", cont); // Imprime o valor final de cont após o loop

    return 0; 
}

