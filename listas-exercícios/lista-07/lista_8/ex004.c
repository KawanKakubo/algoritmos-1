#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int idade;
		
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 65) {
		printf("Melhor idade!");
	}
	else if (idade >= 40) {
		printf("Meia idade!");
	}
	else if (idade >= 30) {
		printf("Idade adulta!");
	}
	else if (idade >= 18) {
		printf("Jovem adulto!");
	}
	else if (idade >= 12) {
		printf("Adolescente!");
	}
	else if (idade >= 2) {
		printf("Criança!");
	}
	else {
	   	printf("Bebê!");
	}
	
	return 0;
}