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
	
	printf("[\n");
	
	while(aux){
		printf("%d\n", aux->valor);
		aux = aux->proximo;
	}
	printf("__");
}

int main(){
	Pilha pilha;
	inicializarPilha(&pilha);
	
	push(&pilha, 10);
	push(&pilha, 5);
	push(&pilha, 2);
	
	printf("%d\n", pop(&pilha));
	
	
	imprimir(&pilha);
	
	return 0;
}
