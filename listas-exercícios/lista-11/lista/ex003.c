#include <stdio.h>
#include <locale.h>
#include <strings.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char brougringo[15], regiao[15];
	
	printf("Voc� � brasileiro ou estrangeiro: ");
	gets(brougringo);
	strlwr(brougringo);
	
	if (strcmp(brougringo, "brasileiro") == 0) {
		printf("Qual regi�o voc� nasceu: ");
		gets(regiao);
		strlwr(regiao);
		
		if (strcmp(regiao, "sul") == 0) {
			printf("Voc� � est� acostumado com frio");
		}	
		else if (strcmp(regiao, "sudeste") == 0) {
			printf("voc� est� acostumado com chuva");
		}
		else if (strcmp(regiao, "centro-oeste") == 0) {
			printf("voc� est� acostumado com clima abafado");
		}
		else if (strcmp(regiao, "nordeste") == 0) {
			printf("voc� est� acostumado com praias bonitas");
		}
		else if (strcmp(regiao, "norte") == 0) {
			printf("voc� est� acostumado com chuvas no come�o da tarde");
		}
		else {
			printf("Op��o inv�lida.");
		}
	}
	
	else if (strcmp(brougringo, "estrangeiro") == 0) {
		printf("Seja bem-vindo ao Brasil.");
	}
	
	else {
		printf("Op��o inv�lida.");
	}
	
	return 0;
}