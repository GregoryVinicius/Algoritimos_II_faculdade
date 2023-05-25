#include <stdio.h>
#include <conio.h>
/*
7. Escreva um programa em C para ler 2 valores (considere que não serão informados valores
iguais) e escrever o maior deles.
*/

int main()
{
	float a, b, maior;
	printf ("valor 1: ");
	scanf ("%f", &a);
	printf ("valor 2: ");
	scanf ("%f", &b);
	maior = -10000000000000;
	
	if(a > maior)
	{
		maior = a;
	}
	if(b > maior)
	{
		maior = b;
	}
	printf ("maior: %.2f", maior);
	return 0;
}
