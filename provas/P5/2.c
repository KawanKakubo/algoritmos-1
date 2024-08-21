#include <stdio.h>
#include <string.h>
#include <locale.h>

struct CLIENTE {
    char cpf[12];
    int numeroConta;
    int tipoConta;
    float saldo;
};

int main () {
	setlocale(LC_ALL, "Portuguese");
	struct CLIENTE clientes[3];
	char cpf[12];
	int i, flag=0;
	
	for (i=0; i<3; i++) {
		printf("\n=================\nCadastro %d\n", i+1);
		printf("CPF (apenas números): ");
		scanf("%s", &clientes[i].cpf);
		printf("Número da conta: ");
		scanf("%d", &clientes[i].numeroConta);
		printf("Tipo da conta:\n[1] Corrente\n[2] Poupança\nEscolha: ");
		scanf("%d", &clientes[i].tipoConta);
		printf("Saldo da conta: ");
		scanf("%f", &clientes[i].saldo);
	}
	
	printf("\n=================\nDigite um CPF (apenas números): ");
	scanf("%s", &cpf);
	
	for (i=0; i<3; i++) {
		if (strcmp(cpf, clientes[i].cpf) == 0) {
			printf("Saldo da conta: %.2f", clientes[i].saldo);
			flag = 1;
		}
	}
	
	if (flag == 0) {
		printf("CPF inválido.");
	}
	
	return 0;
}