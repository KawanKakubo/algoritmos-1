#include <stdio.h>

struct funcionarios {
	char nome[50];
	char cargo[20];
	float salario;
};

int main () {
	struct funcionarios cadastro[1000];
	int i;
	
	for (i=0; i<999; i++) {
		printf("Nome: ");
		gets(cadastro[i].nome);
		fflush(stdin);
	   	printf("Cargo ");
		gets(cadastro[i].cargo);
		fflush(stdin);
		printf("Salario: ");
		scanf("%f", &cadastro[i].salario);
	   	fflush(stdin);
	}
	
	for (i=0; i<999; i++) {
		printf("\n\nInformacoes do cadastro %d", i+1);
		printf("\nNome: %s\nCargo: %s\nSalario: %.2f", cadastro[i].nome, cadastro[i].cargo, cadastro[i].salario);
	
	}

	return 0;
}