#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float temperatura;
	
	printf("Digite sua temperatura corporal: ");
	scanf("%f", &temperatura);
	
	if (temperatura < 37) {
		printf("Voc� est� sem febre!");
	}
	
	else {
		printf("Voc� est� com febre!");
	}
	
	return 0;
}
