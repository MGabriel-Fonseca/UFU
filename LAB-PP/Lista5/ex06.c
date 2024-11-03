#include <stdio.h>

int main() {
    int vet[5];
    int valor;

    printf("Digite o valor para preencher o vetor: ");
    scanf("%d", &valor);

    int *p = vet;
    int *fim = vet + 5;

    while (p < fim) {
        *p = valor;
        p++;
    }

    printf("Vetor preenchido com o valor %d:\n", valor);
    p = vet;
    while (p < fim) {
        printf("%d ", *p);
        p++;
    }
    printf("\n");

    return 0;
}
