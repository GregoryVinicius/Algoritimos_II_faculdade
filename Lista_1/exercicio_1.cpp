
/*
1. Escreva um algoritmo que calcule o di�metro, a �rea e a circunfer�ncia de um c�rculo, sabendo
que o �nico dado dispon�vel � o seu raio.
Di�metro = 2 * Raio
�rea = PI * Raio2
Circunfer�ncia= 2 * PI * Raio
*/

int main()
{
    float raio, diametro, area, pi, circuferencia;
    printf ("digite o tamanho do raio: ");
    scanf ("%f", &raio);
    pi = 3.14;
    diametro = 2 * raio;
    area = pi * pow(raio, 2);
    circuferencia = 2 * pi * raio;
    printf ("\n o diametro �: %.2f", diametro);
    printf ("\n o area �: %.2f", area);
    printf ("\n o circuferencia �: %.2f", circuferencia);
    return 0;
}

