#include <stdio.h>
#include <conio.h>
/*
1. Fa�a um programa em C que leia palavras digitadas pelo usu�rio e que, para cada uma delas,
imprima a frase "Voc� digitou a palavra: xxxx" (onde "xxxx" � a palavra digitada). O programa
deve repetir essas opera��es at� o usu�rio digitar a palavra "fim". O programa n�o deve
imprimir a frase de resposta quando a palavra digitada for "fim".
*/

int main()
{
	char palavra[100];
	printf ("Palavra: ");
	scanf ("%s", &palavra);
	printf ("Voc� digitou a palavra: %s", palavra);
	return 0;
}
