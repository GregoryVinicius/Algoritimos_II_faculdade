/*
5. Faça um programa em C que leia 5 valores e determine o menor deles.
*/

int main()
{
	float a, b, c, d, e, menor, i;
	printf ("a = ");
	scanf ("%f", &a);
	printf ("b = ");
	scanf ("%f", &b);
	printf ("c = ");
	scanf ("%f", &c);
	printf ("d = ");
	scanf ("%f", &d);
	printf ("e = ");
	scanf ("%f", &e);
	
	menor = 100000000000;
	
	if (a < menor)
	{
		menor = a;
	}
	if (b < menor)
	{
		menor = b;
	}
	if (c < menor)
	{
		menor = c;
	}
	if (d < menor)
	{
		menor = d;
	}
	if (e < menor)
	{
		menor = e;
	}
	printf ("menor numero : %.2f", menor);
	return 0;
}
