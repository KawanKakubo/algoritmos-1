#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    printf("Digite um n�mero: ");
    scanf("%d", &a);
	printf("Digite um n�mero: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d.",a, b);
    return 0;
}