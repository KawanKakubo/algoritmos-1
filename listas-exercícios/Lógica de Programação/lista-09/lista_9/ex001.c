#include <stdio.h>
#include <locale.h>

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	int esc;
	
	printf("MONSTRODEX!!!\n[1] Zikachu\n[2] Zulbassauro\n[3] Zharmander\n");
	scanf("%d", &esc);
	
	switch(esc)
	{
	case 1:
		printf("Monstrinho elétrico da categoria rato");
		break;
	case 2:
		printf("Monstrinho de grama da categoria semente");
		break;
	case 3:
		printf("Monstrinho de fogo da categoria lagarto");
		break;
	default:
		printf("Monstrinho não cadastrado. Há 8900 monstros! Temos que pegar!");
	}
	
	return 0;
}