#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int idade;
    printf("Digite a idade do nadador para mostrar sua categoria: ");
    scanf("%d", &idade);
    if (idade >= 5 && idade <=7)
    {
        printf("O nadador esta na categoria infantil A");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("O nadador esta na categoria infantil B");
    }
    else if (idade >=11 && idade <= 13)
    {
        printf("O nadador esta na categoria juvenil A");
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("O nadador esta na categoria juvenil B");
    }
    else if (idade >= 18)
    {
        printf("O nadador esta na categoria senior");
    }
    else{
        printf("Idade minima para competir eh 5 anos");
    }
    return 0;
}   