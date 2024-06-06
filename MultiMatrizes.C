// Algoritmo que gere duas matrizes e imprima uma terceira matriz com o resultado dessa multiplicação
#include <stdio.h>
#include <stdio.h>
#include <windows.h>

int main() {
    int m, n, p;

    // Entrada das dimensoes das matrizes
    printf("Digite o numero de linhas da primeira matriz: ");
    scanf("%d", &m);
    printf("Digite o numero de colunas da primeira matriz (e linhas da segunda matriz): ");
    scanf("%d", &n);
    printf("Digite o numero de colunas da segunda matriz: ");
    scanf("%d", &p);

    // Declarando as matrizes
    int matriz1[m][n], matriz2[n][p], resultado[m][p];

    // Entrada de dados na primeira matriz
    system("cls");
    printf("Digite os valores da primeira matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("matriz1[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Entrada de dados na segunda matriz
    system("cls");
    printf("Digite os valores da segunda matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("matriz2[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Inicializando a matriz resultado com zeros
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            resultado[i][j] = 0;
        }
    }

    // Multiplicando as matrizes
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Imprimindo a matriz resultado
    system("cls");
    printf("Matriz resultado da multiplicacao:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
