#include <stdio.h>

int* buscar(int *vetor, int tamanho, int x) 
{
    int *p = vetor;

    while (p < vetor + tamanho) 
    {
        if (*p == x) 
        {
            return p;
        }
        p++;
    }

    return NULL;
}

int main() 
{
    int vetor[5];
    int x;
    int *endereco;

    printf("Digite 5 valores:\n");

    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", vetor + i);
    }

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &x);

    endereco = buscar(vetor, 5, x);

    if (endereco != NULL) 
    {
        printf("Valor encontrado: %d\n", *endereco);
        printf("Endereco: %p\n", (void *)endereco);
    } 
    else 
    {
        printf("Valor nao encontrado.\n");
    }

    return 0;
}