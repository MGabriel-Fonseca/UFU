#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char sexo;
    float altura;
    float peso;
    printf("Digite seu sexo com 'M' ou 'F': ");
    scanf("%c", &sexo);
    switch (sexo)
    {
    case 'M':
    case 'm':
        printf("Digite sua altura em metros: ");
        scanf("%f", &altura);
        peso = 72.7 * altura - 58.0;
        printf("O peso ideal para sua altura e sexo eh: %f", peso);
        break;
    case 'F':
    case 'f':
        printf("Digite sua altura em metros: ");
        scanf("%f", &altura);
        peso = 62.1 * altura - 44.7;
        printf("O peso ideal para sua altura e sexo eh: %f", peso);
        break;
    
    default:
        printf("O caractere eh invalido");
        break;
    }
    return 0;
}