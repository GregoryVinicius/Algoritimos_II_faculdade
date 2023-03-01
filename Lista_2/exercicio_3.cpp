/*
3. Entrar com a razão de uma PA e o valor do 1º termo. Calcule e imprima o 10o termo.
Formula: decimotermo = primeirotermo + (posição desejada – 1) * razão
*/

int main()
{
	float primeiro_termo, decimo_termo, posicao_desejada, razao;
	printf ("primeiro termo: ");
	scanf ("%f", &primeiro_termo);
	printf ("razao: ");
	scanf ("%f", &razao);
	posicao_desejada = 10;
	decimo_termo = primeiro_termo + (posicao_desejada -1) * razao;
	printf ("decimo termo = %.2f", decimo_termo);
	return 0;
}
