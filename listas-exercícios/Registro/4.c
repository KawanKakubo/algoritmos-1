#include <stdio.h>

struct Produto {
	int codigo;
	char descricao[300];
	char marca[50];
	float preco;
};

int main () {
	struct Produto leite[10];
	int i;
	
	for (i=0; i<9; i++) {
		printf("ID: ");
	   	scanf("%d", &leite[i].codigo);
	   	fflush(stdin);
	   	printf("Descricao: ");
		gets(leite[i].descricao);
		fflush(stdin);
		printf("Marca: ");
		gets(leite[i].marca);
		fflush(stdin);
		printf("Preco: ");
		scanf("%f", &leite[i].preco);
	   	fflush(stdin);
	}
	
	for (i=0; i<2; i++) {
		printf("\n\nInformacoes do produto: %d", i+1);
		printf("\nCodigo: %d\nDescricao: %s\nMarca: %s\nPreco: %.2f", leite[i].codigo, leite[i].descricao, leite[i].marca, leite[i].preco);
	
	}


	return 0;
}