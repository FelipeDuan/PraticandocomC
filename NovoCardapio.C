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
    printf("Informe a quantidade: \n");
    scanf("%d", &Quantidade);
}

//Escolha do Lanche
int main() {

}