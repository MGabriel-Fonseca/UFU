#include <stdio.h>
int main() {
    int n, num = 1, i, j;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}