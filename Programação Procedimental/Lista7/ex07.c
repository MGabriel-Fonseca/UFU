#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, y;
    printf("Digite 2 valores para que seja dito qual eh maior entre eles: ");
    scanf("%d %d", &x, &y);
    if(x > y){
        printf("O maior numero eh: %d", x);
    }
    else if (y > x){
        printf("O maior numero eh: %d", y);
    }
    else {
        printf("Os dois numeros sao iguais");
    }
    return 0;
}