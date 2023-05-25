#include <stdio.h>
#include <conio.h>
/*
6. Ler 10 valores, calcular e escrever a média aritmética destes valores. 
*/

int main()
{
	float novo, media, soma;
	soma = 0;
	for (int i = 0; i <10; i++)
	{
		scanf ("%f", &novo);
		soma += novo;
	}
	media = soma / 10.0;
	printf ("media: %f", media);
	return 0;
}
