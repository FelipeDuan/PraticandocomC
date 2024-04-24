#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Variáveis
int ValorOriginal;
int Resultado;

int main() {
    // Entrada
    printf("Informe um numero de 3 digitos no formato CDU \n");
    scanf("%d", &ValorOriginal);

    // Cálculo
    Resultado = ValorOriginal / 100;
    Resultado = Resultado + (((ValorOriginal % 100) / 10) * 10);
    Resultado = Resultado + (((ValorOriginal % 100) % 10) * 100);

    // Saída
    printf("Seu numero no formato UDC eh: %d \n", Resultado);
    
    return 0;
}