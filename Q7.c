#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};


int main() {
    struct Pessoa pessoa;

    printf("Digite o nome: ");
    fgets(pessoa.nome, 50, stdin);
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digite a altura (em metros): ");
    scanf("%f", &pessoa.altura);

    printf("\nDados da pessoa:\n");
    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Altura: %.2f metros\n", pessoa.altura);

    return 0;
}
