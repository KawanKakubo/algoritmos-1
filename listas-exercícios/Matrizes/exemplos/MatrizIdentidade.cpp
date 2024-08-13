#include<stdio.h>
#define  TAML 3
#define  TAMC 3
int main()
{
  int MAT[TAML][TAMC];
  int LINHA,COLUNA;
  printf("\nCarregando a matriz...\n");
  for (LINHA=0; LINHA<TAML;LINHA++)
   for (COLUNA=0;COLUNA<TAMC;COLUNA++)
    {
     MAT[LINHA][COLUNA]=0;
     if (LINHA==COLUNA)
     	MAT[LINHA][COLUNA]=1;
    }
    
 printf("\nMatriz Identidade\n");
 for (LINHA=0; LINHA<TAML;LINHA++)
  {
    printf("\n");
	for (COLUNA=0;COLUNA<TAMC;COLUNA++)
     printf("%d ",MAT[LINHA][COLUNA]);
  
  }
 printf("\n"); 
 return 0; 
}
