#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if (idade >= 18 && idade <= 65) {
		printf("\nVoc� � obrigado � votar.");
	}
	else {
		printf("\nVoc� n�o � obrigado � votar.");
	}
	printf("\nFIM!\n ");
	
	return 0;
}