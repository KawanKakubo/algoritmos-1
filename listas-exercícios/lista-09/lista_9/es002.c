#include <stdio.h>
#include <locale.h>

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	char esc;
	
	printf("ESCOLHAS ENTRE AS OP��ES:\n[A] Avi�o\n[B] Carro\n[C] Cruzeiro\n");
	scanf("%c", &esc);
	
	switch(esc)
	{
	case 'A':
		printf("� mais rapido!");
		break;
	case 'B':
		printf("� mais barato!");
		break;
	case 'C':
		printf("� mais bonito!");
		break;
	default:
		printf("Op��o inv�lida!");
	}
	
	return 0;
}