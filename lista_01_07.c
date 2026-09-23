#include <stdio.h>

float Media()
{
    float numero, soma = 0;
    int quantidade = 0;

    printf("Digite valores positivos (-1 para parar): ");
    scanf("%f", &numero);

    while (numero >= 0)
    {
        soma = soma + numero;
        quantidade++;

        scanf("%f", &numero);
    }

    if (quantidade > 0)
    {
        return soma / quantidade;
    }
    else
    {
        return 0;
    }
}

int main()
{
    float media;

    media = Media();

    printf("Media = %.2f\n", media);

    return 0;
}