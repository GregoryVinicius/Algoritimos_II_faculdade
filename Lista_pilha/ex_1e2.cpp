#include <stdio.h>
#include <stdlib.h>
typedef struct no{
	int valor;
	struct no *proximo;	
}No;

typedef struct pilha{
	struct no *topo;
}Pilha;

void inicializarPilha(Pilha *p){
	p->topo = NULL;
}

int verificarPilhaVazia(Pilha *p){
	return (p->topo == NULL);
}

void push(Pilha *p, int valor){
	No *novo = (No *)malloc(sizeof(No));
	
	if(novo){
		novo->valor = valor;
		novo->proximo = p->topo;
		p->topo = novo;
	}
}

int pop(Pilha *p){
	No *aux = p->topo;
	int auxValor = aux->valor;
	
	//if(verificarPilhaVazia(p) != NULL){
		p->topo = aux->proximo;
		free(aux);
		return auxValor;		
	
}

void imprimir(Pilha *p){
	No *aux = p->topo;
	
	printf("__\n");
	
	while(aux){
		printf("%d\n", aux->valor);
		aux = aux->proximo;
	}
	printf("__\n");
}

int getMin(Pilha *p){
	
}

int getMax(Pilha *p){
	
}

int menu(Pilha *pilha){
	int opcao;
	printf("1. Adicionar na pilha\n");
	printf("2. Remover da pilha\n");
	printf("3. Mostrar pilha\n");
	printf("4. Pegar minimo\n");
	printf("5. Pegar maximo\n");
	printf("6. Sair\n");
	scanf("%d", &opcao);
	
	if(opcao == 1){
		int valor;
		printf("Valor a ser adicionado: ");
		scanf("%d", &valor);
		push(pilha, valor);
	}else if(opcao == 2){
		int aux = pop(pilha);
		printf("\nO valor %d foi removido da lista\n", aux);
	}else if(opcao == 3){
		imprimir(pilha);
	}else if(opcao == 4){
		
	}else if(opcao == 5){
		
	}
	return opcao;
}

int main(){
	Pilha pilha;
	inicializarPilha(&pilha);
	
	int opcao = 0;
	for(;;){
		int opcao = menu(&pilha);
		if(opcao == 6)
		break;
	}
	return 0;
}
