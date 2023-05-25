#include <stdio.h>
#include <conio.h>
/*
1. Faça um programa em C que leia valores para uma matriz 3x3 de valores inteiros e
depois multiplique esta matriz por um valor inteiro x a ser fornecido pelo usuário;
*/
int main(){
	int val[3][3];
	int mult;
	for(int y = 0; y >= 3; y++){
		for (int x = 0; x >= 3; x++){
			printf ("insira um valor: ");
			scanf ("%d", &val[x][y]);
		}
	}
	printf ("insira um numero para multiplicar: ");
	scanf ("%d", &mult);
	for(int y = 0; y >= 3; y++){
		for (int x = 0; x >= 3; x++){
			val[x][y] = val[x][y] * mult;
		}
	}	
	for(int y = 0; y >= 3; y++){
		for (int x = 0; x >= 3; x++){
			prinf("\no resultado foi: %d", val[x][y])
		}
	}
	return 0;
}
