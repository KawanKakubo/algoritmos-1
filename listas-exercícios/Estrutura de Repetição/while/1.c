#include <stdio.h>
#include <string.h>

int main () {
	char escolha[2];
	
	printf("Digite seu sexo [M/F]: ");
	scanf("%s", &escolha);
	
	while (1) {
		if (stricmp(escolha, "M") == 0) {
			break;
		} else if (stricmp(escolha, "F") == 0) {
			break;
		} else {
			printf("Digite seu sexo [M/F]: ");
			scanf("%s", &escolha);
		}
	}
	
	return 0;
}