#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char nome[20];
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Seja bem-vindo, %s!",nome);
	return 0;
}