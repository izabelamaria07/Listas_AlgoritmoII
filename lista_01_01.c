#include <stdio.h>

float volume_esfera(float raio) 
{
    const float PI = 3.14159f;
    return (4.0f / 3.0f) * PI * raio * raio * raio;
}

int main() 
{
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    float volume = volume_esfera(raio);
    printf("O volume da esfera é: %.2f\n", volume);

    return 0;
}