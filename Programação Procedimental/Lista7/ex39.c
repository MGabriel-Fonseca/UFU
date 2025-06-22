#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float salario, tempoE, novo;
    printf("Digite seu salario e o tempo que voce trabalha na empresa para caluclar o reajuste salarial (em anos): ");
    scanf("%f %f", &salario, &tempoE);
    if (salario <= 500 && tempoE < 1)
    {
        novo = salario * 1.25;
        printf("O novo valor do seu salario eh: %f", novo);
    }
    else if (salario <= 1000 && tempoE <= 3 && tempoE >= 1)
    {
        novo = (salario * 1.20) + 100;
        printf("O novo valor do seu salario eh: %f", novo);
    }
    else if (salario <= 1500 && tempoE <= 6 && tempoE >= 4)
    {
        novo = (salario * 1.15) + 200;
        printf("O novo valor do seu salario eh: %f", novo);
    }
    else if (salario <= 2000 && tempoE <= 10 && tempoE >= 7)
    {
        novo = (salario * 1.10) + 300;
        printf("O novo valor do seu salario eh: %f", novo);
    }
    else if (salario > 2000 && tempoE > 10)
    {
        novo = salario + 500;
        printf("O novo valor do seu salario eh: %f", novo);
    }
    else{
        printf("Voce nao tem direito a nenhum aumento");
    }
    return 0;
}