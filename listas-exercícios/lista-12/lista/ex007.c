#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float x, y, z, aux;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &x);
	printf("Digite o segundo valor: ");
	scanf("%f", &y);
	printf("Digite o terceiro valor: ");
	scanf("%f", &z);
	
	
	if (x > y && y > z)
		//x > y > z -> z > y > x
	{
		aux = z;
		z = x;
		x = aux;
		
	}
	else if (x > z && z > y)
		//x > z > y -> z > y > x
	{
		aux = x;
		x = y;
		y = z;
		z = aux;
	}
	else if (y > x && x > z)
		//y > x > z -> z > y > x
	{
		aux = x;
		x = z;
		z = y;
		y = aux;
	}
	else if (y > z && z > x)
		//y > z > x -> z > y > x
	{
		aux = y;
		y = z;
		z = aux;
	}
	else if (z > x && x > y)
		//z > x > y -> z > y > x
	{
		aux = x;
		x = y;
		y = aux;
	}
	else if (z > y && y > x)
		//z > y > x 
	{
		z = z;
		y = y;
		x = x;
	}
	else if (x == z & z > y)
		//x = z > y -> z > y > x
	{
		x = y;
		y = z;
	}
	else if (x == z && z < y)
		//x = z < y -> z > y > x
	{
		z = y;
		y = x;
	}
	else if (y == z && z > x)
		//z = y > x -> z > y > x
	{
		x = x;
		y = y;
		z = z;
	}
	else if (y == z && z < x)
		//z = y < x
	{
		z = x;
		x = y;
	}
	else if (x == y && y > z)
		//x = y > z -> z > y > x
	{
		x = z;
		z = y;
	}
	else if (x == y && y < z)
		//x = y < z -> z > y > x
	{
		x = x;
		y = y;
		z = z;
	}
	
	printf("Valor de X: %.2f\nValor de Y: %.2f\nValor de Z: %.2f",x, y, z);
	
	return 0;
}