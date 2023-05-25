#include <stdio.h>

int main()
{
    int num1, num2, divi, mmc;
    printf("insira o 1º numero: ");
    scanf("%d", &num1);
    printf("insira o 2º numero: ");
    scanf("%d", &num2);
    printf("Minimo multiplo comum\n");
    
    mmc = 1;
    
    while(num1 != 1 &&  num2 != 1){
        if(num1 % 2 == 0 && num2 % 2 == 0){
            num1 = num1 / 2;
            num2 = num2 / 2;
            divi = 2;
        }
        else if(num1 % 3 == 0 && num2 % 3 == 0){
            num1 = num1 / 3;
            num2 = num2 / 3;
            divi = 3;
        }
        else if(num1 % 5 == 0 && num2 % 5 == 0){
            num1 = num1 / 5;
            num2 = num2 / 5;
            divi = 5;
        }
        else if(num1 % 7 == 0 && num2 % 7 == 0){
            num1 = num1 / 7;
            num2 = num2 / 7;
            divi = 7;
        }
        else if(num1 % 11 == 0 && num2 % 11 == 0){
            num1 = num1 / 11;
            num2 = num2 / 11;
            divi = 11;
        }
        printf("%d | %d / %d\n", num1, num2, divi);
        mmc = divi * mmc;
    }
    printf("o minimo multiplo comum é %d", mmc);
    
    return 0;
}

