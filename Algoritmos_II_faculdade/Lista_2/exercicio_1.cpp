#include <stdio.h>
#include <conio.h>
/*
1. Criar um programa em C que calcule e imprima a área de um losango.
Formula: (diagonal maior * diagonal menor) dividido por 2
*/

int main()
{
	float diag_mai, diag_men, area_los;
	printf ("diagonal maior: ");
	scanf ("%f", &diag_mai);
	printf ("diagonal menor: ");
	scanf ("%f", & diag_men);
	area_los = (diag_mai * diag_men) / 2;
	
	printf ("area do losangulo: %.2f", area_los);
	return 0;
}
