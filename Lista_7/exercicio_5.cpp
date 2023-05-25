#include <stdio.h>

int main(){
    int a[4][4];
    int b[4][4];
    int soma[4][4];
    
    printf ("Informe os valores do vetor A: \n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf ("%d", &a[i][j]);
        }
    }
    printf ("Informe os valores do vetor B: \n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf ("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            soma[i][j] = a[i][j] + b[i][j];
            printf ("\nO resultado da soma de A e B: %d", soma[i][j]);
        }
    }
    return 0;
}
