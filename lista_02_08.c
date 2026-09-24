#include <stdio.h>

void preencher(int *vetor, int tamanho, int valor) 
{
    int *fim = vetor + tamanho;

    while (vetor < fim) 
    {
        *vetor = valor;
        vetor++;
    }
}

int main() 
{
    int vetor[5];
    int valor;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    preencher(vetor, 5, valor);

    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}