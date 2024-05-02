//Cardápio Estilisado com Do while e Switch Case
#include <stdio.h>
#include <stdlib.h>

//Variáveis
int Escolha, Quantidade, cod;
float ValorTotal;

//Menu do cardápio
void MenuCardapio() {
    printf("Bem vindo, este eh nosso cardapio: \n\n");
    printf("+-------------------------------------+\n");
    printf("|   CODIGO   |   LACNHE   |   PRECO   |\n");
    printf("+=====================================+\n");
    printf("|  100   |  CACHORRO-QUENTE  | R$4.20 |\n");
    printf("|  101   |   BAURU SIMPLES   | R$3.30 |\n");
    printf("|  102   |   BAURU COM OVO   | R$5.50 |\n");
    printf("|  103   |    HAMBURGUER     | R$6.20 |\n");
    printf("|  104   |   CHEESEBURGUER   | R$5.30 |\n");
    printf("|  105   |    REFRIGERANTE   | R$4.50 |\n");
    printf("+-------------------------------------+\n\n");
    printf("Agora, informe o codigo do lanche que voce quer pedir: \n");
    scanf("%d", &Escolha);
}

// Opções de Lanche
void Entrada(){
    printf("Informe a quantidade: \n");
    scanf("%d", &Quantidade);
}

void CachorroQuente() {
    printf("Sua opcao foi o Cachorro-quente. \n");
        ValorTotal = Quantidade * 4.20;
}

void BauruSimples() {
    printf("Sua opcao foi o Bauru simples. \n");
        ValorTotal = Quantidade * 3.30;
}

void BauruComOvo() {
    printf("Sua opcao foi o Bauru com Ovo. \n");
        ValorTotal = Quantidade * 5.50;
}

void Hamburguer() {
    printf("Sua opcao foi o Hamburguer. \n");
        ValorTotal = Quantidade * 6.20;
}

void Cheeseburguer() {
    printf("Sua opcao foi o Cheeseburguer. \n");
        ValorTotal = Quantidade * 5.30;
}

void Refrigerante() {
    printf("Sua opcao foi o Refrigerante. \n");
        ValorTotal = Quantidade * 4.50;
}

void Saida(){
    printf("O valor a ser pago eh: R$%.2f \n", ValorTotal);
}

//Escolha do Lanche
int main() {
    do {
        MenuCardapio();
        switch (Escolha) {
            case 100:
                Entrada();
                CachorroQuente();
                Saida();
            break;

            case 101:
                Entrada();
                BauruSimples();
                Saida();
            break;

            case 102:
                Entrada();
                BauruComOvo();
                Saida();
            break;

            case 103:
                Entrada();
                Hamburguer();
                Saida();
            break;

            case 104:
                Entrada();
                Cheeseburguer();
                Saida();
            break;

            case 105:
                Entrada();
                Refrigerante();
                Saida();
            break;

            default:
                printf("Voce inseriu a opcao errada! \n");
        }

        printf("Deseja executar outra vez? Digite: 1 - Sim | 0 - Nao \n");
        scanf("%d", &cod);
    } while (cod != 0);
}