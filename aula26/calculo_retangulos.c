#include <stdio.h>

// Definindo a estrutura tipo_retang
struct tipo_retang{
    float lado1;
    float lado2;
};

int main() {
    struct tipo_retang x, y; // Declaração de duas variáveis do tipo tipo_retang
    float area_final;

    // Atribuindo valores aos lados dos retângulos x e y
    x.lado1 = 5.5;
    x.lado2 = 6.7;

    y.lado1 = 2.3;
    y.lado2 = 7.9; // Podia ser lido com scanf também

    // Calculando a área total dos dois retângulos
    area_final = (x.lado1 * x.lado2) + (y.lado1 * y.lado2);

    // Imprimindo a área total
    printf("Área total dos dois retângulos = %f\n", area_final);

    return 0;
}

