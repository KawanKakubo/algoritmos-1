#include <stdio.h>
#include <string.h>
int main(){
	char nome[50]; //string - cadeia de caracteres
	
	printf("\nDigite seu nome: ");
	fflush(stdin);
	gets(nome);
	
//verificar se o nome digitado é igual a Adriane	
//------------------------------------------------

  if (strcmp(strupr(nome),"ADRIANE") == 0){
  	printf("\nOK\n");
	}
    else{
			printf("\nO nome nao esta correto.\n");	
		}
	
//strcmp(string1,string2) 
//compara o conteúdo da string1 com o conteúdo da 
//string2. Se forem iguais, retorna 0	

//strupr(string) 
//muda o conteúdo da string para letras maiúsculas
	return 0;
}



