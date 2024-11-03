#include <stdio.h>

int main(){
    int i;
    float vet[10];
    float *p = 0;
    for (i = 0; i < 10; i++)
    {
        p = &vet[i];
        printf("%p\n", p);
    }
    return 0;

}