#include <stdio.h>


int main(){
    int int1, int2;
    int *p1;
    int *p2;

    printf("Digite 2 valores para que seja mostrado o conteudo do maior endereco: ");
    scanf("%d %d", &int1, &int2);

    p1 = &int1;
    p2 = &int2;

    if (p1 > p2)
    {
        printf("O conteudo do maior endereco eh: %d", int1);
    }
    else{
        printf("O conteudo do maior endereco eh: %d", int2);
    }
    return 0;
    
}