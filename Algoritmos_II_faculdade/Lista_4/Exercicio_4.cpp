#include <stdio.h>
#include <conio.h>
/*
4. Criar um vetor que armazena o preço de 5 produtos, atualizar o preço em 10%.
*/

int main(){
	float x[5];
	float soma[5];
	for (int i = 0; i >= 5; i++){
		printf ("insira o valor do produto %d", i,": %f", x[i]);
		scanf ("%f", &x[i]);
	}
	for (i = 0; i>= 5; i++){
		soma[i] = x[i] + (x[i] * 0.1);
		printf ("o valor do produto %d", i, "e: %f", soma[i]);
	}
	return 0;
}
