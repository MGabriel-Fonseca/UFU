#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;
    printf("Digite o valor de 2 numeros para que seja mostrado o maior deles: ");
    scanf("%d %d", &x, &y);
    if(x > y)
        printf("%d", x);
    else
        printf("%d", y);
    return 0;
}