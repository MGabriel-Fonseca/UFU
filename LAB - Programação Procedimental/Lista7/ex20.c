#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Digite as 3 medidas de um triangulo para que ele seja classificado: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a){
        if (a == b && b == c){
            printf("O triangulo eh equilatero");
        }
        else if ((a == b) || (a == c) || (b == c)){
        printf("O triangulo eh isoceles");
        }
        else{
            printf("O triangulo eh escaleno");
        }
    }
    else{
        printf("Com as medidas fornecidas nao eh possivel formar um triangulo");
    }
    return 0;
}

    
    