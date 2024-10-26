#include <stdio.h>

void passagem(int *n1, int *n2) {
    *n1 = *n1 + *n2;
    *n2 = *n1 - *n2;
    *n1 = *n1 - *n2;
}

int main() {
    int n1, n2;

    printf("Informe dois numeros: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("Antes da troca: n1 = %d, n2 = %d\n", n1, n2);

    passagem(&n1, &n2);

    printf("Depois da tentativa de troca: n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}
