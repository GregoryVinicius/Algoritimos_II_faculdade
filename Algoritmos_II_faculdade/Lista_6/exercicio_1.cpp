#include <stdio.h>

/*
1. Armazenar 10 números em um vetor NUMERO e imprimir uma listagem
numerada
*/

int main(){
	int numero[10];
	for (int i = 0; i < 10; i++){
		printf ("Informe um numero: ");
		scanf ("%d", &numero[i]);
	}
	for (int i = 0; i < 10; i++){
		printf ("O numero informado foi: %d\n", numero[i]);
	}
	return 0;
}
