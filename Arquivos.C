#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;

    // Abrir o arquivo
    arquivo = fopen("exemplo.txt", "w+");
    if (arquivo == 0) {
        printf("Erro na leitura do arquivo \n");
    } else {
        printf("Arquivo Cirado com sucesso \n");
    }

    

    fclose(arquivo); //fechar o arquivo
    system("pause");
    return 0;
}