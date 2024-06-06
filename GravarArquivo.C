#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *arquivo; //vai ser associado ao arquivo

char nome[40], DataNasc[10];

int main() {
    //Criar o arquivo
    arquivo = fopen("Diretorio//exemplo.txt", "w+");

    // Verificar se o arquivo existe
    if (arquivo == NULL) {
        printf("Erro na leitura do arquivo \n");
    } else {
        printf("Arquivo não Encontrado!\n");
    }

    // Recebendo Dados
    printf("Informe seu nome:\n");
    fgets(nome, sizeof(nome), stdin);
    strtok(nome, "\n");

    printf("Informe a data do seu nascimento: \n");
    fgets(DataNasc, sizeof(DataNasc), stdin);
    strtok(DataNasc, "\n");

    // Gravando no Arquivo
    fprintf(arquivo, nome);
    fprintf(arquivo, DataNasc);
    fclose(arquivo); // Fecha arquivo
    system("pause"); // Espera algum retorno do usuário
}