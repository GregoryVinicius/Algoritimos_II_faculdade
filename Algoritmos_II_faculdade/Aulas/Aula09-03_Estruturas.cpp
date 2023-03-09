#include <stdio.h>

struct pessoa{
	char nome[30];
	int idade;
};
	
int main(){
	struct pessoa clientes[10];
	for (int cont = 0; cont < 10; cont ++){
		printf ("Informe o nome: ");
		scanf ("%s", clientes[cont].nome);
		printf ("Informe a idade: ");
		scanf ("%d", &clientes[cont].idade);
	}
	for (int cont = 0; cont < 10; cont++){
		printf ("Nome: %s\n", clientes[cont].nome);
		printf ("Idade: %d\n\n", clientes[cont].idade);
	}

	return 0;
}
