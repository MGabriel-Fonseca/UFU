#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int numero, soma = 0, algarismo;

    printf("Digite um número inteiro maior do que zero para que seja mostrada a soma de seus algarismos: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Número inválido");
        return 0;
    }

    while (numero > 0) {
        algarismo = numero % 10;
        soma += algarismo;
        numero /= 10;
    }

    printf("A soma dos algarismos é: %d", soma);

    return 0;
}