#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float temp;
		
	printf("Digite a temperatura da �gua: ");
	scanf("%f", &temp);
	
	if (temp >= 100) {
		printf("Estado de vapor!");
	}
	else if (temp >= 0) {
		printf("Estado l�quido!");
	}
	else {
	   	printf("Estado s�lido!");
	}
	
	return 0;
}