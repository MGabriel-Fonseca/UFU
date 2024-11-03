#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int dia;
    printf("Digite um numero de 1 a 7 para que seja atribuido a um dia da semana: \n");
    scanf("%d", &dia);
    switch (dia){
    case 1:
        printf("O dia da semana eh domingo\n");
        break;
    case 2:
        printf("O dia da semana eh segunda\n");
        break;
    case 3:
        printf("O dia da semana eh terca\n");
        break;
    case 4:
        printf("O dia da semana eh quarta\n");
        break;
    case 5: 
        printf("O dia da semana eh quinta\n");
        break;
    case 6:
        printf("O dia da semana eh sexta\n");
        break;
    case 7:
        printf("O dia da semana eh sabado\n");
    default:
        printf("O valor digitado eh invalido");
        break;
    }
    return 0;
}
    