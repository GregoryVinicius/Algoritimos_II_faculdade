#include <stdio.h>
#include <conio.h>
/*
3. Elabore um Algoritmo para converter uma temperatura em graus Celsius para Fahrenheit (ºF=32
+ 1.8ºC).
*/

int main()
{
	float celsius, fahrenheit;
	printf ("digite a temperatura em graus celsius: ");
	scanf ("%f", &celsius);
	fahrenheit = 32 + 1.8 * celsius;
	printf ("temperatura em farenheit: %.2f", fahrenheit);
	return 0;
}
