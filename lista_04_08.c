#include <stdio.h>

struct Data 
{
    int dia;
    int mes;
    int ano;
};

int bissexto(int ano) 
{
    if (ano % 400 == 0) 
    {
        return 1;
    }
    if (ano % 100 == 0) 
    {
        return 0;
    }
    if (ano % 4 == 0) 
    {
        return 1;
    }
    return 0;
}

int data_valida(struct Data data) 
{
    if (data.ano < 1 || data.mes < 1 || data.mes > 12 || data.dia < 1) 
    {
        return 0;
    }

    int dias_no_mes;

    if (data.mes == 2) 
    {
        if (bissexto(data.ano)) 
        {
            dias_no_mes = 29;
        } 
        else 
        {
            dias_no_mes = 28;
        }
    } 
    else if (data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11) 
    {
        dias_no_mes = 30;
    } 
    else 
    {
        dias_no_mes = 31;
    }

    if (data.dia > dias_no_mes) 
    {
        return 0;
    }

    return 1;
}

int dias_ate_data(struct Data data) 
{
    int dias = 0;
    int i;
    for (i = 1; i < data.ano; i++) 
    {
        if (bissexto(i)) 
        {
            dias = dias + 366;
        }
        else 
        {
            dias = dias + 365;
        }
    }
    for (i = 1; i < data.mes; i++) 
    {
        if (i == 2) 
        {
            dias = dias + 28;
            if (bissexto(data.ano)) 
            {
                dias = dias + 1;
            }
        } 
        else if (i == 4 || i == 6 || i == 9 || i == 11) 
        {
            dias = dias + 30;
        } 
        else 
        {
            dias = dias + 31;
        }
    }
    dias = dias + data.dia;
    return dias;
}

int main() 
{
    struct Data data1;
    struct Data data2;
    int dias1;
    int dias2;
    int diferenca;

    printf("Digite a primeira data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
    if (!data_valida(data1)) 
    {
        printf("Erro: A primeira data digitada e invalida!\n");
        return 1;
    }

    printf("Digite a segunda data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);
    if (!data_valida(data2)) 
    {
        printf("Erro: A segunda data digitada e invalida!\n");
        return 1;
    }

    dias1 = dias_ate_data(data1);
    dias2 = dias_ate_data(data2);
    diferenca = dias1 - dias2;

    if (diferenca < 0) 
    {
        diferenca = diferenca * -1;
    }

    printf("\nDias decorridos: %d\n", diferenca);

    return 0;
}