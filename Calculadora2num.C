#include <stdio.h>
#include <stdlib.h>
int operacao, valor1, valor2, resultado, cod;

//Menu da Calculadora
void MenuCalculadora () {
    printf("+-----------------------------+\n");
    printf("|      CALCULADORA SIMPLES    |\n");
    printf("+=============================+\n");
    printf("|     1-SOMAR   |  2-SUBTRAIR +\n");
    printf("+=============================+\n");
    printf("| 3-MULTIPLICAR |  4-DIVIDIR  +\n");
    printf("+=============================+\n");
    printf("Informe a operacao desejada: \n");
    scanf("%d", &operacao);

}

// Operações da Calculadora
void Entrada() {
    printf("Informe o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%d", &valor2);
}

void Somar() {
    resultado = valor1 + valor2;
}

void Subtrair() {
    resultado = valor1 - valor2;
}

void Multiplicar() {
    resultado = valor1 * valor2;
}

void Dividir() {
    resultado = valor1 / valor2;
}

void Saida() {
    printf("O Resultado da operacao eh: %d \n", resultado);
}

// Código Principal
int main() {
    do {
    MenuCalculadora();
     switch (operacao) {
        case 1:
            Entrada();
            Somar();
            Saida();
        break;
        
        case 2:
            Entrada();
            Subtrair();
            Saida();
        break;

        case 3:
            Entrada();
            Multiplicar();
            Saida();
        break;

        case 4:
            Entrada();
            Dividir();
            Saida();
        break;

        default:
            printf("Voce inseriu a opcao errada! \n");
     }

        printf("Deseja executar outra vez? Digite: 1 - Sim | 0 - Nao \n");
        scanf("%d", &cod);
    } while (cod != 0);

    return 0; 
}