#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x;
    float y;
    printf("Digite um valor inteiro e positivo para que seja calculado o logaritimo desse numero: ");
    scanf("%d", &x);
    if (x > 0) {
        y = log10(x);
        printf("O valor do logaritmo eh: %f", y);
    }
    else{
        printf("Numero invalido");
    }
    return 0;
}
    