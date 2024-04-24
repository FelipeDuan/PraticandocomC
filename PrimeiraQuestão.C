#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Variaveis
float SalarioMIN;
float QuantGasta;
float ValorUmKw;
float ValorConta;
float ValorComDesconto;

int main () {
    
    printf("Informe seu Salario Minimo \n");
    scanf("%f", &SalarioMIN);

    printf("Informe a quantidade de Kw gastas\n");
    scanf("%f", &QuantGasta);

    ValorUmKw=(SalarioMIN/7)/100;

    ValorConta=(ValorUmKw*QuantGasta);

    ValorComDesconto=(ValorConta*0.9);

    printf("Valor de um Kw: R$%.2f\n", ValorUmKw);
    printf("Valor da Conta: R$%.2f\n", ValorConta);
    printf("Valor da Conta com Desconto: R$%.2f\n", ValorComDesconto);

    return 0;
}