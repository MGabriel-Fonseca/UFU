#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int operacao, valor1, valor2, resultado;
    do
    {
        printf("Digite 1 para escolher adicao\n");
        printf("Digite 2 para escolher subtracao\n");
        printf("Digite 3 para escolher multiplicacao\n");
        printf("Digite 4 para escolher divisao\n");
        scanf("%d", &operacao);
    } while (operacao < 1 || operacao > 4);
    switch (operacao)
    {
    case 1:
        printf("Digite os 2 valores para que seja feita a soma: \n");
        scanf("%d %d", &valor1, &valor2);
        resultado = valor1 + valor2;
        printf("O resultado da adicao eh: %d", resultado);
        break;
    case 2:
        printf("Digite os 2 valores para que seja feita a subtracao: \n");
        scanf("%d %d", &valor1, &valor2);
        resultado = valor1 - valor2;
        printf("O resultado da subtracao eh: %d\n", resultado);
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
        resultado = valor1 / valor2;
        printf("O resultado da divisao eh: %d\n", resultado);
        break;
    }
    return 0;
}

    