#include <stdio.h>
#include <stdlib.h>

FILE *arquivo; 
char nome[40], curso[50], disciplina[30], linha[120];

void Leitura() {
    arquivo = fopen("C://Users//felip//Workspace//C//Algoritmo.txt", "r");

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
}

int main() {
    arquivo = fopen("C://Users//felip//Workspace//C//Algoritmo.txt", "w+"); // abre o arquivo
    if (arquivo == 0) {
        printf("Erro na leitura do arquivo!\n");
    } else {
        printf("Arquivo criado com sucesso!\n");
    }

    // Nome do aluno
    printf("Informe seu nome \n");
    scanf("%s", &nome);

    // Curso do aluno
    printf("Informe seu curso \n");
    scanf("%s", &curso);

    // Disciplina do curso
    printf("Informe a disciplina \n");
    scanf("%s", &disciplina);

    fprintf(arquivo, nome); // gravando nome
    fprintf(arquivo, curso); // gravando curso
    fprintf(arquivo, disciplina); // gravando disciplina

    Leitura();
    fclose(arquivo); // fecha o arquivo
    system("pause");

    return 0;
}