#include <stdio.h>
#include <conio.h>
/*
5. Entrar com dois n�meros e imprimir a m�dia aritm�tica
*/

int main()
{
	float a, b, soma, media;
	printf ("digite o primeiro valor: ");
	scanf ("%f", &a);
	printf ("digite o segundo valor: ");
	scanf ("%f", &b);
	media = (a + b) / 2;
	printf ("media dos dois valores: %.2f", media);
	return 0;
}
