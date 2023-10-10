#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *proximo;
}No;

No* criarNo(int valor){
	No *novo = (No *)malloc(sizeof(No));
	if(novo){
		novo->valor = valor;
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
	printf("\n");
	printf("[");
	while(lista){
		printf(" %d ", lista->valor);
		lista = lista -> proximo;	
	}
	printf("]");
	printf("\n");
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
	No *novo = criarNo(valor);	
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


void remover(No **lista, int valor){
	No *aux = *lista;
	if(aux != NULL){
		if(aux->valor = valor){
			*lista = aux->proximo;
			free(aux);
		}
		else{
			while(aux->proximo && aux->proximo->valor != valor){
				aux = aux->proximo;
			}
			if(aux->proximo){
				No *remover = aux->proximo;
				aux->proximo = remover->proximo;
				free(remover);
			}
		}
	}
}

void menu(No **lista){
	int opcaoUsuario, valor, aux;
	printf("-----MENU-----\n1. inserir no Inicio\n2. inserir no meio\n3. inserir no fim\n4. remover\n");
	scanf("%d", &opcaoUsuario);
	
	if(opcaoUsuario == 1){
		printf("Valor a ser inserido no inicio: ");
		scanf("%d", &valor);
		
		adicionarInicio(&lista, valor);
	}else if(opcaoUsuario == 2){
		printf("Valor a ser inserido no meio: ");
		scanf("%d", &valor);
		
		printf("O valor sera inserido depois de qual valor: ");
		scanf("%d", &aux);
		
		adicionarMeio(&lista, aux, valor);
	}else if(opcaoUsuario == 3){
		printf("Valor a ser inserido no fim: ");
		scanf("%d", &valor);
		
		adicionarFim(&lista, valor);
	}else if(opcaoUsuario == 4){
		printf("Valor que quer excluir: ");
		scanf("%d", valor);
		
		remover(&lista, valor);
	}
}

int main(){
	No *lista = NULL;
	
	menu(lista);
	
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
