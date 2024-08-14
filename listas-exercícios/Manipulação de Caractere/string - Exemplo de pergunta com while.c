#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{

	char fim[4];

	strcpy(fim,"sim");// atribuição de um texto para uma variável string

	//strcmp - string compare - compara a primeira com a segunda
	//	string, se forem iguais o resultado é zero
	while(strcmp(fim,"sim")==0)//uma comparação de string
		{
			printf("\nDigite sim para continuar ou nao para encerrar ");
			fflush(stdin);
			gets(fim);//le uma string
			strlwr(fim);
		}

	return 0;
}