#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float alt, idade;
	
	printf("Digite sua altura em metros: ");
	scanf("%f", &alt);
	
	if (alt < 1.6) {
		
		printf("Digite sua idade: ");
		scanf("%i", &idade);
		
		if (idade < 5){
			printf("Pode brincar no pula-pula e casinha.");
		}
		else if (idade >= 5 && idade <= 8) {
			printf("Pode brincar na prancha do pirata e piscina de bolinhas.");
		}
		else {
			printf("Pode brincar de pebolim, ping-pong e basquete.");
		}
	}
	
	else {
		printf("Você é muito grande para entrar no parque.");
	}
	
	return 0;
}