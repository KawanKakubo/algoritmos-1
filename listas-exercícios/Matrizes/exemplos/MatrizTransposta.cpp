#include<stdio.h>
#define  TAML 2
#define  TAMC 3
main()
{
  int MAT[TAML][TAMC];
  int LINHA,COLUNA;
  printf("\nCarregando a matriz...\n");
  for (LINHA=0; LINHA<TAML;LINHA++)
   for (COLUNA=0;COLUNA<TAMC;COLUNA++)
    {
     printf("Informe um valor");
     scanf ("%d",&MAT[LINHA][COLUNA]);
    }
    
 printf("\nMatriz Original:\n");
 for (LINHA=0; LINHA<TAML;LINHA++)
  {
   for (COLUNA=0;COLUNA<TAMC;COLUNA++)
     printf("%d ",MAT[LINHA][COLUNA]);
   printf("\n");
  }
  
   printf("\nMatriz Transposta:\n");
   for (LINHA=0; LINHA<TAMC;LINHA++) //utiliza na condição o TAMC 
  {
   for (COLUNA=0;COLUNA<TAML;COLUNA++) //utiliza na condição o TAML 
     printf("%d ",MAT[COLUNA][LINHA]); //Indica primeiro o indice da coluna e depois da linha
   printf("\n");
  }
  
}
