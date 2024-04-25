#include <stdio.h>

// constantes
const float pi = 3.1415;

// interfaces
float soma(float n1, float n2);
float subtracao(float n1, float n2);
float multiplicacao(float n1, float n2);
float divisao(float n1, float n2);
int divisao_inteira(float n1, float n2);
int resto_div_inteira(float n1, float n2);
float calcula_area_circulo(float raio);

int main() {
    int op = 0;
    printf("Qual operação voce deseja executar?\n");
    printf("(1) soma\n");
    printf("(2) subtração\n");
    printf("(3) multiplicação\n");
    printf("(4) divisão\n");
    printf("(5) divisão inteira\n");
    printf("(6) resto de divisão inteira\n");
    printf("(7) área de circulo\n");
    printf("Operação: ");
    scanf("%d", &op); //  coloquei o operador & antes de 'op'

    float num1, num2, resultado;

    if (op >= 1 && op <= 6) {
        printf("Entre com o primeiro número: ");
        scanf("%f", &num1);
        printf("Entre com o segundo número:  ");
        scanf("%f", &num2);

        switch (op) {
            case 1:
                resultado = soma(num1, num2);
                printf("Resultado: %.2f\n", resultado); // troquei %2f por %.2f para formatar para 2 casas decimais
                break;
            case 2:
                resultado = subtracao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicacao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                resultado = divisao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 5:
                resultado = divisao_inteira(num1, num2);
                printf("Resultado: %d\n", (int)resultado);
                break;

            case 6:
                resultado = resto_div_inteira(num1, num2);
                printf("Resultado: %d\n", (int)resultado);
                break;
            default:
                printf("Operação inválida.\n");
        }
    } else if (op == 7) {
        printf("Entre com o raio do circulo: \n");
        float raio;
        scanf("%f", &raio);

        float area = calcula_area_circulo(raio);
        printf("Area: %.2f\n", area);
    } else {
        printf("Operação inválida.\n");
    }

    return 0;
}

float soma(float n1, float n2) {
    return n1 + n2;
}

float subtracao(float n1, float n2) {
    return n1 - n2;
}

float multiplicacao(float n1, float n2) {
    return n1 * n2;
}

float divisao(float n1, float n2) {
    return n1 / n2;
}

int divisao_inteira(float n1, float n2) {
    return (int)(n1 / n2);
}

int resto_div_inteira(float n1, float n2) {
    return (int)(n1) % (int)(n2);
}

float calcula_area_circulo(float raio) {
    return pi * (raio * raio);
}