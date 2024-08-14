#include <stdio.h>

int main () {
	int num, acumulador=1;
	
	printf("Digite o numero para calcular o fatorial: ");
	scanf("%d", &num);
	
	while (num > 0) {
		acumulador *= num;		
		num -= 1;
	}
	
	printf("%d", acumulador);
	
	return 0;
}

