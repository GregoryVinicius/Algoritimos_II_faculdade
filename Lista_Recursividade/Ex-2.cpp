#include <stdio.h>

/* 2. Crie uma função recursiva que receba a razão de uma progressão aritmética e a posição a ser descoberta */

int progrecaoAritimetica(int r, int a){
	if(a == 1){
	    return 1;
	}else{
	    return progrecaoAritimetica(r, a - 1) + r;
	}
}

int main(){
	int result = progrecaoAritimetica(2, 4);
	printf("%d", result);
	return 0;
}
