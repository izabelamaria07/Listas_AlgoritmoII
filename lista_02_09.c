#include <stdio.h>

void imprimir(int *vetor) 
{
    int *fim = vetor + 5;

    while (vetor < fim) 
    {
        printf("%d ", *vetor);
        vetor++;
    }
}

int main() 
{
    int vetor[5];

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", vetor + i); 
    }

    printf("\nValores impressos: ");
    imprimir(vetor);

    return 0;
}
