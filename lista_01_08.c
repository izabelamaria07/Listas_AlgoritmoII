#include <stdio.h>

int somatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    printf("O somatório de 1 até %d é: %d\n", n, somatorio(n));
    return 0;
}