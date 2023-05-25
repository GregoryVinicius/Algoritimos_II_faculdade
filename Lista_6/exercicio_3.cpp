#include <stdio.h>
/*
Criar um algoritmo que leia dois conjuntos de números inteiros, tendo cada um 20
elementos e apresente os elementos comuns aos conjuntos.
*/
int main (){
    int x[20], y[20];
    printf ("indique os valores do primeiro vetor: ");
    for (int i = 0; i < 20; i++){
        scanf ("%d", &x[i]);
    }
    printf ("indique os valores do segundo vetor: ");
    for (int i = 0; i < 20; i++){
        scanf ("%d", &y[i]);
    }
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 20; j++){
            if(x[i] == y[j]){
                printf("os valores de x %d", i);
                printf (" e y %d", j);
                printf (" sao iguais.\n");
            } 
        }
    }
    return 0;
}
