#include <stdio.h>
#include <conio.h>
/*
3. Escreva um programa em C para ler as notas da 1a. e 2a. avaliações de um aluno, calcular e
imprimir a média semestral. Faça com que o algoritmo só aceite notas válidas (0 a 10). Cada
nota deve ser validada separadamente.
*/

int main ()
{
	int a1, a2, media;
	printf ("nota da primeira avaliacao: ");
	scanf ("%d", &a1);
	while (a1 < 0 or a1 > 10)
	{
		printf ("valor invalido");
		printf ("\nnota da primeira acaliacao: ");
		scanf ("%d", &a1);
	}
		printf ("nota da segunda avaliacao: ");
	scanf ("%d", &a2);
	while (a2 < 0 or a2 > 10)
	{
		printf ("valor invalido");
		printf ("\nnota da segunda acaliacao: ");
		scanf ("%d", &a2);
	}
	media = (a1 + a2) / 2;
	printf ("Media da nota: %d", media);
	return 0;
}
