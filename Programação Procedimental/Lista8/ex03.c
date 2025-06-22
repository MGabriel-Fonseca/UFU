#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 11;
    do{
        num = num - 1;
        printf("%d\n", num);
    } while (num > 0);
    printf("FIM");

    return 0;
}