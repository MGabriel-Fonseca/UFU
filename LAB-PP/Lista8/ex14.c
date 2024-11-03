#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, d1, d2;
    srand(time(NULL));
    printf("Digite a quantidade de lancamentos que sera feita: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;
        printf("Lancamento %d: d1 = %d, d2 = %d, ", i, d1, d2);
        if (d1 > d2) {
            printf("d1 > d2\n");
        } else if (d1 < d2) {
            printf("d1 < d2\n");
        } else {
            printf("d1 = d2\n");
        }
    }
    return 0;
}