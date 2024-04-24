#include <stdio.h>
#include <stdlib.h>

char Nome [40];
char SobreNome [40];

int main(){
/* Entrada de Dados */

	printf("Informe seu primeiro nome \n");
	scanf ("%s", &Nome);
	printf ("Informe seu sobrenome \n");
	scanf ("%s", &SobreNome);
	
/* Impressão dos dados */
	printf("Completo nome :%s" , Nome);
	printf(" %s" , SobreNome);
}