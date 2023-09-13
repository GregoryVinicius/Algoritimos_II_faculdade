#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *proximo;
}No;

void adicionarInicio(No **lista, int valor){
	No *novo = (No*) malloc(sizeof(No));
	if (novo){
		novo -> valor = valor;
		novo -> proximo = *lista;
		*lista = novo;
	}else{
		printf("Erro ao alocar memoria");
	}
}
void imprimirLista(No *lista){
	printf("[");
	while(lista){
		printf(" %d ", lista->valor);
		lista = lista -> proximo;	
	}
	printf("]");
}

void adicionarFim(No **lista, int valor){
	No *novo = (No *) malloc(sizeof(No));
	novo -> valor = valor;
	if(novo){
		if(*lista == NULL){
			novo->proximo = *lista;
			*lista = novo;
		}else{
			No *aux = *lista;
			while(aux->proximo){
				aux = aux->proximo;
			}
			novo->proximo = NULL;
			aux->proximo = novo;
		}
	}else{
		printf("Erro ao alocar memoria");
	}
}
	
int main(){
	No *lista = NULL;
	imprimirLista(lista);
	adicionarInicio(&lista, 30);
	adicionarInicio(&lista, 20);
	adicionarInicio(&lista, 10);
	adicionarFim(&lista, 40);
	adicionarFim(&lista, 50);
	adicionarFim(&lista, 60);
	imprimirLista(lista);
	
	return 0;
}
