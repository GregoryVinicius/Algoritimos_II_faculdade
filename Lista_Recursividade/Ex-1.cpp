#include <stdio.h>

/*1. Crie uma fun��o recursiva para realizar uma somat�ria de de n�mero inteiros de n at� 1, sendo n um n�mero inteiro informado pelo usu�rio.*/
int somarAte1(int n){
    if(n > 1){
    	return (n + somarAte1((n - 1)));
    }
}

int main(){
	int soma = somarAte1(3);
	printf("%d", soma);
	return 0;
}
