#include <stdio.h>

/* 2. Crie uma fun��o recursiva que receba a raz�o de uma progress�o aritm�tica e a posi��o a ser descoberta */

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
