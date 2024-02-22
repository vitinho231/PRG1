#include <stdio.h>
#include <string.h>

// Definindo tabelas de usuários e senhas
char tabelausuarios[4][10] = {"joao", "maria", "josefina", "lara"};
char tabelasenhas[4][10] = {"joao123", "maria123", "josef123", "lara123"};

// Função para verificar se um usuário pode abrir a porta
int abrir_porta(char tabuser[4][10], char tabsenhas[4][10], char userid[], char senha[])
{
    for (int i = 0; i < 4; i++)
    {
        // Verifica se o usuário existe
        if (strcmp(tabuser[i], userid) == 0)
        {
            // Verifica se a senha está correta
            if (strcmp(tabsenhas[i], senha) == 0)
            {
                return 0; // Retorna 0 para porta aberta
            }
            else
            {
                return 2; // Retorna 2 para senha inválida
            }
        }
    }
    return 1; // Retorna 1 para usuário não encontrado
}

// Função para modificar a senha de um usuário
void modificar_senha(char tabuser[4][10], char tabsenhas[4][10], char userid[], char nova_senha[])
{
    for (int i = 0; i < 4; i++)
    {
        // Verifica se o usuário existe
        if (strcmp(tabuser[i], userid) == 0)
        {
            strcpy(tabsenhas[i], nova_senha); // Modifica a senha
            printf("Senha modificada com sucesso!\n");
            return;
        }
    }
    printf("Usuário não encontrado.\n");
}

int main()
{
    char userid[10];
    char senha[10];
    char nova_senha[10];

    // Solicita ao usuário o userid e a senha
    printf("Digite o userid: ");
    scanf("%s", userid);
    printf("Digite a senha: ");
    scanf("%s", senha);

    // Verifica se o usuário pode abrir a porta
    int resultado = abrir_porta(tabelausuarios, tabelasenhas, userid, senha);
    switch (resultado)
    {
    case 0:
        printf("Porta aberta!\n");
        break;
    case 1:
        printf("Usuário não existe.\n");
        break;
    case 2:
        printf("Senha inválida.\n");
        break;
    }

    // Solicita ao usuário a nova senha
    printf("Digite a nova senha: ");
    scanf("%s", nova_senha);

    // Modifica a senha do usuário
    modificar_senha(tabelausuarios, tabelasenhas, userid, nova_senha);

    return 0;
}

