#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int periodo, escolha;
	
	printf("Digite seu per�odo da faculdade: ");
	scanf("%i", &periodo);
	
	if (periodo >= 7) {
		
		printf("[1] Matricular na disciplina de Jogos Digitais;\n[2] Matricular na disciplina de Design de Jogos;\n[3] Matricular na disciplina de Realidade Virtual.\n");
		scanf("%i", &escolha);
		
		if (escolha == 1){
			printf("\nJogos Digitais confirmado.");
		}
		else if (escolha == 2) {
			printf("\nDesign confirmado.");
		}
		else if (escolha == 3) {
			printf("\nRV confirmado.");
		}
		else {
			printf("\nOp��o inv�lida, saindo do programa.");
		}
	}
	
	else {
		printf("Voc� ainda n�o pode se matricular em disciplinas optativas.");
	}
	
	return 0;
}