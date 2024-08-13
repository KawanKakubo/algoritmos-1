#include <stdio.h>
#define TAML 2
#define TAMC 3
int main()
{
	int MAT[TAML][TAMC];
	int I, J,AUX;
	//carrega a matriz
	for (I=0;I<TAML;I++)//LINHAS
	{
		for( J=0;J<TAMC;J++)//COLUNAS
		{
          do
          {
		  	printf("\n Informe um numero");
		    scanf("%i",&AUX);//2 4 3 7
		  }while(AUX%2==0 || AUX<0);
		 
 		  MAT[I][J]=AUX;
		}
	}
	//apresenta a matriz
	for (I=0;I<TAML;I++)//LINHAS
	{
		for( J=0;J<TAMC;J++)//COLUNAS
		{
			printf("%i ",MAT[I][J]);
		}
		printf("\n");
	}
	
	return 0;
}