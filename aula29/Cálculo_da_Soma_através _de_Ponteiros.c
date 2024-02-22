#include <stdio.h>

int main(void) {
    int x, y, w, *p1, *p2; // Declaração das variáveis x, y, w e dos ponteiros p1 e p2

    x = 20; // Atribui o valor 20 à variável x
    w = 30; // Atribui o valor 30 à variável w

    p1 = &x; // Atribui o endereço de memória da variável x ao ponteiro p1
    p2 = &w; // Atribui o endereço de memória da variável w ao ponteiro p2

    y = *p1 + *p2; // Atribui à variável y a soma dos valores apontados por p1 e p2

    return 0; // Indica que o programa foi executado com sucesso
}

