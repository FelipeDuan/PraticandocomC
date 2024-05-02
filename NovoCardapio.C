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
    
}

// Opções de Lanche
void Entrada(){
    printf("Agora, informe o codigo do lanche que voce quer pedir: \n");
    scanf("%d", &Escolha);
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

}