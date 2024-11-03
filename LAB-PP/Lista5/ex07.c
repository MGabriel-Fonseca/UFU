#include <stdio.h>

int main() {
    int vet[10];
    int *p = vet;
    int *min = vet;
    int *max = vet;

    printf("Digite os 10 elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", p);
        p++;
    }

    p = vet + 1;

    while (p < vet + 10) {
        if (*p < *min) {
            min = p;
        }

        if (*p > *max) {
            max = p;
        }

        p++;
    }

    printf("O menor elemento do vetor é: %d\n", *min);
    printf("O maior elemento do vetor é: %d\n", *max);

    return 0;
}
