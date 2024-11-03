#include <stdio.h>


int main(){
    int int1, int2;
    int *p1;
    int *p2;

    p1 = &int1;
    p2 = &int2;

    if (p1 > p2)
    {
        printf("O maior endereco eh: %p", p1);
    }
    else{
        printf("O maior endereco eh: %p", p2);
    }
    return 0;
    
}