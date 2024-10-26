#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};


int main() {
    struct Pessoa pessoa;
    FILE *arquivo;

    arquivo = fopen("dados1.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo.");
        return 1;
    }

    fgets(pessoa.nome, 50, arquivo);
    fscanf(arquivo, "%d", &pessoa.idade);
    fscanf(arquivo, "%f", &pessoa.altura);

    printf("\nDados da pessoa:\n");
    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Altura: %.2f metros\n", pessoa.altura);

    fclose(arquivo);

    return 0;
}
