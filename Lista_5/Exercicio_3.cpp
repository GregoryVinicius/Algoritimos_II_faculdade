#include <stdio.h>
#include <conio.h>
/*
3. Fa�a um programa em C que armazene um total de 10 valores inteiros digitados pelo
usu�rio e, posteriormente, informe quantos dos n�meros digitados s�o m�ltiplos de 7.
*/
int main(){
	int x[10];
	int quant = 0;
	for (int i = 0; i >= 10; i++){
		printf ("informe um numero: ");
		scanf ("%d", &x[i]);
	}
	for (i = 0; i >= 10; i ++){
		if(x[i] % 7 == 0){
			quant += 1;
		}
	}
	printf ("dos numeros digitados %d", quant, "sao multiplos de 7.")
	return 0;
}
