#include <stdio.h>

struct Data 
{
    int dia;
    int mes;
    int ano;
};

struct Pessoa 
{
    char nome[100];
    struct Data nasc;
};

int main() 
{
    struct Pessoa pessoas[6];

    int mais_nova = 0;
    int mais_velha = 0;
    int i;

    for (i = 0; i < 6; i++) 
    {
        printf("\nPessoa %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", pessoas[i].nome);

        printf("Data de nascimento (DD/MM/AAAA): ");
        scanf("%d/%d/%d",
              &pessoas[i].nasc.dia,
              &pessoas[i].nasc.mes,
              &pessoas[i].nasc.ano);
    }

    for (i = 1; i < 6; i++) 
    {
        if (pessoas[i].nasc.ano < pessoas[mais_velha].nasc.ano) 
        {
            mais_velha = i;
        }
        else if (pessoas[i].nasc.ano == pessoas[mais_velha].nasc.ano &&
            pessoas[i].nasc.mes < pessoas[mais_velha].nasc.mes) 
            {
                mais_velha = i;
            }
        else if (pessoas[i].nasc.ano == pessoas[mais_velha].nasc.ano &&
            pessoas[i].nasc.mes == pessoas[mais_velha].nasc.mes &&
            pessoas[i].nasc.dia < pessoas[mais_velha].nasc.dia)
            {
                mais_velha = i;
            }
        if (pessoas[i].nasc.ano > pessoas[mais_nova].nasc.ano) 
        {
            mais_nova = i;
        }
        else if (pessoas[i].nasc.ano == pessoas[mais_nova].nasc.ano &&
            pessoas[i].nasc.mes > pessoas[mais_nova].nasc.mes) 
            {
                mais_nova = i;
            }
        else if (pessoas[i].nasc.ano == pessoas[mais_nova].nasc.ano &&
            pessoas[i].nasc.mes == pessoas[mais_nova].nasc.mes &&
            pessoas[i].nasc.dia > pessoas[mais_nova].nasc.dia) 
            {
                mais_nova = i;
            }
    }

    printf("\nPessoa mais velha: %s\n", pessoas[mais_velha].nome);
    printf("Pessoa mais nova: %s\n", pessoas[mais_nova].nome);

    return 0;
}