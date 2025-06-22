#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, num = 0, soma = 0;
    float media;
    printf("Digite 10 valores para que seja calculada a media entre eles: ");
    do{
        scanf("%d", &a);
        soma += a;
        num++;
    } while (num < 10);
    media = soma / 10;
    printf("%f", media);
    return 0;
} 
