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
			printf("Você será reagendado para amanhã.");
		}
		else if (escolha == 2)
		{
			printf("Você será reagendado para depois de amanhã.");
		}
		else if (escolha == 3)
		{
			printf("Você deve tentar outro dia.");
		}
		else
		{
			printf("Opção inválida.");
		}
	}
		
	else 
	{
		printf("Aguarde para ser atendido.");
	}
	
	return 0;
}