#include <stdio.h>

struct Retangulo {
    float largura;
    float altura;
};

float calcularArea(struct Retangulo *retangulo) {
    return retangulo->largura * retangulo->altura;
}

int main() {
    struct Retangulo retangulo;

    printf("Digite a altura do retangulo: ");
    scanf("%f", &retangulo.altura);
    printf("Digite a largura do retangulo: ");
    scanf("%f", &retangulo.largura);

    float area = calcularArea(&retangulo);

    printf("A area do retangulo e: %.2f\n", area);
    return 0;
}
