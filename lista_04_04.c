#include <stdio.h>

struct Hora 
{
    int hora;
    int minuto;
    int segundo;
};

int main() 
{
    struct Hora horas[5];
    int maior = 0;
    int i;

    for (i = 0; i < 5; i++) 
    {
        printf("\nDigite a hora %d (HH:MM:SS): ", i + 1);
        
        scanf("%d:%d:%d", &horas[i].hora, &horas[i].minuto, &horas[i].segundo);
    }

    for (i = 1; i < 5; i++) 
    {
        if (horas[i].hora > horas[maior].hora) 
        {
            maior = i;
        }
        else if (horas[i].hora == horas[maior].hora &&
            horas[i].minuto > horas[maior].minuto) 
            {
                maior = i;
            }
        else if (horas[i].hora == horas[maior].hora &&
            horas[i].minuto == horas[maior].minuto &&
            horas[i].segundo > horas[maior].segundo) 
            {
                maior = i;
            }
    }

    printf("\nMaior hora: %02d:%02d:%02d\n",
        horas[maior].hora,
        horas[maior].minuto,
        horas[maior].segundo);

    return 0;
}