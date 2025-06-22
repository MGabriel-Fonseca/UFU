#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um valor N para que seja mostrado os numeros naturais de 0 ate N em ordem crescente: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("%d ", i);
    }
    return 0;
}