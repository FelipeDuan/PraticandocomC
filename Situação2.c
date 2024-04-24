#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// -Nome paciente
// -CPF
// -Data Nascimento
// -Valor individual do Plano de saúde
// VAlorTotal do Plano de saúde

// Variaveis do Plano de Saude
char nome [40];
char cpf [11];
char dataNasc [10];
float valorIndividualPlanoSaude, ValorTotalSaude;

// Variavies do Plano Odontologico
char nomePlanoOdonto[40];
char cpfOdonto[11];
char dataNascimento[10];
float ValorIndividualOdonto, ValorTotalOdonto;
int TipoPlano;

int main () {
    printf("Informe o tipo de Plano 1-Saúde ou 2-Odonto \n");
    scanf("%d", &TipoPlano);
    if (TipoPlano==1) {
        printf("Informe seu nome \n");
        scanf ("%s", &nome);
        printf("Informe seu Cpf \n");
        scanf ("%s", &cpf);
        printf("Informe sua Data de Nascimento \n");
        scanf ("%s", &dataNasc);
        valorIndividualPlanoSaude=120;
         // Condição Para Imprimir PS
        printf("Cliente...: %s \n",nome);
        printf("CPF...: %s \n", cpf);
        printf("Data Nasc...: %s \n", dataNasc);
        printf("Valor Individual...: R$ %f", valorIndividualPlanoSaude);
    } else {
        // Opção para Plano Odontológico
        printf("Informe seu nome \n");
        scanf ("%s", &nome);
        printf("Informe seu Cpf \n");
        scanf ("%s", &cpf);
        printf("Informe sua Data de Nascimento \n");
        scanf ("%s", &dataNasc);
        ValorIndividualOdonto=80;
        // Condição para imprimir PO
        printf("Cliente...: %s \n",nomePlanoOdonto);
        printf("CPF...: %s \n", cpfOdonto);
        printf("Data Nasc...: %s \n", dataNasc);
        printf("Valor Individual...: R$ %f", ValorIndividualOdonto);
    }   
}