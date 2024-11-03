#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, num = 0, soma = 0;
    float media;
    printf("Digite 10 valores positivos para que seja calculada sua media: ");
    do{
        scanf("%d", &a);
        if(a < 0){
            continue;
            }
        soma += a;
        num++;
    } while (num < 10);
    media = soma / 10;
    printf("%f", media);
    return 0;
}