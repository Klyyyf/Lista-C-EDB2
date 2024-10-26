#include <stdio.h>

void lerNumeros(int nums[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Digite um numero: ");
        scanf("%d", &nums[i]);
    }
}

int calcSoma(int nums[], int tam) {
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += nums[i];
    }
    return soma;
}

int main() {
    int numeros[5];
    int tamanho = 5;

    lerNumeros(numeros, tamanho);
    int soma = calcSoma(numeros, tamanho);

    printf("A soma dos elementos do vetor e: %d", soma);
    return 0;
}