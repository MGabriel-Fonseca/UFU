#include <stdio.h>

int main() {
    int n, i;
    
    printf("Digite um numero inteiro para que seja mostrado a quantidade de numeros impares: ");
    scanf("%d", &n);
    printf("Os primeiros %d numeros impares sao: ", n);
    for (i = 1; i <= 2 * n; i += 2) {
        printf("%d ", i);
    }
    return 0;
}
