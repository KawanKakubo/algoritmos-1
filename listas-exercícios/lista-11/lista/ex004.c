#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int senha, escolha;
	
	printf("Digite uma senha: ");
	scanf("%i", &senha);
	
	if (senha > 100)
	{
		printf("[1] Prioridade;\n[2] Aposentado;\n[3] Comum.\n");
		scanf("%i", &escolha);
		
		if (escolha == 1) 
		{
			printf("Voc� ser� reagendado para amanh�.");
		}
		else if (escolha == 2)
		{
			printf("Voc� ser� reagendado para depois de amanh�.");
		}
		else if (escolha == 3)
		{
			printf("Voc� deve tentar outro dia.");
		}
		else
		{
			printf("Op��o inv�lida.");
		}
	}
		
	else 
	{
		printf("Aguarde para ser atendido.");
	}
	
	return 0;
}