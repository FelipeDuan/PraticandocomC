// Entendendo Struct
#include <stdio.h>
#include  <stdlib.h>
#include <time.h>
#include <windows.h>

struct CadastroProduto {
    int Codigo;
    char Nome[40];
    int Quatidade;
    float ValorUnitario;
} produto;

int main() {
    int i;

    struct CadastroProduto produto[6];

    // Recebendo os Dados
    for (i = 1; i < 6; i++) {
        system("cls");
        printf("Insira o codigo do produto %d: ", i);
        scanf("%d", &produto[i].Codigo);

        printf("\nInsira o nome do produto %d: ", i);
        scanf("%s", &produto[i].Nome);

        printf("\nInsira a quantidade do produto %d: ", i);
        scanf("%d", &produto[i].Quatidade);

        printf("\nInsira o valor unitario do produto %d: ", i);
        scanf("%f", &produto[i].ValorUnitario);

        printf("\nPronto, o produto %d foi cadastrado com sucesso! \n\n", i);
        Sleep(2500);
        system("cls");
    }

    // Imprimindo os dados
    for (i = 1; i < 6; i++) {
    printf("+========================================+\n");
    printf("|            DADOS DO PRODUTO %d          |\n", i);
    printf("+========================================+\n");
    printf("| -> Codigo: %d \n", produto[i].Codigo);
    printf("| -> Nome: %s \n", produto[i].Nome);
    printf("| -> Quantidade: %d \n", produto[i].Quatidade);
    printf("| -> Valor Unitario: R$%.2f \n\n\n", produto[i].ValorUnitario);
    }

    return 0;
}