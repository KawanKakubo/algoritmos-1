#include <stdio.h>
#include <locale.h>

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	char esc;
	
	printf("ESCOLHAS ENTRE AS OPÇÕES:\n[A] Avião\n[B] Carro\n[C] Cruzeiro\n");
	scanf("%c", &esc);
	
	switch(esc)
	{
	case 'A':
		printf("É mais rapido!");
		break;
	case 'B':
		printf("É mais barato!");
		break;
	case 'C':
		printf("É mais bonito!");
		break;
	default:
		printf("Opção inválida!");
	}
	
	return 0;
}