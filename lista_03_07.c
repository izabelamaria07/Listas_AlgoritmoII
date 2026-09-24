#include <stdio.h>

void swap(int *a, int *b) 
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void ordenar(int *vetor, int tamanho) 
{
    int *p;
    int i;

    for (i = 0; i < tamanho - 1; i++) 
    {
        p = vetor;

        while (p < vetor + tamanho - 1) 
        {
            if (*p > *(p + 1)) 
            {
                swap(p, p + 1);
            }

            p++;
        }
    }
}

int main() 
{
    int vetor[5];
    int i;

    printf("Digite 5 valores:\n");

    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &vetor[i]);
    }

    ordenar(vetor, 5);

    printf("Vetor ordenado:\n");

    for (i = 0; i < 5; i++) 
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}