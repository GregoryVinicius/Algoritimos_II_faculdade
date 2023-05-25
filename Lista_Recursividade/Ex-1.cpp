#include <stdio.h>

/*1. Crie uma função recursiva para realizar uma somatória de de número inteiros de n até 1, sendo n um número inteiro informado pelo usuário.*/
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
