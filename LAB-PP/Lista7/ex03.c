#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x, y;
    printf("Digite um numero positivo qualquer para que seja calculada sua raiz, caso contrario, sera calculado a sua potencia ao quadrado: ");
    scanf("%f", &x);
    if(x >= 0){
        y = sqrt(x);
        printf("A raiz quadrada desse numero eh: %f", y);
    }
    else{
        y = pow(x,2);
        printf("O numero ao quadrado equivale a: %f", y);
    }
    return 0;
}