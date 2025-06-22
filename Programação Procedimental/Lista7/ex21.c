#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int operacao, valor1, valor2, resultado;
    do{
        printf("Digite 1 para fazer a soma de 2 numeros\n");
        printf("Digite 2 para fazer a diferenca de 2 numeros\n");
        printf("Digite 3 para fazer o produto entre 2 numeros\n");
        printf("Digite 4 para fazer a divisao entre 2 numeros\n");
        scanf("%d", &operacao);
    } while (operacao < 1 || operacao > 4);
    switch (operacao){
    case 1:
        printf("Digite os 2 valores para que seja feita a soma: \n");
        scanf("%d %d", &valor1, &valor2);
        resultado = valor1 + valor2;
        printf("O resultado da adicao eh: %d", resultado);
        break;
    case 2:
        printf("Digite os 2 valores para que seja feita a subtracao: \n");
        scanf("%d %d", &valor1, &valor2);
        if (valor1 > valor2){
            resultado = valor1 - valor2;
            printf("O resultado da subtracao eh: %d\n", resultado);
        }
        else{
            resultado = valor2 - valor1;
            printf("O resultado da subtracao eh: %d\n", resultado);
        }
        break;
    case 3:
        printf("Digite os 2 valores para que seja feita a multiplicacao: \n");
        scanf("%d %d", &valor1, &valor2);
        resultado = valor1 * valor2;
        printf("O resultado da multiplicacao eh: %d\n", resultado);
        break;
    case 4:
        printf("Digite os 2 valores para que seja feita a divisao: \n");
        scanf("%d %d", &valor1, &valor2);
        if (valor2 == 0){
            printf("O denominador nao pode ser 0");
        }
        else{
        resultado = valor1 / valor2;
        printf("O resultado da divisao eh: %d\n", resultado);
        }
        break;
    }
    return 0;
}