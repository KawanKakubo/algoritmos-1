#include<stdio.h>
#define TAML 4
#define TAMC 4 
int main()
{
	int valor[TAML][TAMC];
	int I,J,S=0,soma1=0,soma2=0,somapr=0, somads=0;
	for(I=0;I<TAML;I++)
	  for (J=0;J<TAMC;J++)
	  {
	  	printf("Informe um valor : ");
	  	scanf("%i",&valor[I][J]);
	  }
	  
	  for(I=0;I<TAML;I++)
	  	for ( J=0;J<TAMC;J++)
		  {
		  
		  if (I==3)//linha 4
	  	   soma1=soma1+valor[I][J];
	  	  if (J==1)//coluna 1
	  	   soma2=soma2+valor[I][J];
	      if(I==J)//diagonal princial
	       somapr=somapr+valor[I][J];
          if (J==(TAMC-1)-I)//diagonal Secundaria
           somads=somads+valor[I][J];
          //todos os elementos
          S=S+valor[I][J];
          
		  } 
	    
    for(I=0;I<TAML;I++)
 	  {
	  	printf("\n ");
	  	for ( J=0;J<TAMC;J++) 
           printf ( "%i ",valor[I][J]);
      }
  
   printf("\nA soma da linha 3 e :%i",soma1);
   printf("\nA soma da coluna 2 e :%i",soma2);
   printf("\nA soma da diagonal principal: %i",somapr);
   printf("\nA soma da diagonal secundaria : %i",somads);
   printf("\nA soma de todos os elementos  %i",S);

   return 0;

}
