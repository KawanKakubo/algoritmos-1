#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if (idade >= 18 && idade <= 65) {
		printf("\nVocê é obrigado à votar.");
	}
	else {
		printf("\nVocê não é obrigado à votar.");
	}
	printf("\nFIM!\n ");
	
	return 0;
}