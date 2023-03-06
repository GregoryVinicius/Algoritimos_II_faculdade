#include <stdio.h>
#include <conio.h>
/*
2. Escreva um programa em C para ler 2 valores (se o segundo valor informado for ZERO
apresentará a seguinte mensagem "Valor inválido" e deverá ler um novo valor até que ele seja
um valor válido) e imprimir o resultado da divisão do primeiro pelo segundo.
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
