#include <stdio.h>
/*
incrementar(int x){
	x = x + 1;
	printf("O valor de x dentro da funcao %d", x);	
}

int main(){
	int x = 10;
	incrementar(x);
	
	printf("\nO valor de x fora da funcao %d", x);
	return 0;
}
*/

/*
void incrementa(int *x){
	*x = *x + 1;
	printf("Valor de x dentro da funcao: %d", *x);
}

int main (){
	int x = 10;
	incrementa(&x);
	
	printf("\nValor de x fora da funcao: %d", x);
	return 0;
}
*/

/*
mudar algumas coisas ainda

int somaEMultValor(int a, int b,int soma, int mult){
	int mult = a * b;
	int soma = a + b;
	return soma, mult;
}

int somaEMultRef(int *a, int *b){
	int mult = *a * *b;
	int soma = *a + *b;
	return soma, mult;
}

int somaEmultSem(){
	int a, b;
	
	printf("Informe o 1º valor: ");
	scanf("%d", &a);
	printf("Informe o 2º valor: ");
	scanf("%d", &b);
	
	int soma = a + b;
	int mult = a * b;
	
	return soma, mult;
}

int main(){
	int a = 10;
	int b = 20;
	
	int valorSoma, valorMult = somaEMultValor(a, b);
	
	int refSoma, refMult = somaEMultRef(&a, &b);
	
	int semSoma, semMult = somaEmultSem();
	
	printf("\nValor: %d, %d", valorSoma, valorMult);
	printf("\nReferencia: %d, %d", refSoma, refMult);
	printf("\nSem: %d, %d", semSoma, semMult);
}
*/
