#include <stdio.h>
#include <conio.h>
/*
1. Faça um programa em C que leia palavras digitadas pelo usuário e que, para cada uma delas,
imprima a frase "Você digitou a palavra: xxxx" (onde "xxxx" é a palavra digitada). O programa
deve repetir essas operações até o usuário digitar a palavra "fim". O programa não deve
imprimir a frase de resposta quando a palavra digitada for "fim".
*/

int main()
{
	char palavra[100];
	printf ("Palavra: ");
	scanf ("%s", &palavra);
	printf ("Você digitou a palavra: %s", palavra);
	return 0;
}
