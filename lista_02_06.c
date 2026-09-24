#include <stdio.h>

int main() 
{
    int vetor[5];

    for (int i = 0; i < 5; i++) 
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++) 
    {
        if (vetor[i] % 2 == 0) 
        {
            printf("O endereço do valor %d e: %p\n", vetor[i], (void *)&vetor[i]);
        }
    }

    return 0;
}
