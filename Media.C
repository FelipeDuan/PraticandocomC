// Algoritmo que lê 5 notas do usuários e faz uma média deles
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variáveis
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float nota5;
    float media;
    int cod;

    do
    {
        // Recebendo as notas
        printf("Ola, vamos calcular a sua media? Informa sua primeira nota: ");
        scanf("%f", &nota1);

        printf("Agora, informe sua segunda nota: ");
        scanf("%f", &nota2);

        printf("Agora, informe sua terceira nota: ");
        scanf("%f", &nota3);

        printf("Agora, informe sua quarta nota: ");
        scanf("%f", &nota4);

        printf("Agora, informe sua quinta nota: ");
        scanf("%f", &nota5);

        // Cálculo
        media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

        // Exibindo a média
        printf("Muito obrigado! Sua media eh: %.2f \n", media);

        printf("Deseja calcular outra vez? Digite: 1 - Sim | 0 - Nao \n");
        scanf("%d", &cod);
    } while (cod != 0);
    
    return 0;
}