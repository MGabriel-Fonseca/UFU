#include <stdio.h>

int main() {
    int num, i, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    printf("A soma dos divisores eh: %d\n", soma);
    return 0;
}