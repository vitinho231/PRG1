#include <stdio.h>
#include <string.h>

#define TAM_TABELA 4

// Definição da estrutura TRegistro para armazenar nome e idade
struct TRegistro 
{
    char nome[20];
    char idade; 
} tabela[TAM_TABELA] = { // Declaração e inicialização da tabela de registros
    {"joao", 18},
    {"maria", 18},
    {"jose", 19},
    {"lara", 17}
};

// Função para encontrar um usuário na tabela de registros
struct TRegistro* retorna_usuario(struct TRegistro* tabela, int tam_tabela, const char* usuario) 
{
    // Itera sobre a tabela de registros
    for (int i = 0; i < tam_tabela; i++) {
        // Verifica se o nome do registro atual é igual ao usuário procurado
        if (strcmp(tabela[i].nome, usuario) == 0) {
            return &tabela[i]; // Retorna o ponteiro para o registro encontrado
        }
    }
    
    return NULL; // Retorna NULL se o usuário não for encontrado
}

int main()
{
    const char* usuario = "jose"; // Define o usuário a ser procurado
    struct TRegistro* usuario_encontrado = retorna_usuario(tabela, TAM_TABELA, usuario); // Procura o usuário na tabela
    
    // Verifica se o usuário foi encontrado
    if (usuario_encontrado != NULL) {
        // Imprime os dados do usuário encontrado
        printf("Usuário encontrado: %s, %d anos\n", usuario_encontrado->nome, usuario_encontrado->idade);
    } else {
        // Imprime uma mensagem caso o usuário não seja encontrado
        printf("Usuário não encontrado.\n");
    }
    
    return 0; 

