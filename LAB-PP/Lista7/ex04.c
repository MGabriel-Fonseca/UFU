#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x, y, z;
    printf("Digite um numero positivo qualquer para que seja calculada sua raiz e a sua potencia ao quadrado: ");
    scanf("%f", &x);
    if(x >= 0){
        y = sqrt(x);
        z = pow(x,2);
        printf("A raiz quadrada desse numero eh: %f\n", y);
        printf("O numero elevado ao quadrado eh: %f\n", z);
    }
    else{
        printf("O numero nao eh positivo");
    }
    return 0;
}