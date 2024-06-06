#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int L, C;

int main() {
    int matriz[3][3];
    //Pedindo para o usuário informar os valores
    printf("\nInforme os valores da matriz 3x3: \n");

    // Recebendo os valores da Matriz
    for (L = 0; L < 3; L++) {
        for (C = 0; C < 3; C++) {
            printf("Elemento [%d][%d]= ", L+1,C+1);
            scanf("%d", &matriz[L][C]);
        }
    }

    // Imprimindo Matrizes
    system("cls");
    printf("\nMatriz: \n");
    for (L = 0; L < 3; L++) {
        for (C = 0; C < 3; C++) {
            printf("%4d|", matriz[L][C]);
        }
        printf("\n");
    }
}

