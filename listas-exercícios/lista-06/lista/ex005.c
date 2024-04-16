#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int senha, senhaconfirmada;
	
	printf("Digite sua senha: ");
	scanf("%d", &senha);
	printf("Confirme sua senha: ");
	scanf("%d", &senhaconfirmada);
	
	if (senha == senhaconfirmada) {
		printf("Senha criada com sucesso!");
	}
	
	else {
		printf("Senha não confere!");
	}
	
	return 0;
}
