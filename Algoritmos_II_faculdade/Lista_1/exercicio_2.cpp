#include <stdio.h>
#include <conio.h>
/*
2. Escreva um algoritmo para ler o salário mensal e o percentual de reajuste. Calcular e escrever o
valor do novo salário.
*/

int main()
{
	float sal_ant, sal_nov, reajuste;
	printf ("digite o seu salario: ");
	scanf ("%f", & sal_ant);
	reajuste = 0.0298;
	sal_nov = sal_ant + sal_ant * reajuste;
	
	printf ("\n seu salario com reajuste: %.2f", sal_nov);
	
	return 0;
}
