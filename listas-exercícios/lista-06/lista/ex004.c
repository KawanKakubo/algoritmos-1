#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int senha;
	
	printf("Digite sua senha: ");
	scanf("%d", &senha);
	
	if (senha == 123456) {
		printf("Senha correta!");
	}
	
	else {
		printf("Senha não confere!");
	}
	
	return 0;
}
