#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int esc1, esc2, dif;
	
	printf("Digite um número JOGADOR 1: ");
	scanf("%i", &esc1);
	printf("JOGADOR 2: Tente acertar o número do jogador 1: ");
	scanf("%i", &esc2);
	
	if (esc1 == esc2)
	{
		printf("Você acertou!");
	}
	else
	{
		dif = esc1 - esc2;
		printf("Você errou! A diferença do seu número para o número do jogador 1 foi de: %i",dif);
	}
	
	
	return 0;
}