#include <stdio.h>

void conversão(int total_Segundos)
{
    int horas, minutos, segundos;

    horas = total_Segundos / 3600;

    minutos = (total_Segundos % 3600) / 60;

    segundos = total_Segundos % 60;

    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
}

int main()
{
    int segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    conversão(segundos);

    return 0;
}