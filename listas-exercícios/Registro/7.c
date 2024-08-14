#include <stdio.h>

struct infoBancarias {
	char nome[50];
	int cpf;
	int nconta;
	char tconta[20];
};

int main () {
	struct infoBancarias cadastro[100];
	int i;
	
	for (i=0; i<99; i++) {
		printf("Nome: ");
		gets(cadastro[i].nome);
		fflush(stdin);
	   	printf("CPF: ");
		scanf("%d", &cadastro[i].cpf);
		fflush(stdin);
		printf("Numero da conta: ");
		scanf("%d", &cadastro[i].nconta);
		fflush(stdin);
		printf("Tipo da conta: ");
		gets(cadastro[i].tconta);
	   	fflush(stdin);
	}
	
	for (i=0; i<99; i++) {
		printf("\n\nInformacoes do cadastro %d", i+1);
		printf("\nNome: %s\nCPF: %d\nNumero da conta: %d\nTipo da conta: %s", cadastro[i].nome, cadastro[i].cpf, cadastro[i].nconta, cadastro[i].tconta);
	
	}

	return 0;
}