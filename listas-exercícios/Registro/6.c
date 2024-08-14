#include <stdio.h>

struct Produto {
	int codigo;
	char descricao[300];
	char marca[50];
	float preco;
};

int main () {
	struct Produto leite[10];
	int i, escolha, escolha1;
	
	for (i=0; i<1; i++) {
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
	
	printf("Menu\n1- Alterar dados do produto;\n2-Ver dados do produto;\n0 - sair ");
	scanf("%d", &escolha1);
	if (escolha1 == 1 || escolha1 == 2) {
		printf("Qual produto deseja ver/alterar? ");
		scanf("%d", &escolha);
	}
	
	if (escolha1 == 1) {
		printf("Novos valores do produto %d.", escolha);
		printf("ID: ");
	   	scanf("%d", &leite[escolha].codigo);
	   	fflush(stdin);
	   	printf("Descricao: ");
		gets(leite[escolha].descricao);
		fflush(stdin);
		printf("Marca: ");
		gets(leite[escolha].marca);
		fflush(stdin);
		printf("Preco: ");
		scanf("%f", &leite[escolha].preco);
	   	fflush(stdin);
	}
	
	if (escolha1 == 2) {
	   	printf("\n\nInformacoes do produto: %d", escolha);
	   	printf("\nCodigo: %d\nDescricao: %s\nMarca: %s\nPreco: %.2f", leite[escolha].codigo, leite[escolha].descricao, leite[escolha].marca, leite[i].preco);
		
	}

	return 0;
}