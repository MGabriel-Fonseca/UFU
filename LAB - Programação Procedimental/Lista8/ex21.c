#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int a, b;
    int contPrimos = 0;
    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("Informe o valor de b: ");
    scanf("%d", &b);
    for (int i = a; i <= b; i++) {
        if (ehPrimo(i)) {
            contPrimos++;
        }
    }
    printf("Existem %d numeros primos entre %d e %d\n", contPrimos, a, b);
    return 0;
}