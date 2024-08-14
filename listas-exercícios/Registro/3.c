#include <stdio.h>

struct Produto {
	int codigo;
	char descricao[300];
	char marca[50];
	float preco;
};

int main () {
	struct Produto leite;	
	printf("ID: ");
	scanf("%d", &leite.codigo);
	fflush(stdin);
	printf("Descricao: ");
	gets(leite.descricao);
	fflush(stdin);
	printf("Marca: ");
	gets(leite.marca);
	fflush(stdin);
	printf("Preco: ");
	scanf("%f", &leite.preco);
	fflush(stdin);
	
	printf("\nCodigo: %d\nDescricao: %s\nMarca: %s\nPreco: %.2f", leite.codigo, leite.descricao, leite.marca, leite.preco);
	
	return 0;
}