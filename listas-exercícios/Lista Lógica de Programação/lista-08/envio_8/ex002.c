#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char solteiro;
	int nfilhos;
	float salario, bonus;
	
	printf("Você é solteiro [S|N]? ");
	scanf(" %c", &solteiro);
	
	if (solteiro == 'S' || solteiro == 's') {
		printf("Você não receberá bônus!");
	}
	else if (solteiro == 'N' || solteiro == 'n') {
		printf("Quantos filhos você possui? ");
		scanf("%d", &nfilhos);
		printf("Informe seu salário: ");
		scanf("%f", &salario);
		if (nfilhos > 0) {
			bonus = 0.2 * salario;
		}
		else {
			bonus = 0.15 * salario;
		}
		printf("O bônus é de: %.2f\n", bonus);
	}
	else {
		printf("Opção inválida.\n");
	}
	
	return 0;
}
