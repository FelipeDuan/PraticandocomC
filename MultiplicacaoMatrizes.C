#include <stdio.h>
#include <stdlib.h>

int OrdemMatrizes, L, C, OrdemMatrizB, i, j, repetir;

void MatrizA() {
    // Recebendo a Ordem da Matriz A
    printf("Bem-vindo, usuario! \n");
    printf("Para realizarmos a mutiplicacao das matrizes, eles devem possuir a mesma ordem, portanto: \n");
    printf("Insira a ordem das Matrizes quadraticas | Exemplo: 2 \n");
    scanf("%d", &OrdemMatrizes);   

    // Criando a Matriz A
    int matriz[L][C];
    printf("Primeiramente, informe os valores da Matriz A %dx%d \n", L, C);
    for (int i = 1; i <= L; i++) {
        for (int j = 1; j <= C; j++) {
            printf("\n Elemento [%d][%d]= ", i, j);
            scanf("%d", &matriz[i][j]);
        }  
    }
    printf("\nMatriz:\n");
    for (int i = 1; i <= L; i++) {
        for (int j = 1; j <= C; j++) {
            printf("| %4d ", matriz[i][j]);
        }
        printf("|\n");
    }
}

void MatrizB() {
    
    // Criando a Matriz B
    int matriz[L][C];
    printf("Agora, informe os valores da Matriz B %dx%d \n", L, C);
    for (int i = 1; i <= L; i++) {
        for (int j = 1; j <= C; j++) {
            printf("\n Elemento [%d][%d]= ", i, j);
            scanf("%d", &matriz[i][j]);
        }  
    }
    printf("\nMatriz:\n");
    for (int i = 1; i <= L; i++) {
        for (int j = 1; j <= C; j++) {
            printf("| %4d ", matriz[i][j]);
        }
        printf("|\n");
    }
}

int main() {
    OrdemMatrizes = L = C;

    MatrizA();

    MatrizB();

    // Criando a matriz C
    int matrizC[i][j];
    printf("Apos isso, partindo para a multiplicacao das matrizes, obtemos a seguinte Matriz C: \n");
    for (int i = 1; i <= L; i++) {
        for (int j = 1; j <= C; j++) {
            printf("| %4d ", matrizC[i][j]);
        }
        printf("|\n");
    }
}