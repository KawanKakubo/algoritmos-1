#include <stdio.h>
#include <locale.h>

 struct DISCIPLINA {
	 char codigo[5];
	 int periodo;
	 int vagas;
 };
 	 
 int main () {
 	 setlocale(LC_ALL, "Portuguese");
 	 struct DISCIPLINA disciplinas[16];
	 int i, menor_indice, menor;
	 
	 for (i=0; i<16; i++) {
		 printf("\n=================\nDisciplina %d\n", i+1);
		 printf("Código da disciplina: ");
		 scanf("%s", &disciplinas[i].codigo);
		 printf("Período da disciplina: ");
		 scanf("%d", &disciplinas[i].periodo);
		 printf("Quantidade de vagas da disciplina: ");
		 scanf("%d", &disciplinas[i].vagas);
		 if (i==0) {
			 menor = disciplinas[i].vagas;
			 menor_indice = i;
		 } if (disciplinas[i].vagas < menor) {
			 menor = disciplinas[i].vagas;
			 menor_indice = i;
		 }
	 }
	 
	 printf("\n=================\nO código da disciplina com menor oferta de vagas é: %s", disciplinas[menor_indice].codigo);
	 printf("\nO número de vagas da disciplina: %d", disciplinas[menor_indice].vagas);
	 
	 return 0;
 }