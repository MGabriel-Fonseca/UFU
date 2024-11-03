#include <stdio.h>

int main() {
    float salario = 2000;
    float aumento = 0.015; 
    int ano = 1997; 
    while (ano <= 2023) {
        salario = salario + (salario * aumento);
        aumento = aumento * 2;
        ano++;
    }
    printf("O salario atual do funcionario eh: %.2f\n", salario);
    return 0;
}
