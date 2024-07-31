#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int idade;
	
	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);
	
	if (idade >= 18) {
		printf("Senior");
	}
	else if (idade >= 14) {
		printf("Juvenil B");
	}
	else if (idade >= 11) {
		printf("Juvenil A");
	}
	else if (idade >= 8) {
		printf("Infantil B");
	}
	else if (idade >= 5) {
		printf("Infantil A");
	}

	return 0;	
}
