/*
2. Entrar com os valores dos catetos de um triângulo retângulo e imprimir a hipotenusa.
Formula: hipotenusa = raiz (b2 + c2);
*/

int main()
{
	float b, c, hipo;
	printf ("cateto 1: ");
	scanf ("%f", &b);
	printf ("cateto 2: ");
	scanf ("%f", &c);
	hipo = pow((pow(b, 2)+ pow(c, 2)),0.5);
	printf ("hipotenusa: %.2f", hipo);
	
	return 0;
}
