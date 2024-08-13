#include <stdio.h>

#define TAM 3

int main()
{
    int N[TAM];
    int I,X,FLAG;
    
	//carregamento do vetor pelo usuario
    for(I=0;I<TAM;I++)
	{
		printf("Informe um numero");
		scanf("%d", &N[I]);
	    
	}
		printf("Informe um numero para pesquisa");
		scanf("%d", &X);
	    FLAG=0; //diferente
	
    //percorrer o vetor
        for(I=0;I<TAM;I++)
	    {
	      if (X==N[I])
		  {
		  printf("\n O valor foi encontrado na  %d posição ",I+1);	
		  FLAG=1;
		  }	
		}
		if (FLAG==0)
		  {
		   printf("\n O valor não foi encontrado no vetor");	
		  }
		
	   
    return 0;
}