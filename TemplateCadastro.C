#include <stdio.h>
#include <stdlib.h>

// Variáveis
int opMenuPrincipal, opSubMenuCad, cod;

// Funções sem retorno
void MenuPrincipal() {
    printf("+=====================================+\n");
    printf("|         TEMPLATE DO PROJETO         |\n");
    printf("+=====================================+\n");
    printf("|  1 - OPCAO I     |   2 - OPCAO II   |\n");
    printf("+-------------------------------------+\n");
    printf("|  3 - OPCAO III   |   4 - OPCAO IV   |\n");
    printf("+=====================================+\n");
}

void SubMenuCad() {
    do {
        printf("+=========================================+\n");
        printf("|              CADASTRO GERAL             |\n");
        printf("+=========================================+\n");
        printf("|  1 - CADASTRO I    |   2 - CADASTRO II  |\n");
        printf("+-----------------------------------------+\n");
        printf("|  3 - CADASTRO III  |   4 - CADASTRO IV  |\n");
        printf("+=========================================+\n");
        printf("Informe a operacao desejada: \n");
        scanf("%d", &opSubMenuCad);
        switch (opSubMenuCad) {
            case 1:
            system("cls");
            //CadastroI
            break;

            case 2:
            system("cls");
            //CadastroII
            break;

            case 3:
            system("cls");
            //CadastroIII
            break;

            case 4:
            system("cls");
            //CadastroIV
            break;

            default:
            printf("Voce inseriu uma opcao invalida!\n");
        }
        printf("Deseja retornar ao Menu Principal? Digite: 1 - Sim | 0 - Nao \n");
        scanf("%d", &cod);
    }  while (cod != 0);
}

int main() {
    do {
        MenuPrincipal();
        printf("Informe a operacao: \n");
        scanf("%d", &opMenuPrincipal);
        switch (opMenuPrincipal) {
            case 1:
                system("cls");
                SubMenuCad;
            break;

            case 2:
                system("cls");
                // Opção 2
                printf("Opcao II Em desevolvimento \n");
            break;

            case 3:
                system("cls");
                // Opção 3
                printf("Opcao III Em desevolvimento \n");
            break;

            case 4:
            system("cls");
            //Opcao4();
            printf("Opcao IV Em desevolvimento \n");
            break;

            default:
            printf("Voce inseriu uma opcao invalida!");
        }

        printf("Deseja executar outra vez? Digite: 1 - Sim | 0 - Nao \n");
        scanf("%d", &cod);
    } while (cod != 0);
}