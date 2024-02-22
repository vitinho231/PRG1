#include <stdio.h>

#define PI 3.1415

float area_anel(float r1, float r2)
{
    float area1, area2;

    area1 = PI * r1 * r1;
    area2 = PI * r2 * r2;
  
    return area2 - area1;
}

int main()
{
    float raio_interno, raio_externo, area_ret; // Declaração das variáveis para os raios e a área do anel

    // Solicita ao usuário os valores dos raios interno e externo
    printf("Entre com o raio interno do anel: ");
    scanf("%f", &raio_interno);
    printf("Entre com o raio externo do anel: ");
    scanf("%f", &raio_externo);

    // Calcula a área do anel usando a função area_anel
    area_ret = area_anel(raio_interno, raio_externo);

    // Exibe o resultado
    printf("A area do anel com raio interno %.2f e raio externo %.2f eh %.2f\n", raio_interno, raio_externo, area_ret);

    return 0;
}

