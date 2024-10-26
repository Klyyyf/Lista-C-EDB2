#include <stdio.h>

#define tamanho 3

void lerNumeros(int mat[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

int somaDiagonal(int mat[tamanho][tamanho]) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += mat[i][i];
    }
    return soma;
}

int main() {
    int matriz[tamanho][tamanho];
    lerNumeros(matriz);

    int soma = somaDiagonal(matriz);

    printf("A soma dos elementos da diagonal principal da matriz e: %d", soma);
    return 0;
}