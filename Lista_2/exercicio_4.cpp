/*
4. Entrar com a raz�o de uma PG e o valor do 1� termo. Calcular e imprimir o 5o termo.
Formula: quintotermo = primeirotermo * raz�o (quintaposicao � 1)
*/

int main()
{
	float primeiro_termo, razao, posicao_desejada, termo_final;
	printf ("primeiro termo: ");
	scanf ("%f", &primeiro_termo);
	printf ("razao: ");
	scanf ("%f", &razao);
	posicao_desejada = 5;
	termo_final = primeiro_termo * pow(razao, (posicao_desejada - 1));
	printf ("termo final: %.2f", termo_final);
	return 0;
}
