#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int ano;
    printf("Digite o ano para que seja dito se ele eh bissexto ou nao: ");
    scanf("%d", &ano);
    if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
    {
        printf("O ano eh bissexto");
    }
    else{
        printf("O ano nao eh bissexto");
    }
    return 0;
}