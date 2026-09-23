#include <stdio.h>

double calcularS(int n) 
{
    double s = 1.0;
    double fatorial = 1.0;
    
    for (int i = 1; i <= n; i++) 
    {
        fatorial *= i;
        s += 1.0 / fatorial;
    }
    return s;
}

int main() 
{
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    printf("O valor de S é: %.10f\n", calcularS(n));
    
    return 0;
}