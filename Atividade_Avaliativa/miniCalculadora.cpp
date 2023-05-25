#include <stdio.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    printf("Insira a operação (+, -, / ou *) e dois números reais separados por espaço:\n");
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
                printf("Não é possível dividir por zero.");
                return 1;
            }
            resultado = num1 / num2;
            break;
        default:
            printf("Operação inválida.");
            return 1;
    }

    printf("O resultado da operação é: %.2f", resultado);

    return 0;
}

