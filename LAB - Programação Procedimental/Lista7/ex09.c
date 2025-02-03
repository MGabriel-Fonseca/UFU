#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x, y;
    printf("Digite o valor do seu salario e a prestacao do emprestimo: ");
    scanf("%f %f", &x, &y);
    if(y > 0.2 * x)
        printf("Emprestimo nao concebido");
    else
        printf("Emprestimo concebido");
    return 0;
}
