// Algoritmo que Calcule a soma dos números no intervalo de 1 a 100
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //Variáveis
    int n;
    int soma = 0;

    for (n = 1; n < 101; n++) {
        // Cálculo
        soma = soma + n;

        printf("soma = %d\n", soma);        
    }
    system("pause");

    return 0;
}