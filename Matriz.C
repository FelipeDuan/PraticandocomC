#include <stdio.h>
#include <stdlib.h>

int DL, DC, repetir;

void Matriz() {
    int matriz[DL][DC];
    printf("Informe os valores da Matriz %dx%d \n", DL, DC);
    for (int i = 1; i <= DL; i++) {
        for (int j = 1; j <= DC; j++) {
            printf("\n Elemento [%d][%d]= ", i, j);
            scanf("%d", &matriz[i][j]);
        }  
    }
    printf("\nMatriz:\n");
    for (int i = 1; i <= DL; i++) {
        for (int j = 1; j <= DC; j++) {
            printf("| %4d ", matriz[i][j]);
        }
        printf("|\n");
    }
}

int main() {
    do {
        printf("Informe a dimensao da Linha da Matriz \n");
        scanf("%d", &DL);

        printf("Informe a dimensao da Coluna da Matriz \n");
        scanf("%d", &DC);

        Matriz();

        printf("\nDeseja executar outra vez? Digite: 1 - Sim | 0 - Nao \n");
        scanf("%d", &repetir);
    } while ( repetir != 0);
    return 0;
}