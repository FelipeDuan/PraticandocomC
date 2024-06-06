#include <stdio.h>
#include <stdlib.h>

int DL, DC, i, j;

int main() {
    printf("Informe a Dimensao da Linha: ");
    scanf("%d", &DL);

    printf("Informe a Dimensao da Coluna: ");
    scanf("%d", &DC);

    // Receber os Valores da Matriz
    int matriz[DL][DC];
    printf("\nInforme os valores da matriz %dx%d: \n", DL,DC);
    for (i = 0; i < DL; i++) {
        for (j = 0; j < DC; j++) {
            printf("Elemento [%d]x[%d]= ", i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimir os Valores
    printf("\nMatriz: \n");
    for (i = 0; i < DL; i++) {
        for (j = 0; j < DC; j++) {
            printf("%4d|", matriz[i][j]);
        }
        printf("\n");
    }
}