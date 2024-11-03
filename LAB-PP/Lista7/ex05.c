#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x;
    printf("Digite um valor para que seja dito se ele eh par ou impar: ");
    scanf("%d", &x);
    if (x % 2 == 0)
        printf("O numero digitado eh par");
    else
        printf("O numero digitado eh impar");

    return 0;
}