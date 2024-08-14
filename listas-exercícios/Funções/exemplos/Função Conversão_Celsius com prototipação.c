#include <stdio.h>
#include <string.h>
//Prototipação
float lerCelsius();
float calcularFahrenheit(float);
void apresentar(float, float);

//Função Principal chamando as funções criadas
int main()
{
float tempC, tempF;
tempC = lerCelsius();
tempF = calcularFahrenheit(tempC);
apresentar(tempC, tempF);
return 0;
}

//As funções podem ser escritas depois de serem chamadas
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