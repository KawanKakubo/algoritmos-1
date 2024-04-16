#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float temp;
		
	printf("Digite a temperatura da água: ");
	scanf("%f", &temp);
	
	if (temp >= 100) {
		printf("Estado de vapor!");
	}
	else if (temp >= 0) {
		printf("Estado líquido!");
	}
	else {
	   	printf("Estado sólido!");
	}
	
	return 0;
}