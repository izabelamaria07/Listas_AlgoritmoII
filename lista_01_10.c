#include <stdio.h>

double calcular(double a, double b, char simbolo) 
{
    switch (simbolo) 
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } 
            else 
            {
                printf("Erro: Divisao por zero!\n");
                return 0;
            }
        default:
            printf("Operador invalido!\n");
            return 0;
    }
}

int main() 
{
    double num1, num2;
    char simbolo;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);
    printf("Digite o simbolo (+, -, *, /): ");
    scanf(" %c", &simbolo);

    double resultado = calcular(num1, num2, simbolo);
    if (!(simbolo == '/' && num2 == 0)) 
    {
        printf("O resultado da operação e: %.2f\n", resultado);
    }

    return 0;
}