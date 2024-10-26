#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};


int main() {
    struct Pessoa pessoa;
    FILE *arquivo;

    printf("Digite o nome: ");
    fgets(pessoa.nome, 50, stdin);
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digite a altura (em metros): ");
    scanf("%f", &pessoa.altura);

    arquivo = fopen("dados2.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo.");
        return 1;
    }
    

    fprintf(arquivo, "%s", pessoa.nome);
    fprintf(arquivo, "%d\n", pessoa.idade);
    fprintf(arquivo, "%.2f", pessoa.altura);

    fclose(arquivo);

    printf("Dados gravados com sucesso!");

    return 0;
}
