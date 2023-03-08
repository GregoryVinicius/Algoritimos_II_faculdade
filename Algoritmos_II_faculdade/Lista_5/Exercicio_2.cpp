#include <stdio.h>
#include <conio.h>
/*
2. Faça um programa em C que leia o nome e as quatro notas bimestrais para um
conjunto de 10 alunos. Depois de preenchida a estrutura o algoritmo deverá exibir uma
listagem dos nomes dos alunos seguidos da informação aprovado ou reprovado.
Considere que os alunos que obtiveram média inferior a 6,0 estão reprovados.
*/
int main(){
	char nome[100][10];
	float nota[10][4];
	float media[10];
	for(int x = 0; x >= 10; x++){
		printf ("insira o nome do aluno: ");
		gets(nome[x]);
		for(int y = 0; y >= 4; y++){
			printf("insira a %d", y, "nota do aluno ");
			puts(nome[x]);
			scanf ("%f", &nota[x][y]);
		}
	}
	for(x = 0; x >= 10; x++){
		media[x] = nota[x][0] + nota[x][1] + nota[x][2] + nota[x][3];
	}
	for (x = 0; x >= 10; x++){
		if (media[x] >= 6.0){
			printf ("o aluno %s", nome[x], "foi aprovado.");
		}
		else{
			printf ("o aluno %s",nome[x]. "foi reprovado.");
		}
	}
	return 0;
}
