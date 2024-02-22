#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Definição da estrutura para armazenar o tempo (horas, minutos e segundos)
struct tempo
{
    char horas;
    char minutos;
    char segundos;
};

// Função para atualizar o relógio incrementando os segundos e ajustando minutos e horas, se necessário
void atualizar_relogio(struct tempo *p)
{
    p->segundos++; // Incrementa os segundos

    // Verifica se os segundos ultrapassaram 59, se sim, ajusta os minutos
    if (p->segundos >= 60) {
        p->segundos = 0; // Reinicia os segundos
        p->minutos++;    // Incrementa os minutos
    }

    // Verifica se os minutos ultrapassaram 59, se sim, ajusta as horas
    if (p->minutos >= 60) {
        p->minutos = 0; // Reinicia os minutos
        p->horas++;     // Incrementa as horas
    }

    // Verifica se as horas ultrapassaram 23, se sim, reinicia as horas
    if (p->horas >= 24) {
        p->horas = 0;
    }
}

// Função para mostrar o relógio no formato HH:MM:SS
void mostrar_relogio(struct tempo *p)
{
    printf("%02d:%02d:%02d\n", p->horas, p->minutos, p->segundos); // Imprime o tempo no formato HH:MM:SS
}

int main()
{
    struct tempo meu_relogio; // Declara uma variável do tipo tempo para representar o relógio
    meu_relogio.horas = 0;    // Inicializa as horas como 0
    meu_relogio.minutos = 0;  // Inicializa os minutos como 0
    meu_relogio.segundos = 0; // Inicializa os segundos como 0

    // Loop infinito para atualizar e mostrar o relógio
    while (1)
    {
        sleep(1);                      // Aguarda 1 segundo
        atualizar_relogio(&meu_relogio); // Atualiza o relógio
        mostrar_relogio(&meu_relogio);   // Mostra o relógio atualizado
    }

    return 0; 

