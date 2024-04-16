#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	float d, r, s;
	
	printf("Digite o valor de a: ");
	scanf("%d", &a);	
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	printf("Digite o valor de c: ");
	scanf("%d", &c);
	
	r = pow(a+b,2);
	s = pow(b+c,2);
	d = (r + s) / 2;
	
	printf("R = %.2f, S = %.2f, D = %.2f",r, s, d);
	return 0;
}