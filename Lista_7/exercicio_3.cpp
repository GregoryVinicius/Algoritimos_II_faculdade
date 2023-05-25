#include <stdio.h>
/*
Criar um algoritmo que armazene dados em uma matriz de ordem 5 e imprima
toda a matriz.
*/

int main(){
    int x[5][5];
    printf ("Digite os valores da matriz.");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            scanf ("%d", &x[i][j]);
        }
    }
    printf ("A matriz: ");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf ("%d\n", x[i][j]);
        }
    }
    return 0;
}
