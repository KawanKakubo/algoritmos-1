#include <stdio.h>
#include <string.h>

float lerCelsius()
{
   float celsius;
   printf("\nDigite uma temperatura em Celsius: ");
   scanf("%f",&celsius);
   return celsius;
}
float calcularFahrenheit(float celsius)
{
   float fahrenheit;
   fahrenheit = celsius * 9/ 5 + 32;
   return fahrenheit;
}
void apresentar(float celsius, float fahrenheit)
{
   printf("\nEm Celsius: %.2f", celsius);
   printf("\nEm Fahrenheit: %.2f", fahrenheit);
}

int main()
{
 float tempC, tempF;
 tempC = lerCelsius();
 tempF = calcularFahrenheit(tempC);
 apresentar(tempC, tempF);
 return 0;
}