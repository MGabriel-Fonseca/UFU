#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float custoF, consumidor;
    printf("Digite o custo de fabrica do carro novo para que seja calculado o preco para o consumidor: ");
    scanf("%f", &custoF);
    if (custoF < 12000)
    {
        consumidor = custoF * 1.05;
        printf("O valor do veiculo para o consumidor eh %f", consumidor);
    }
    else if (custoF <= 25000 && custoF >= 12000)
    {
        consumidor = custoF + (custoF * 0.1) + (custoF * 0.15);
        printf("O valor do veiculo para o consumidor eh %f", consumidor);
    }
    else if (custoF > 25000)
    {
        consumidor = custoF + (custoF * 0.15) + (custoF * 0.2);
        printf("O valor do veiculo para o consumidor eh %f", consumidor);
    }
    else{
        printf("Valor invalido");
    }
    return 0;
}
    