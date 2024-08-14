#include <stdio.h>
#include <string.h>

struct aluno{
       char nome[90], endereco[250];
       int ra;
       float coeficiente;
}typedef alu;

int main()
{
   alu a;
   strcpy(a.nome, "Adriane");
   strcpy(a.endereco, "Rua A");
   a.ra = 1324;
   a.coeficiente = 0.9f;
   printf("\nSeu nome: %s", a.nome);
   printf("\nSeu endereço: %s", a.endereco);
   printf("\nSeu RA: %d", a.ra);
   printf("\nSeu coeficiente: %.2f", a.coeficiente);
}
