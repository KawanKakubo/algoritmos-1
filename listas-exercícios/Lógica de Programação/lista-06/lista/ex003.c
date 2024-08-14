#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float temperatura;
	
	printf("Digite sua temperatura corporal: ");
	scanf("%f", &temperatura);
	
	if (temperatura < 37) {
		printf("Você está sem febre!");
	}
	
	else {
		printf("Você está com febre!");
	}
	
	return 0;
}
