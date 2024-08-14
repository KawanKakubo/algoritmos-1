#include <stdio.h>

int primo(int); //protótipo da função

int main(){
  int n;
  printf("digite um numero para verificar se o mesmo e primo: ");
  scanf("%d", &n);
  if (primo(n)) //chama a função e depois avalia o retorno lógico da função 1(verdadeiro) ou 0(falso)
     printf("\no numero %d e primo", n);
     else
       printf("\no numero %d nao e primo", n);
   return 0;
}

int primo(n)
  {
   int x, p;
   p = 0;
   x = n;
   while (x >= 1) {
     if (n % x == 0)
       p++;
     x--;
   }
   if (p == 2)
     return 1;  //VERDADEIRO ou TRUE
     else
        return 0;  //FALSO ou FALSE
  }