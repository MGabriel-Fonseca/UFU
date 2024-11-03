#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float valor, valorf;
    int estado;
    printf("Digite valor do produto o qual deseja comprar: ");
    scanf("%f", &valor);
    do
    {
        printf("Digite um numero correspondente ao estado para qual o produto seja enviado, onde o imposto sobre ele ja estara calculado:\n");
        printf("1 para o estado de MG\n");
        printf("2 para o estado de SP\n");
        printf("3 para o estado do RJ\n");
        printf("4 para o estado de MS\n");
        scanf("%d", &estado);
    } while (estado < 1 || estado > 4);
    
    switch (estado){
    case 1:
        valorf = valor * 1.07;
        printf("O valor do produto para o estado de MG eh de %f", valorf);
        break;
    case 2:
        valorf = valor * 1.12;
        printf("O valor do produto para o estado de SP eh de %f", valorf);
        break;
    case 3:
        valorf = valor * 1.15;
        printf("O valor do produto para o estado do RJ eh de %f", valorf);
        break;
    case 4:
        valorf = valor * 1.08;
        printf("O valor do produto para o estado de MS eh de %f", valorf);
        break;
    default:
        printf("O estado inserido eh invalido");
    }
    return 0;
}
