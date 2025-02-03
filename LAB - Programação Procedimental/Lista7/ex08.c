#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x, y;
    printf("Digite suas 2 notas: ");
    scanf("%f %f", &x, &y);
    if((x > 10.0) || (x < 0.0) || ((y > 10) || (y < 0.0))){
        printf("Uma de suas notas eh invalida");
    }
    else{
        printf("Suas notas sao %.1f %.1f", x, y);
    }
    return 0;
}