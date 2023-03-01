/*
8. Elabore um programa em C que peça três números ao utilizador, e que indique qual dos três é o
maior.
*/

int main()
{
	float a, b, c, maior;
	printf ("valor 1: ");
	scanf ("%f", &a);
	printf ("valor 2: ");
	scanf ("%f", &b);
	printf ("valor 3: ");
	scanf ("%f", &c);
	maior = -10000000000000;
	
	if(a > maior)
	{
		maior = a;
	}
	if(b > maior)
	{
		maior = b;
	}
	if(c > maior)
	{
		maior = c;
	}
	printf ("maior: %.2f", maior);
	return 0;
}
