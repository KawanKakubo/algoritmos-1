#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int idade, contribuicao;
	char genero;
	printf("Digite seu gênero [F/M]: ");
	scanf("%c", &genero);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite seu tempo de contribuição: ");
	scanf("%d", &contribuicao);
	
	if ((genero == 'm' || genero == 'M') && idade > 65 && contribuicao >= 30) {
		printf("Você pode se aposentar!");
	} 
	else if ((genero == 'f' || genero == 'F') && idade > 60 && contribuicao >= 25) {
		printf("\nVocê pode aposentar!");
	}
	else{
		printf("\nVocê não pode aposentar!");
	}
	
	return 0;
}