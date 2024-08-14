#include <stdio.h>

void apresentarmenu()
{
    
	printf("\n----MENU------\n");
	printf("1 - Sou UTFPR\n");
	printf("2 - Estou quase no Segundo Periodo\n");
	printf("3 - Calcular media \n");
}

int leropcao()
{
    int OP;
    do
    {
     scanf("%d",&OP);
	}while(OP >3 || OP <1);
    return  OP;
}

float calcularmedia(int O)
{
	float P1, P2, MEDIA;
    if (O == 3)
	{
	 printf("\n Informe a nota da P1");
	 scanf("%f", &P1);
	 printf("\n Informe a nota da P2");
	 scanf("%f", &P2);	
	 MEDIA=(P1+P2)/2;
	}
    return  MEDIA;
}

int main()
{
  int O;
  float MED;
  apresentarmenu();
  O=leropcao();
  if (O==1)
     printf("Sou UTFPR\n");
  else if (O==2)
	 printf("Falta pouco para o Segundo Periodo\n");	
     else if (O ==3)
            {
              MED=calcularmedia(O);
              printf("\nSua media: %.2f ",MED);
            }
  return 0; 
}  

