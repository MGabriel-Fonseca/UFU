#include <stdio.h>

int main() {
    int quantidade = 50, soma = 0, i;
    for (i = 2; i <= 2 * quantidade; i += 2){
        soma += i;
    }
    printf("A soma dos 50 primeiros numeros pares eh: %d", soma);
    return 0;
}