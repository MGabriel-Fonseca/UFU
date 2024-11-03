#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1, mult1;
    printf("Aqui estao os 5 primeiros multiplos de 3: ");
    do{
        mult1 = num * 3;
        printf("%d ", mult1);
        num = num + 1;
    }
    while (num <= 5);
    return 0;
}