#include <stdio.h>

int main () {
	int n, e1, e2, e3, cont=3;
	
	printf("Diga o numero de elementos da sequencia de Fibonacci: ");
	scanf("%d", &n);
	
	e1 = 0;
	e2 = 1;
	
	if (n < 1) {
		printf("Erro! Tente novamente com valores maiores que 1.");
	} else if (n == 1) {
		printf("%d\n", e1);
	} else {
		printf("%d\n%d\n", e1, e2);
	}
	
	while (cont <= n) {
		e3 = e1 + e2;
		printf("%d\n", e3);
		e1 = e2;
		e2 = e3;
		
		cont++;
	}
	
	return 0;
}

