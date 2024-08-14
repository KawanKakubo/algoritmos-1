#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char capital[30];
	
	printf("Digite o nome de uma capital brasileira: ");
	scanf("%s", capital);
	
	strlwr(capital);
	
	if (strcmp(capital, "sao") == 0 || strcmp(capital, "recife") == 0 ||
        strcmp(capital, "salvador") == 0 || strcmp(capital, "fortaleza") == 0 ||
        strcmp(capital, "natal") == 0 || strcmp(capital, "maceio") == 0 ||
        strcmp(capital, "joao") == 0 || strcmp(capital, "teresina") == 0 ||
        strcmp(capital, "aracaju") == 0) {
        printf("A capital %s pertence à região Nordeste do Brasil.\n", capital);
    }
    else if (strcmp(capital, "rio") == 0 || strcmp(capital, "sao") == 0 ||
             strcmp(capital, "belo") == 0 || strcmp(capital, "vitoria") == 0) {
        printf("A capital %s pertence à região Sudeste do Brasil.\n", capital);
    }
    else {
        printf("A capital %s pertence a outra região do Brasil.\n", capital);
    }
	
	return 0;
}
