#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i, j, cont;
    float soma=2;
    for(i=3;i <= 2000000;i+=2){
        cont = 2;
        for(j=3;j <= sqrt(i);j+=2){
            if(i % j == 0){
                cont+= 2;
                break;
            }
        }
        if(cont==2){
            soma+=i;
        }
    }
    printf("A soma eh : %.0f ",soma);
    return 0;
}