#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int esc1, esc2, dif;
	
	printf("Digite um n�mero JOGADOR 1: ");
	scanf("%i", &esc1);
	printf("JOGADOR 2: Tente acertar o n�mero do jogador 1: ");
	scanf("%i", &esc2);
	
	if (esc1 == esc2)
	{
		printf("Voc� acertou!");
	}
	else
	{
		dif = esc1 - esc2;
		printf("Voc� errou! A diferen�a do seu n�mero para o n�mero do jogador 1 foi de: %i",dif);
	}
	
	
	return 0;
}