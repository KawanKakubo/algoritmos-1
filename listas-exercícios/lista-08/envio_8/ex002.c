#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char solteiro;
	int nfilhos;
	float salario, bonus;
	
	printf("Voc� � solteiro [S|N]? ");
	scanf(" %c", &solteiro);
	
	if (solteiro == 'S' || solteiro == 's') {
		printf("Voc� n�o receber� b�nus!");
	}
	else if (solteiro == 'N' || solteiro == 'n') {
		printf("Quantos filhos voc� possui? ");
		scanf("%d", &nfilhos);
		printf("Informe seu sal�rio: ");
		scanf("%f", &salario);
		if (nfilhos > 0) {
			bonus = 0.2 * salario;
		}
		else {
			bonus = 0.15 * salario;
		}
		printf("O b�nus � de: %.2f\n", bonus);
	}
	else {
		printf("Op��o inv�lida.\n");
	}
	
	return 0;
}
