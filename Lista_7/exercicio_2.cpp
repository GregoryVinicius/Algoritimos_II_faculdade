#include <stdio.h>
/*
Criar um algoritmo que leia os elementos de uma matriz inteira 10 X 10 e escreva
todos os elementos, exceto os elementos da diagonal principal.
*/

int main(){
    int x[10][10];
    printf ("informe os valores da matriz: ");
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            scanf ("%d", &x[i][j]);
        }
    }
    printf ("os valores que estão fora da diagona principal são:");
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (i != j){
                printf ("\n%d", x[i][j]);
            }
        }
    }
    return 0;
}
