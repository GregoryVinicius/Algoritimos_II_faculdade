#include <stdio.h>
/*
Armazenar o salário de 20 pessoas. Calcular e armazenar o novo salário sabendose que o reajuste foi de 8%.
*/
struct pessoa {
	char nome[30];
	float salario;
};

int main(){
	struct pessoa pessoa[20];
	float soma[20];
	for (int cont = 0; cont < 20; cont++){
		printf ("Informe o nome: ");
		scanf ("%s", pessoa[cont].nome);
		printf ("Informe a salario: ");
		scanf ("%f", pessoa[cont].salario);
	}
	for (int i = 0; i < 20; i++){
		soma[i] = pessoa[i].salario + pessoa[i].salario * 0.08;
	}
	for (int i = 0; i < 20; i++){
		printf ("%s", pessoa[i].nome);
		printf (" recebia %f", pessoa[i].salario);
		printf (" com o reajuste ira receber %f\n", soma[i]);
	}
	return 0;
}
