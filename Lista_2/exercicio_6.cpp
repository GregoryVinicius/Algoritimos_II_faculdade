/*
6. Dado 3 valores (X, Y, Z) que representam os lados de um triangulo, verifique se estes valores
formam um triangulo eqüilátero, isósceles ou escaleno.
Dica: o triangulo eqüilátero tem os três lados iguais, isósceles dois lados iguais e escaleno os três
lados diferentes.
*/

int main()
{
	float x, y, z;
	printf ("tamanho do primeiro lado: ");
	scanf ("%f", &x);
	printf ("tamanho do segundo lado: ");
	scanf ("%f", &y);
	printf ("tamanho do terceiro lado: ");
	scanf ("%f", &z);
	if (x == y and x == z and y == z)
	{
		printf ("triagulo equilatero");
	}
	if ((x == y and x != z) or (x == z and x != y) or (y == z and y != x))
	{
		printf ("triangulo isoceles");
	}
	if (x != y and x != z and y != z)
	{
		printf ("triagulo escaleno");
	}
	return 0;
}
