#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, m;
	
	printf("Digite sua n1: ");
	scanf("%f", &n1);
	printf("Digite sua n2: ");
	scanf("%f", &n2);
	
 	m = (n1 + n2) / 2;
		
	if (m >= 6.0) {
		printf("Aprovado!");
	}
	
	else {
		printf("Reprovado!");
	}
	
	return 0;
}
