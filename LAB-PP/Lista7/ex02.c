#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x, y;
    printf("Digite um numero qualquer para que seja calculada sua raiz: ");
    scanf("%f", &x);
    if(x >= 0){
        y = sqrt(x);
        printf("%f", y);
    }
    else
        printf("Nao e possivel calcular a raiz");
    return 0;
}