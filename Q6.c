#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros;
    int soma = 0;

    numeros = (int*) malloc(5 * sizeof(int));
    if (numeros == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("A soma dos numeros e: %d", soma);
    free(numeros);
    return 0;
}