#include <stdio.h>
#include <math.h>
int main() {
    float num;
    do {
        printf("Digite um numero: ");
        scanf("%f", &num);
        if (num > 0) {
            printf("Quadrado: %.2f\n", pow(num, 2));
            printf("Cubo: %.2f\n", pow(num, 3));
            printf("Raiz quadrada: %.2f\n", sqrt(num));
        }
    } while (num > 0);
    return 0;
}