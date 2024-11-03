#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;
    do {
        printf("Menu de opcoes:\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Saida\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                // adição
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("O resultado da adicao eh: %.2f\n", resultado);
                break;
            case 2:
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 - num2;
                printf("O resultado da subtracao eh: %.2f\n", resultado);
                break;
            case 3:
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 * num2;
                printf("O resultado da multiplicacao eh: %.2f\n", resultado);
                break;
            case 4:
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                if(num2 == 0) {
                    printf("Nao eh possivel dividir por zero.\n");
                } else {
                    resultado = num1 / num2;
                    printf("O resultado da divisao eh: %.2f\n", resultado);
                }
                break;
            case 5:
                printf("Fim das operacoes\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while(opcao != 5);
    return 0;
}