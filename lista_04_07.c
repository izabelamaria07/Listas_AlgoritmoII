#include <stdio.h>

struct Atleta 
{
    char nome[100];
    char esporte[100];
    int idade;
    float altura;
};

int main() 
{
    struct Atleta atletas[5];
    struct Atleta aux;
    int i;
    int j;

    for (i = 0; i < 5; i++) 
    {
        printf("\nAtleta %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", atletas[i].nome);

        printf("Esporte: ");
        scanf(" %[^\n]", atletas[i].esporte);

        printf("Idade: ");
        scanf("%d", &atletas[i].idade);

        printf("Altura: ");
        scanf("%f", &atletas[i].altura);
    }
    for (i = 0; i < 4; i++) 
    {
        for (j = i + 1; j < 5; j++) 
        {
            if (atletas[i].idade < atletas[j].idade) 
            {
                aux = atletas[i];
                atletas[i] = atletas[j];
                atletas[j] = aux;
            }
        }
    }

    printf("\nAtletas do mais velho para o mais novo:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("%s - %d anos\n", atletas[i].nome, atletas[i].idade);
    }

    return 0;
}
