#include <stdio.h>

void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, float *media) 
{
    int *p = vetor;
    int soma = 0;

    *min = *p;
    *max = *p;

    while (p < vetor + tamanho) 
    {
        if (*p < *min) 
        {
            *min = *p;
        }

        if (*p > *max) 
        {
            *max = *p;
        }

        soma = soma + *p;
        p++;
    }

    *media = (float)soma / tamanho;
}

int main() 
{
    int vetor[5];
    int min, max;
    float media;

    printf("Digite 5 valores:\n");

    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", vetor + i);
    }

    extrair_estatisticas(vetor, 5, &min, &max, &media);

    printf("Menor: %d\n", min);
    printf("Maior: %d\n", max);
    printf("Media: %.2f\n", media);

    return 0;
}