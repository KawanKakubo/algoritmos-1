#include <stdio.h>
#include<stdlib.h>
int main()
{
    char nome[20];
    int idade;
    int i;
    for (i=0; i<2; i++)
    {
        printf("Informe seu nome");
		scanf("%s", nome);
        printf("Repetindo...%s\n", nome);
        fflush(stdin);/* limpa o buffer e aceita a proxima
		                string*/
        printf("Informe sua idade");
        scanf("%d", &idade);
        printf("Repetindo...%d\n", idade);
    }
    return 0;
}