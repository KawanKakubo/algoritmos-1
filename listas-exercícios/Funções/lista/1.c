#include <stdio.h>

void nomeDoPais();
void nomeDoEstado();
void siglaUniversidade();
void disciplinaESemestre();
int main () {
	int escolha=1;
	
	do {
		if (escolha > 4 || escolha < 1) printf("Valor invalido. Informe uma opcao entre 1 e 4\n");
		printf("1 - Nome do Pais\n2 - Nome do Estado\n3 - Sigla Universidade\n4 - Disciplina e Semestre\nSua escolha: ");
		scanf("%d", &escolha);		
	} while (escolha > 4 || escolha < 1);
	
	
	if (escolha == 1) {
		nomeDoPais();
	} if (escolha == 2) {
		nomeDoEstado();
	} if (escolha == 3) {
		siglaUniversidade();
	} if (escolha == 4) {
		disciplinaESemestre();
	}
	
	return 0;
}

void nomeDoPais () {
	printf("Brasil");
}

void nomeDoEstado () {
	printf("Parana");
}

void siglaUniversidade () {
	printf("UTFPR");
}

void disciplinaESemestre () {
	printf("ES41A - 2024/1");
}