// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

// VariÃ¡veis
int opMenuPrincipal, opCadastro, opImpressao;

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
    printf("Essa é a tela inicial do controle acadêmico, informe o número da operação desejada: ");
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
    printf("Esse é o menu de Cadastro. \n Para acessar nossas funcionalidades, informe o número da operação desejada: ");
    printf("%d", &opCadastro);
}

void SubMenuImp() {
    Clear();
    printf("+==================================================+\n");
    printf("|                   GERAR IMPRESSÃO                |\n");
    printf("+==================================================+\n");
    printf("|   1 - ALUNOS e CURSO     |    2 - CONTEÚDOS      |\n");
    printf("+--------------------------------------------------+\n");
    printf("|   3 - DISCIPLINAS e PROF |    4 - BOLETIM        |\n");
    printf("+--------------------------------------------------+\n");
    printf("|           5 - RETORNAR AO MENU PRINCIPAL         |\n");
    printf("+==================================================+\n");
    printf("Esse é o menu de Impressão. \n Para acessar nossas funcionalidades, informe o número da operação desejada: ");
    printf("%d", &opImpressao);
}

void MenuConteudos() {
    printf("Até o momento não se tem Conteúdos!");
}

void MenuNotas() {
    printf("Até o momento não se tem Notas!");
}

void RetornarMenu() {
    Clear();
    printf("+====================================+\n");
    printf("|                                    |\n");
    printf("|    RETORNANDO AO MENU ANTERIOR     |\n");
    printf("|                                    |\n");
    printf("+====================================+\n");
    Sleep(2500);
}

void SaindoDoPrograma() {
    Clear();
    printf("+====================================+\n");
    printf("|                                    |\n");
    printf("|         SAINDO DO PROGRAMA         |\n");
    printf("|                                    |\n");
    printf("+====================================+\n");
    Sleep(2500);
}

int main() {
    // Definindo Idioma
    setlocale(LC_ALL,"");
    MenuPrincipal();
    switch (opMenuPrincipal){
        case 1:
            Clear();
            SubMenuCad();
        break;

        case 2:
            Clear();
            SubMenuImp();
        break;

        case 3:
            Clear();
            MenuConteudos();
        break;

        case 4:
            Clear();
            MenuNotas();
        break;

        case 5:
            Clear();
            SaindoDoPrograma();
        break;

        default:
        printf("Voce inseriu a opcao errada!");
    }
}