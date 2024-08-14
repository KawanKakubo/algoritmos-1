#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  struct tipo_endereco {
        char rua[50];
        int numero;
        char bairro[20];
        char cidade[30];
        char sigla_estado[3];
        long int CEP;
        }typedef end;

  struct ficha_pessoal{
        char nome[50];
        int telefone;
        }typedef cadastro;

int main (){
  end  endereco[2]; 	
  cadastro ficha[2];
  int i;
  for(i = 0; i < 2; i++){
    printf("\ninforme o nome: ");
    gets(ficha[i].nome);
    printf("\ninforme o telefone: ");
    scanf("%d", &ficha[i].telefone);
    fflush(stdin);
    printf("\ninforme o endereco: ");
    gets(endereco[i].rua);
    printf("\ninforme o numero: ");
    scanf("%d", &endereco[i].numero);
    fflush(stdin);
    printf("\ninforme o bairro: ");
    gets(endereco[i].bairro);
    printf("\ninforme a cidade: ");
    gets(endereco[i].cidade);
    printf("\ninforme o estado: ");
    gets(endereco[i].sigla_estado);
    printf("\ninforme o cep: ");
    scanf("%d", &endereco[i].CEP);
    fflush(stdin);
  }

  for(i = 0; i < 2; i++){
    printf("\nnome: %s", ficha[i].nome );
    printf("\ntelefone: %d ", ficha[i].telefone);
    printf("\nendereco: %s ", endereco[i].rua);
    printf("\nnumero: %d ", endereco[i].numero);
    printf("\nbairro: %s ", endereco[i].bairro);
    printf("\ncidade: %s ", endereco[i].cidade);
    printf("\nestado: %s ", endereco[i].sigla_estado);
    printf("\ncep: %d ", endereco[i].CEP);
  }

	return 0;
}
