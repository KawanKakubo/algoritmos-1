#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int ano, idade;
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &ano);
	idade = 2024 - ano;
	printf("Voc� tem %d e nasceu em %d.",idade, ano);
	return 0;
}