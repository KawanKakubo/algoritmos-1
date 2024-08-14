#include <stdio.h>

struct cliente {
	int codigo;
	char nome[40];
	char endereco[50];
};

int main () {
	struct cliente cli;	
	printf("Nome do cliente: ");
	gets(cli.nome);
	fflush(stdin);
	printf("Codigo do cliente: ");
	scanf("%d", &cli.codigo);
	fflush(stdin);
	printf("Endereco do cliente: ");
	gets(cli.endereco);
	fflush(stdin);
	
	printf("Cliente: %s\nCodigo: %d\nEndereco: %s", cli.nome, cli.codigo, cli.endereco);
	
	return 0;
}