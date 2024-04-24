#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Variávies CDU
int Centena;
int Dezena;
int Unidade;
int ResultadoCDU;

// Variáveis UDC
int CentenaInvertida;
int DezenaInvertida;
int UnidadeInvertida;
int ResultadoUDC;

int main() {
    // Entrada de Dados
    printf("Informe o algarismo da Centena \n");
    scanf("%d", &Centena);

    printf("Informe o algarismo da Dezena \n");
    scanf("%d", &Dezena);

    printf("Informe o algarismo da Unidade \n");
    scanf("%d", &Unidade);
    
    // Cálculos
    CentenaInvertida=(Centena);
    DezenaInvertida=(Dezena)*10;
    UnidadeInvertida=(Unidade)*100;

    ResultadoCDU=(Centena*100)+(Dezena*10)+(Unidade);
    ResultadoUDC=(UnidadeInvertida+DezenaInvertida+CentenaInvertida);

    // Saída de Dados
    printf("Seu numero no padrao CDU: %d \n", ResultadoCDU);
    printf("Seu numero no padrao UDC: %d \n", ResultadoUDC);

    return 0;
}