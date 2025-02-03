#include <stdio.h>

int main(){
    int A, B, soma;
    int *p1 = &A, *p2 = &B;

    printf("Digite os valores de A e de B: ");
    scanf("%d %d", &A, &B);

    *p1 = *(p1) * 2;
    *p2 = *(p2) * 2;
    soma = *(p1) + (*p2);

    printf("O valor da soma eh: %d", soma);
    return 0;
}