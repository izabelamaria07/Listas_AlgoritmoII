#include <stdio.h>

int idade_Dias(int anos, int meses, int dias)
{
    int total;

    total = anos * 365 + meses * 30 + dias;

    return total;
}

int main()
{
    int anos, meses, dias, total_Dias;

    printf("Digite os anos: ");
    scanf("%d", &anos);

    printf("Digite os meses: ");
    scanf("%d", &meses);

    printf("Digite os dias: ");
    scanf("%d", &dias);

    total_Dias = idade_Dias(anos, meses, dias);

    printf("Idade em dias: %d\n", total_Dias);

    return 0;
}