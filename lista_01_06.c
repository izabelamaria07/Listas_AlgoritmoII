#include <stdio.h>

char conceito(float nota)
{
    if (nota >= 0 && nota <= 4.9)
    {
        return 'D';
    }
    else if (nota <= 6.9)
    {
        return 'C';
    }
    else if (nota <= 8.9)
    {
        return 'B';
    }
    else
    {
        return 'A';
    }
}

int main()
{
    float nota;
    char resultado;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    resultado = conceito(nota);

    printf("Conceito: %c\n", resultado);

    return 0;
}