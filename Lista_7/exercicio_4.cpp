#include <stdio.h>
/*
Entrar com valores para uma matriz 3 X 4. Gerar e imprimir uma matriz B que é o
triplo da matriz A
*/

int main(){
    int a[3][4], b[3][4];
    printf ("Insira os valores da matriz: ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            scanf ("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            b[i][j] = a[i][j] * 3;
        }
    } 
    printf ("A matriz que você digitou vezes 3 é: ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf ("\n%d", b[i][j]);
        }
    }    
    return 0;
}
