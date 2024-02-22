#include <stdio.h>

int main(void) {
    int x = 10; // Declara e inicializa a variável x com o valor 10
    int y, *p, *w; // Declara as variáveis y e os ponteiros p e w

    p = &x; // Atribui o endereço de x ao ponteiro p
    w = &y; // Atribui o endereço de y ao ponteiro w
    *w = *p; // Copia o valor apontado por p para o endereço apontado por w, ou seja, copia o valor de x para y

    // Imprime o valor copiado para y
    printf("Valor copiado para y: %d\n", y);

    return 0; // Indica que o programa foi executado com sucesso
}

