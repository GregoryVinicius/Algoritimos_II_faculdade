#include <stdio.h>
#include <conio.h>
/*
1. Criar um programa em c que armazene números em dois vetores inteiros de cinco elementos cada.
Gere e imprima o vetor soma (soma dos dois vetores).
*/
int main(){
	int x[5];
	int y[5];
	int soma[5];
	for(int i = 0; i <= 5; i++){
		printf ("informe um valor: ");
		scanf ("%d", &x[i]);
	}
	for(int j = 0; j <= 5; j++){
		printf ("informe um valor: ");
		scanf ("%d", &y[j]);
	}
	for(int l = 0; l <= 5; l++){
		soma[l] = x[l] + y[l];
		printf ("soma: %d", soma[l]);
	}
	return 0;
}
