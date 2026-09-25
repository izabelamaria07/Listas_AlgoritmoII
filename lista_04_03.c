#include <stdio.h>

struct Aluno 
{
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
};

int main() 
{
    struct Aluno alunos[5];

    float media;
    float maior_media = 0;
    int maior = 0;
    int i;

    for (i = 0; i < 5; i++) 
    {
        printf("\nAluno %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);

        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (media > maior_media) 
        {
            maior_media = media;
            maior = i;
        }
    }

    printf("\nAluno com maior media:\n");
    printf("Nome: %s\n", alunos[maior].nome);
    printf("Notas: %.2f, %.2f, %.2f\n",
        alunos[maior].nota1,
        alunos[maior].nota2,
        alunos[maior].nota3);

    return 0;
}