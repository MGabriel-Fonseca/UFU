#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, c, delta, resultadoP, resultadoN;
    printf("Digite o valor de a, b e c para que seja feita uma equacao do 2o grau: ");
    scanf("%f %f %f", &a, &b, &c);
    delta = (b * b) - (4 * a * c);
    if (a == 0)
    {
        printf("Nao eh equacao do segundo grau, o valor de A deve ser diferente de 0");
        return 0;
    }
    if (delta < 0)
    {
        printf("Nao existe raiz");
    }
    else if (delta == 0)
    {
        resultadoP = ((-1) * b + sqrt(delta)) / (2 * a);
        printf("Raiz unica, o resultado eh %f", resultadoP);
    }
    else{
        resultadoP = ((-1) * b + sqrt(delta)) / (2 * a);
        resultadoN = ((-1) * b - sqrt(delta)) / (2 * a);
        printf("Duas raizes, os resultados sao %f e %f", resultadoN, resultadoP);
    }
    return 0;
}
