#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // Variávies
    int Quantidade;
    float ValorTotal;
    int Escolha;

    // Entrada de Dados
    printf("Bem vindo, este eh nosso cardapio\n\n 100. Cachorro-quente (R$4.20)\n 101. Bauru simples (R$3.30)\n 102. Bauru com ovo (R$5.50)\n 103. Hamburguer (R$6.20)\n 104. Cheeseburguer (R$5.30)\n 105. Refrigerante (R$4.50)\n\n Agora, informe o codigo do lanche que voce quer pedir: ");
    scanf("%d", &Escolha);
    
    printf("Informe a quantidade: \n");
    scanf("%d", &Quantidade);

    // Escolha do Lanche
    if (Escolha==100) {
        //Cachorro-Quente
        printf("Sua opcao foi o Cachorro-quente. \n");
        ValorTotal = Quantidade * 4.20;
        printf("O valor a ser pago eh: R$%.2f \n", ValorTotal);
    } else if (Escolha==101) {
        //Bauru Simples
        printf("Sua opcao foi o Bauru simples. \n");
        ValorTotal = Quantidade * 3.30;
        printf("O valor a ser pago eh: R$%.2f \n", ValorTotal);
    } else if (Escolha==102) {
        //Bauru com Ovo
        printf("Sua opcao foi o Bauru com Ovo. \n");
        ValorTotal = Quantidade * 5.50;
        printf("O valor a ser pago eh: R$%.2f \n", ValorTotal);
    } else if (Escolha==103) {
        //Hamburguer
        printf("Sua opcao foi o Hamburguer. \n");
        ValorTotal = Quantidade * 6.20;
        printf("O valor a ser pago eh: R$%.2f \n", ValorTotal);
    } else if (Escolha==104) {
        //Cheeseburguer
        printf("Sua opcao foi o Cheeseburguer. \n");
        ValorTotal = Quantidade * 5.30;
        printf("O valor a ser pago eh: R$%.2f \n", ValorTotal);
    } else if (Escolha==105) {
        //Refrigerante
        printf("Sua opcao foi o Refrigerante. \n");
        ValorTotal = Quantidade * 4.50;
        printf("O valor a ser pago eh: R$%.2f \n", ValorTotal);
    } else {
        printf("Voce digitou o codigo errado. Tente novamente!");
    }

    return 0; 
}