#include <stdio.h>

struct dados {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    struct dados pessoa1;

    printf("Digite o nome: ");
    fgets(pessoa1.nome, 50, stdin);

    printf("\nDigite a idade: ");
    scanf("%d", &pessoa1.idade);
    getchar();

    printf("\nDigite o endereco: ");
    fgets(pessoa1.endereco, 100, stdin);

    printf("\nDados pessoais: \n");
    printf("\nNome: %s", pessoa1.nome);
    printf("\nIdade: %d", pessoa1.idade);
    printf("\nEndereco: %s", pessoa1.endereco);

    return 0;
}
