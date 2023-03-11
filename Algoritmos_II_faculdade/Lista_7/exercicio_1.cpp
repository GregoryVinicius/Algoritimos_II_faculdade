#include <stdio.h>
/*
Criar um algoritmo que leia os elementos de uma matriz inteira 10 X 10 e escreva
os elementos da diagonal principal
*/

int main(){
    int x[10][10];
    printf ("informe os valores da matriz: ");
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            scanf ("%d", &x[i][j]);
        }
    }
    for (int i = 0; i < 10; i++){
        printf ("os elementos da diagonal principal: %d\n", x[i][i]);
    }
    return 0;
}
