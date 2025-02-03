#include <stdio.h>

int main() {
    int array[5];
    int i;

    printf("Digite os 5 elementos do veotr:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enderecos das posicoes cujos valores sao pares:\n");
    for (i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf("%p\n", &array[i]);
        }
    }

    return 0;
}
