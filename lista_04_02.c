#include <stdio.h>
#include <math.h>

struct Ponto 
{
    float x;
    float y;
};

struct Retangulo 
{
    struct Ponto superior_esquerdo;
    struct Ponto inferior_direito;
};

int main() 
{
    struct Retangulo retangulo;

    float largura;
    float altura;
    float area;
    float perimetro;
    float diagonal;

    printf("Digite X e Y do ponto superior esquerdo: ");
    scanf("%f %f", &retangulo.superior_esquerdo.x,
        &retangulo.superior_esquerdo.y);

    printf("Digite X e Y do ponto inferior direito: ");
    scanf("%f %f", &retangulo.inferior_direito.x,
        &retangulo.inferior_direito.y);

    largura = fabs(retangulo.inferior_direito.x - retangulo.superior_esquerdo.x);
    altura = fabs(retangulo.superior_esquerdo.y - retangulo.inferior_direito.y);

    area = largura * altura;
    perimetro = 2 * (largura + altura);
    diagonal = sqrt(largura * largura + altura * altura);

    printf("\nArea: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}