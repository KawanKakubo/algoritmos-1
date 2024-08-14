#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    printf("Digite um número: ");
    scanf("%d", &a);
	printf("Digite um número: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d.",a, b);
    return 0;
}