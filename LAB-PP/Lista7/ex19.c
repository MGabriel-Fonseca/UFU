#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x;
    printf("Digite um numero inteiro para que seja analisado se ele eh divisil por 3 ou por 5 mas nao pelos dois: ");
    scanf("%d", &x);
    if ((x % 3 == 0) && (x % 5 ==0)){
        printf("O numero eh divisivel por 3 e por 5");
    }
    else if (x % 5 == 0)
    {
        printf("O numero eh divisivel por 5, mas nao por 3");
    }
    else if (x % 3 == 0)
    {
        printf("O numero eh divisivel por 3, mas nao por 5");
    }
    else{
        printf("O numero nao eh divisivel por 3 nem por 5");
    }
    return 0;
}

    
    
    