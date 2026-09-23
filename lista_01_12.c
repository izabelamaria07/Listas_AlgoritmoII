#include <stdio.h>

void calcularTabuada(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        printf("%d x %d = %d\n", i, n, i * n);
    }
}

int main() 
{
    int valor;
    printf("Digite um valor para calcular a tabuada: ");
    scanf("%d", &valor);
    calcularTabuada(valor);
    return 0;
}