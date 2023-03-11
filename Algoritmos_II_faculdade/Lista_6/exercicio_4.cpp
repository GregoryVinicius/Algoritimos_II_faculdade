#include <stdio.h>
#include <math.h>
/*
Ler um vetor v de 10 elementos e obter um vetor w cujos componentes são os
quadrados dos respectivos componentes de v.
*/

int main(){
    int v[10], w[10];
    printf ("informe os valores: ");
    for (int i = 0; i < 10; i++){
        scanf ("%d", &v[i]);
        w[i] = pow(v[i], 2);
    }
    for (int i = 0; i < 10; i++){
        printf ("o valor de %d", v[i]);
        printf (" elevados ao quadrado é %d\n", w[i]);
    }
    return 0;
}
