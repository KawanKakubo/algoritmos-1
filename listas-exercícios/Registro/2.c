#include <stdio.h>

struct Dvd {
	char titulo[30];
	char genero[30];
	int duracao;
	char prateleira[30];
};

int main () {
	struct Dvd dvd;
	printf("Titulo: ");
	gets(dvd.titulo);
	fflush(stdin);
	printf("Genero: ");
	gets(dvd.genero);
	fflush(stdin);
	printf("Duracao em min: ");
	scanf("%d", &dvd.duracao);
	fflush(stdin);
	printf("Prateleira: ");
	gets(dvd.prateleira);
	fflush(stdin);
	printf("Informacoes\nTitulo: %s\nGenero: %s\nDuracao (min): %d\nPrateleira: %s", dvd.titulo, dvd.genero, dvd.duracao, dvd.prateleira);
	
	return 0;
}