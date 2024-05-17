#include <stdio.h>
#include <stdlib.h>

int DL, DC;

void Matriz() {
    int matriz[DL][DC];
    printf("Informe os valores da Matriz %dx%d \n", DL, DC);
    for (int i = 0; i < DL; i++) {
        for (int j = 0; j < DC; j++) {
            printf("\n Elemento [%d][%d]= ", i, j);
            scanf("%d", &matriz[i][j]);
        }  
    }
    printf("\nMatriz:\n");
    for (int i = 0; i < DL; i++) {
        for (int j = 0; j < DC; j++) {
            printf("| %4d ", matriz[i][j]);
        }
        printf("|\n");
    }
}

int main() {
    printf("Informe a dimensao da Linha da Matriz \n");
    scanf("%d", &DL);

    printf("Informe a dimensao da Coluna da Matriz \n");
    scanf("%d", &DC);

    Matriz();

    return 0;
}