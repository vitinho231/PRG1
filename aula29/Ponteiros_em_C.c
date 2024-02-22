#include <stdio.h>

//ponteiros em C

void main() {
    int x; // Declaração de uma variável inteira x
    int *p; // Declaração de um ponteiro para inteiro p

    x = 5; // Atribuição de um valor inicial para x
    printf("Valor de x antes = %d\n", x); // Imprime o valor inicial de x

    p = &x; // Atribui o endereço de x ao ponteiro p
    *p = 10; // Modifica o valor de x através do ponteiro p

    printf("Valor de x depois = %d\n", x); // Imprime o novo valor de x
    printf("Valor de p = %p\n", (void *)p); // Imprime o endereço de memória armazenado em p
}

