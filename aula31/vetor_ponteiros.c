#include <stdio.h>

int main() {
    int i;

    // Declaração de um array de ponteiros para caracteres (strings)
    char *vp[4];

    // Declaração e inicialização de quatro strings
    char alfa[5] = "IFSC";
    char beta[5] = "TELE";
    char delta[5] = "RAC";
    char gamma[5] = "CGER";

    // Atribuição dos endereços das strings aos elementos do array de ponteiros
    vp[0] = alfa;
    vp[1] = beta;
    vp[2] = delta;
    vp[3] = gamma;

    // Impressão das strings armazenadas nos elementos do array de ponteiros
    for (i = 0; i < 4; i++)
        printf("%s\n", vp[i]);

    return 0; 
}

