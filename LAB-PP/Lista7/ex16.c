#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int mes;
    printf("Digite um numero de 1 a 12 para que seja atribuido a um mes do ano: \n");
    scanf("%d", &mes);
    switch (mes){
    case 1:
        printf("O mes do ano eh janeiro\n");
        break;
    case 2:
        printf("O mes do ano eh fevereiro \n");
        break;
    case 3:
        printf("O mes do ano eh marco\n");
        break;
    case 4:
        printf("O mes do ano eh abril\n");
        break;
    case 5: 
        printf("O mes do ano eh maio\n");
        break;
    case 6:
        printf("O mes do ano eh junho\n");
        break;
    case 7:
        printf("O mes do ano eh julho\n");
        break;
    case 8:
        printf("O mes do ano eh agosto\n");
        break;
    case 9:
        printf("O mes do ano eh setembro\n");
        break;
    case 10:
        printf("O mes do ano eh outubro\n");
        break;
    case 11:
        printf("O mes do ano eh novembro\n");
        break;
    case 12:
        printf("O mes do ano eh dezembro\n");
        break;
    
    default:
        printf("O valor digitado eh invalido");
        break;
    }
    return 0;
}