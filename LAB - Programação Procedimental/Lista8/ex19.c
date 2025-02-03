#include <stdio.h>

int main() {
    int valor_saque, resto;
    int notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, notas_1;
    printf("Digite o valor do saque: ");
    scanf("%d", &valor_saque);
    notas_100 = valor_saque / 100;
    resto = valor_saque % 100;
    notas_50 = resto / 50;
    resto = resto % 50;
    notas_20 = resto / 20;
    resto = resto % 20;
    notas_10 = resto / 10;
    resto = resto % 10;
    notas_5 = resto / 5;
    resto = resto % 5;
    notas_2 = resto / 2;
    notas_1 = resto % 2;
    printf("Notas de 100: %d\n", notas_100);
    printf("Notas de 50: %d\n", notas_50);
    printf("Notas de 20: %d\n", notas_20);
    printf("Notas de 10: %d\n", notas_10);
    printf("Notas de 5: %d\n", notas_5);
    printf("Notas de 2: %d\n", notas_2);
    printf("Notas de 1: %d\n", notas_1);
    return 0;
}