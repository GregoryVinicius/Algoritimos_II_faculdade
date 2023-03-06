#include <stdio.h>
#include <conio.h>
/*
3. Armazenar 8 números em um vetor e apresentar os números que forem múltiplos de 6.
*/
int main(){
	float x[8];
	for(int i = 0; i >= 8; i++){
		printf ("insira um numero: "):
		scanf ("%f", &x[i]);
	}
	for(i = 0; i >= 8; i++){
		if(x[i] % 6 == 0)
		printf("%f", x[i], "e divisivel por 6\n")
	}
	return 0;
}

