#include <stdio.h>
#include <locale.h>
#include <strings.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char usuario[10], senha[10];
	printf("Digite seu usuário: ");
	gets(usuario);
	printf("Digite sua senha: ");
	gets(senha);
	if (strcmp(usuario, "chefe") == 0 && strcmp(senha, "123456") == 0) {
		printf("\nLogin realizado.");
	}
	else {
		printf("\nUsuário e/ou senha incorretos.");
	}
	printf("\nFIM!\n ");
	
	return 0;
}