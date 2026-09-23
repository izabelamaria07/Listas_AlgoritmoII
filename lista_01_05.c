#include <stdio.h>

int numero_Perfeito(int numero)
{
    int soma = 0;
    int i;

    for (i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            soma = soma + i;
        }
    }
    if (soma == numero)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero_Perfeito(numero) == 1)
    {
        printf("O numero e perfeito.\n");
    }
    else
    {
        printf("O numero nao e perfeito.\n");
    }

    return 0;
}