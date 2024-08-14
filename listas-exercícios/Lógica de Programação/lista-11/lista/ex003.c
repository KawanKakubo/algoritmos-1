#include <stdio.h>
#include <locale.h>
#include <strings.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char brougringo[15], regiao[15];
	
	printf("Você é brasileiro ou estrangeiro: ");
	gets(brougringo);
	strlwr(brougringo);
	
	if (strcmp(brougringo, "brasileiro") == 0) {
		printf("Qual região você nasceu: ");
		gets(regiao);
		strlwr(regiao);
		
		if (strcmp(regiao, "sul") == 0) {
			printf("Você é está acostumado com frio");
		}	
		else if (strcmp(regiao, "sudeste") == 0) {
			printf("você está acostumado com chuva");
		}
		else if (strcmp(regiao, "centro-oeste") == 0) {
			printf("você está acostumado com clima abafado");
		}
		else if (strcmp(regiao, "nordeste") == 0) {
			printf("você está acostumado com praias bonitas");
		}
		else if (strcmp(regiao, "norte") == 0) {
			printf("você está acostumado com chuvas no começo da tarde");
		}
		else {
			printf("Opção inválida.");
		}
	}
	
	else if (strcmp(brougringo, "estrangeiro") == 0) {
		printf("Seja bem-vindo ao Brasil.");
	}
	
	else {
		printf("Opção inválida.");
	}
	
	return 0;
}