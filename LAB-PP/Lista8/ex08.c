#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, num = 0, b = 0;
    printf("Digite 10 valores para que seja mostrado o maior entre eles: ");
    do{
        scanf("%d", &a);
        num++;
        if(a > b){
            b = a;
        }
    } while (num < 10);
    printf("O maior valor entre os 10 eh: %d", b);
    return 0;
}