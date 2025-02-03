#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, y, z;
    printf("Digite 2 valores para que seja dito qual eh maior, e seja mostrada a diferenca entre eles: ");
    scanf("%d %d", &x, &y);
    if (x > y){
        z = x - y;
        printf("O maior numero eh %d, e a diferenca do maior e o menor resulta em %d", x, z);
    }

    else{
        z = y - x;
        printf("O maior numero eh %d, e a diferenca do maior e o menor resulta em %d", y, z);
    }
    return 0;
}