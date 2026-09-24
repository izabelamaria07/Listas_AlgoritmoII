#include <stdio.h>

int* busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s) 
{
    int *p;
    int *q;
    int i;

    for (p = vetor; p <= vetor + tam_v - tam_s; p++) 
    {
        q = sub;

        for (i = 0; i < tam_s; i++) 
        {
            if (*(p + i) != *(q + i)) 
            {
                break;
            }
        }

        if (i == tam_s) 
        {
            return p;
        }
    }

    return NULL;
}

int main() 
{
    int vetor[6] = {1, 2, 3, 4, 5, 6};
    int sub[3] = {3, 4, 5};

    int *endereco;

    endereco = busca_subvetor(vetor, 6, sub, 3);

    if (endereco != NULL) 
    {
        printf("Subvetor encontrado!\n");
        printf("Primeiro valor: %d\n", *endereco);
        printf("Endereco: %p\n", (void *)endereco);
    } 
    else 
    {
        printf("Subvetor nao encontrado.\n");
    }

    return 0;
}