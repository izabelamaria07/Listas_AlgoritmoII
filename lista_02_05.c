#include <stdio.h>

int main() 
{
    int vetor[5];

    for (int i = 0; i < 5; i++) 
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", vetor + i);
    }

    printf("\nResultados:\n");

    for (int i = 0; i < 5; i++) 
    {
        printf("O dobro do valor %d e: %d\n", i + 1, *(vetor + i) * 2);
    }

    return 0;
}
