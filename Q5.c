#include <stdio.h>

void modificarNums(int *n1, int *n2) {
    *n1 = *n1 + *n1;
    *n2 = *n2 + *n2;
}

int main() {
    int n1, n2;
    printf("Informe dois numeros: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("Antes da modificacao: n1 = %d, n2 = %d\n", n1, n2);
    modificarNums(&n1, &n2);
    printf("Depois da modificacao: n1 = %d, n2 = %d\n", n1, n2);
    return 0;
}