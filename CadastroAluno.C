// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

// Variáveis
int opMenuPrincipal,opCadastro;

// Voids
void Clear() {
    system("cls");
}

void MenuPrincipal() {
    Clear(); 
    printf("Olá, usuário! Seja bem-vindo ao sistema do controle acadêmico. \n\n");
    printf("+===============================================+\n");
    printf("|               CONTROLE ACADÊMICO              |\n");
    printf("+===============================================+\n");
    printf("|     1 - CADASTROS      |     2 - IMPRESSÃO    |\n");
    printf("+-----------------------------------------------+\n");
    printf("|     3 - CONTEÚDOS      |     4 - NOTAS        |\n");
    printf("+-----------------------------------------------+\n");
    printf("|                    5 - SAIR                   |\n");
    printf("+===============================================+\n\n");
    printf("Essa é a tela inicial do controle acadêmico, informe o número da opção desejada: ");
    scanf("%d", &opMenuPrincipal);
}

void SubMenuCad() {
    Clear();
    printf("+===============================================+\n");
    printf("|                    CADASTROS                  |\n");
    printf("+===============================================+\n");
    printf("|     1 - ALUNOS         |     2 - PROFESSORES  |\n");
    printf("+-----------------------------------------------+\n");
    printf("|     3 - DISCIPLINAS    |     4 - CURSOS       |\n");
    printf("+-----------------------------------------------+\n");
    printf("|         5 - RETORNAR AO MENU PRINCIPAL        |\n");
    printf("+===============================================+\n");
    printf("Essa é o menu de cadastro. \n Para acessar nossas funcionalidades, informe o número da opção desejada: ");
    printf("%d", &opCadastro);
}

void SubMenuImp() {
    Clear();
    printf("+==================================================+\n");
    printf("|                   GERAR IMPRESSÂO                |\n");
    printf("+==================================================+\n");
    printf("|   1 - ALUNOS e CURSO     |    2 - CONTEÚDOS      |\n");
    printf("+--------------------------------------------------+\n");
    printf("|   3 - DISCIPLINAS e PROF |    4 - BOLETIM        |\n");
    printf("+--------------------------------------------------+\n");
    printf("|           5 - RETORNAR AO MENU PRINCIPAL         |\n");
    printf("+==================================================+\n");
}

void RetornarMenu() {
    Clear();
    printf("+====================================+\n");
    printf("|                                    |\n");
    printf("|    RETORNANDO AO MENU ANTERIOR     |\n");
    printf("|                                    |\n");
    printf("+====================================+\n");
    Sleep(3500);
}

int main() {
    // Definindo Idioma
    setlocale(LC_ALL,"Portuguese_Brazil");
    MenuPrincipal();
}