#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *proximo;
}No;

No* criarNo(int valor){
	No *novo = criarNo(valor);
	if(novo){
		//novo->valor = valor;
		return novo;
	}else{
		printf("Erro alocar memória");
	}
	return NULL;
}

void adicionarInicio(No **lista, int valor){
	No *novo = criarNo(valor);
	if (novo){
		//novo -> valor = valor;
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
	No *novo = criarNo(valor);
	//novo -> valor = valor;
	if(novo){
		if(*lista == NULL){
			novo->proximo = *lista;
			*lista = novo;
		}else{
			No *aux = *lista;
			while(aux->proximo){
				aux = aux->proximo;
			}
			novo -> valor = valor;
			novo->proximo = NULL;
			aux->proximo = novo;
		}
	}else{
		printf("Erro ao alocar memoria");
	}
}

void adicionarMeio(No **lista, int posicao, int valor){
	No *novo = (No *) malloc(sizeof(No));	
	if(novo){
		novo->valor = valor;
		if(*lista == NULL){
			novo->proximo = NULL;
			*lista = novo;
		}else{
			No *aux = *lista;
			while(aux->proximo && aux->valor != posicao){
				aux = aux->proximo;
			}
			novo->proximo = aux->proximo;
			aux->proximo = novo;
		}
	}	
}

//implementar remover()
	
int main(){
	No *lista = NULL;
	imprimirLista(lista);
	
	adicionarInicio(&lista, 30);
	adicionarInicio(&lista, 20);
	adicionarInicio(&lista, 10);
	
	adicionarFim(&lista, 40);
	adicionarFim(&lista, 50);
	adicionarFim(&lista, 60);
	
	adicionarMeio(&lista, 40, 45);
	adicionarMeio(&lista, 10, 45);
	
	imprimirLista(lista);
	
	return 0;
}
