#include <stdio.h>
#include <conio.h>
/*
2. Escreva um programa em C para ler 2 valores (se o segundo valor informado for ZERO
apresentar� a seguinte mensagem "Valor inv�lido" e dever� ler um novo valor at� que ele seja
um valor v�lido) e imprimir o resultado da divis�o do primeiro pelo segundo.
*/

int main()
{
	int a, b, divisao;
	printf ("valor 1: ");
	scanf ("%d", &a);
	printf ("valor 2: ");
	scanf ("%d", &b);
		while (b == 0)
		{
		printf ("Valor invalido");
		printf ("\ndigite o valor 2: ");
		scanf ("%d", &b);
		}
	divisao = a / b;
	printf ("Divisao: %d", divisao);
}
