#include <stdio.h>

void inverte_vetor(int *vetor, int tamanho) 
{
    int *inicio = vetor;
    int *fim = vetor + tamanho - 1;
    int aux;

    while (inicio < fim) 
    {
        aux = *inicio;
        *inicio = *fim;
        *fim = aux;

        inicio++;
        fim--;
    }
}

int main() 
{
    int vetor[5] = {1, 2, 3, 4, 5};

    inverte_vetor(vetor, 5);

    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", *(vetor + i));
    }

    return 0;
}