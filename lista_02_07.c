#include <stdio.h>

int ocorre(char *texto, char *busca) 
{
    char *p, *q;

    while (*texto != '\0') 
    {
        p = texto;
        q = busca;

        while (*p == *q && *q != '\0') 
        {
            p++;
            q++;
        }

        if (*q == '\0') 
        {
            return 1;
        }

        texto++;
    }

    return 0;
}

int main() 
{
    char texto[100];
    char busca[50];

    printf("Digite a primeira string: ");
    scanf("%[^\n]", texto);

    printf("Digite a segunda string: ");
    scanf(" %[^\n]", busca);

    if (ocorre(texto, busca)) 
    {
        printf("A segunda string ocorre dentro da primeira.\n");
    } 
    else 
    {
        printf("A segunda string nao ocorre dentro da primeira.\n");
    }

    return 0;
}
