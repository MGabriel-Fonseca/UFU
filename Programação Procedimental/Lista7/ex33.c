#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float preco1, preco2;
    printf("Digite o preco antigo do produto para que seja calculado o novo preco: ");
    scanf("%f", &preco1);
    if (preco1 > 0 && preco1 < 50)
    {
        preco2 = preco1 * 1.05;
        printf("O novo preco eh de %f reais\n", preco2);
    }
    else if (preco1 >= 50 && preco1 <= 100)
    {
        preco2 = preco1 * 1.1;
        printf("O novo preco eh de %f reais\n", preco2);
    }
    else if (preco1 > 100)
    {
        preco2 = preco1 * 1.15;
        printf("O novo preco eh de %f reais\n", preco2);
    }
    else{
        printf("Valor invalido\n");
    }
    if (preco2 < 80)
    {
        printf("O produto esta barato\n");
    }
    else if (preco2 >= 80 && preco2 <= 120)
    {
        printf("O produto esta normal\n");
    }
    else if (preco2 > 120 && preco2 <= 200)
    {
        printf("O produto esta caro\n");
    }
    else if (preco2 > 200)
    {
        printf("O produto esta muito caro\n");
    }
    return 0;
}
    