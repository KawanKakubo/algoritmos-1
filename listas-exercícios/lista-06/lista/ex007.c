#include <stdio.h>
#include <stdint.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char nome[30]; 
	char genero;
	
	printf("Digite seu nome: ");
	gets(nome);
	printf("Digite seu g�nero (f para feminino e m para masculino): ");
	scanf("%c", &genero);
		
	if (genero == "f") {
		printf("Ol�, senhora %s.",nome);
	}
	
	else {
		printf("Ol�, senhor %s.",nome);
	}
	
	return 0;
}
