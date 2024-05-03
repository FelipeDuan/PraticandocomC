#include <stdio.h>
#include <stdlib.h>
    int opMenuPrincipal, opSubMenuCad;

void MenuPrincipal() {
    printf("+=====================================+\n");
    printf("|         TEMPLATE DO PROJETO         |\n");
    printf("+=====================================+\n");
    printf("|  1 - OPCAO I     |   2 - OPCAO II   |\n");
    printf("+-------------------------------------+\n");
    printf("|  3 - OPCAO III   |   4 - OPCAO IV   |\n");
    printf("+=====================================+\n");
    printf("Informe a operacao desejada: \n");
    scanf("%d", &opMenuPrincipal);
    switch (opMenuPrincipal) {
        case 1:
            system("cls");
            //Opcao1();
        break;

        case 2:
            system("cls");
            //Opcao2();
        break;

        case 3:
            system("cls");
            //Opcao3();
        break;

        case 4:
            system("cls");
            //Opcao4();
        break;

        default:
            printf("Voce inseriu uma opcao invalida!");    
    }
}

void SubMenuCad() {
    printf("+=========================================+\n");
    printf("|              CADASTRO GERAL             |\n");
    printf("+=========================================+\n");
    printf("|  1 - CADASTRO I    |   2 - CADASTRO II  |\n");
    printf("+-----------------------------------------+\n");
    printf("|  3 - CADASTRO III  |   4 - CADASTRO IV  |\n");
    printf("+=========================================+\n");
    printf("Informe a operacao desejada: \n");
    scanf("%d", &opSubMenuCad);
    do {
    switch (opSubMenuCad) {
        case 1:
            system("cls");
            //Cadastro1();
        break;

        case 2:
            system("cls");
            //Cadastro2();
        break;

        case 3:
            system("cls");
            //Cadastro3();
        break;

        case 4:
            system("cls");
            //Cadastro4();
        break;

        default:
            printf("Voce inseriu uma opcao invalida!");    
    } while (opSubMenuCad != 5);
        MenuPrincipal();
}