#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    do{
        num = num + 1000;
        printf("%d\n", num);
    } while (num < 100000);
    printf("FIM");

    return 0;
}