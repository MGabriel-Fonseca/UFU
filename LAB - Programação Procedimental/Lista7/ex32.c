#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float preco;
    int quantidade, codigo;
    printf("Digite o codigo do produto a ser comprado: ");
    scanf("%d", &codigo);
    switch (codigo)
    {
    case 100:
        printf("Quantos Cachorro quente voce deseja comprar ?\n");
        scanf("%d", &quantidade);
        preco = 1.20 * quantidade;
        printf("O total ficara em: %f reais", preco);
        break;
    case 101:
        printf("Quantos Bauru simples voce deseja comprar ?\n");
        scanf("%d", &quantidade);
        preco = 1.30 * quantidade;
        printf("O total ficara em: %f reais", preco);
        break;
    case 102: 
        printf("Quantos Bauru com ovo voce deseja comprar ?\n");
        scanf("%d", &quantidade);
        preco = 1.50 * quantidade;
        printf("O total ficara em: %f reais", preco);
        break;
    case 103:
        printf("Quantos hamburgueres voce deseja comprar ?\n");
        scanf("%d", &quantidade);
        preco = 1.20 * quantidade;
        printf("O total ficara em: %f reais", preco);
        break;
    case 104:
        printf("Quantos cheeseburgueres voce deseja comprar ?\n");
        scanf("%d", &quantidade);
        preco = 1.70 * quantidade;
        printf("O total ficara em: %f reais", preco);
        break;
    case 105:
        printf("Quantos sucos voce deseja comprar ?\n");
        scanf("%d", &quantidade);
        preco = 2.20 * quantidade;
        printf("O total ficara em: %f reais", preco);
        break;
    case 106:
        printf("Quantos refrigerantes voce deseja comprar ?\n");
        scanf("%d", &quantidade);
        preco = 1 * quantidade;
        printf("O total ficara em: %f reais", preco);
        break;
        printf("O total ficara em: %f reais", preco);
    default:
        printf("Codigo invalido");
        break;
    }
    return 0;
}