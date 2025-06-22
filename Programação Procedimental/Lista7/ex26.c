#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float km, litros;
    printf("Digite a distancia percorrida e a quantidade de litros gasto por um carro: ");
    scanf("%f %f", &km, &litros);
    if (km / litros < 8)
    {
        printf("Venda o carro");
    }
    else if ((km / litros >= 8) && (km / litros <=14))
    {
        printf("Economico");
    }
    else{
        printf("Super economico");
    }
    return 0;
}
    