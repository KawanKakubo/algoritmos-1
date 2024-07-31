#include <stdio.h>
#include <locale.h>

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	int esc;
	
	printf("ESCOLHA UM MÊS:\n[1] Janeiro\n[2] Fevereiro\n[3] Março\n[4] Abril\n[5] Maio\n[6] Junho\n[7] Julho\n[8] Agosto\n[9] Setembro\n[10] Outubro\n[11] Novembro\n[12] Dezembro\n");
	scanf("%d", &esc);
	
	switch(esc)
	{
	case 1:
		printf("Esse mês possui 31 dias.");
		break;
	case 2:
		printf("Esse mês possui 28 ou 29 dias.");
		break;
	case 3:
		printf("Esse mês possui 31 dias.");
		break;
	case 4:
		printf("Esse mês possui 30 dias.");
		break;
	case 5:
		printf("Esse mês possui 31 dias.");
		break;
	case 6:
		printf("Esse mês possui 30 dias.");
		break;
	case 7:
		printf("Esse mês possui 31 dias.");
		break;
	case 8:
		printf("Esse mês possui 31 dias.");
		break;
	case 9:
		printf("Esse mês possui 30 dias.");
		break;
	case 10:
		printf("Esse mês possui 31 dias.");
		break;
	case 11:
		printf("Esse mês possui 30 dias.");
		break;
	case 12:
		printf("Esse mês possui 31 dias.");
		break;
	
	default:
		printf("Opção inválida!");
	}
	
	return 0;
}