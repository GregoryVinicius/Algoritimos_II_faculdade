#include <stdio.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    printf("Insira a opera��o (+, -, / ou *) e dois n�meros reais separados por espa�o:\n");
    scanf("%c %f %f", &operacao, &num1, &num2);

    switch(operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if(num2 == 0) {
                printf("N�o � poss�vel dividir por zero.");
                return 1;
            }
            resultado = num1 / num2;
            break;
        default:
            printf("Opera��o inv�lida.");
            return 1;
    }

    printf("O resultado da opera��o �: %.2f", resultado);

    return 0;
}

