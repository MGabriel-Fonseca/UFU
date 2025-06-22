#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    do{
        num = num + 1;
        printf("%d ", num);
    } while (num < 100);
    printf("\n\n");
    num = 0;
    while (num < 100){
        num = num + 1;
        printf("%d ", num);
    }
    printf("\n\n");
    for(num = 1; num <= 100; num += 1){
        printf("%d ", num);
    }
    return 0;
}