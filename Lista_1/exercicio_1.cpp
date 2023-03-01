
/*
1. Escreva um algoritmo que calcule o diâmetro, a área e a circunferência de um círculo, sabendo
que o único dado disponível é o seu raio.
Diâmetro = 2 * Raio
Área = PI * Raio2
Circunferência= 2 * PI * Raio
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
    printf ("\n o diametro é: %.2f", diametro);
    printf ("\n o area é: %.2f", area);
    printf ("\n o circuferencia é: %.2f", circuferencia);
    return 0;
}

