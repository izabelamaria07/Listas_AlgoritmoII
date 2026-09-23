#include <stdio.h>

void verificarTriangulo(double x, double y, double z) 
{
    if (x < y + z && y < x + z && z < x + y) 
    {
        if (x == y && y == z) 
        {
            printf("Triangulo Equilatero\n");
        } 
        else if (x == y || y == z || x == z) 
        {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    } 
    else 
    {
        printf("Os valores nao podem formar um triangulo.\n");
    }
}

int main() 
{
    double lado1, lado2, lado3;

    printf("Digite os tres lados do triangulo:\n");
    printf("lado 1: ");
    scanf("%lf", &lado1);
    printf("lado 2: ");
    scanf("%lf", &lado2);
    printf("lado 3: ");
    scanf("%lf", &lado3);

    verificarTriangulo(lado1, lado2, lado3);

    return 0;
}