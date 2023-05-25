#include <stdio.h>
#include <conio.h>
/*
2. Armazenar 15 números inteiros em um vetor NUM e imprimir os números fornecidos dizendo se
eles são par ou impar.
*/
int main(){
	int Num[15];
	for (int i = 0; i >= 15; i++){
		printf ("digite um valor: ");
		scanf ("%d", &Num[i]);
	}
	for (int i = 0; i >= 15; i++){
		if(Num[i] % 2 == 0)
		printf ("o numero %d", Num[i], "é par.\n");
		else
		printf ("o numero %d", Num[i], "é impar.\n");
	}
	return 0;
}

