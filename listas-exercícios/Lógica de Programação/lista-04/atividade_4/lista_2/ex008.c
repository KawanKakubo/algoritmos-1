#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int ano, idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	ano = 2024 - idade;
	printf("Você tem %d e nasceu em %d.",idade, ano);
	return 0;
}