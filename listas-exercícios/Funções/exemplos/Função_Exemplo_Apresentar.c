#include <stdio.h>

void apresentarMenu(); //protótipo da função

int main()
{
  int N, I;
  apresentarMenu();
  scanf("%d", &N);
  for(I=0;I<=10;I++)
  {
    printf("%d ",I);	
  }
  return 0; 
}  

apresentarMenu()
 {
  printf("********************\n");
  printf("*                  *\n");
  printf("*Digite um numero  *\n");
  printf("*                  *\n");
  printf("********************\n");
   
 }