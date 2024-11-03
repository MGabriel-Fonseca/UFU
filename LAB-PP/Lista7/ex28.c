#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int operacao;
    float x, y, z, r;
     do
    {
        printf("Digite um numero correspondente ao tipo de media a qual a conta sera efetuada:\n");
        printf("Digite 1 para escolher gemoetrica\n");
        printf("Digite 2 para escolher ponderada\n");
        printf("Digite 3 para escolher harmonica\n");
        printf("Digite 4 para escolher aritmetica\n");
        scanf("%d", &operacao);
    } while (operacao < 1 || operacao > 4);
    printf("Digite 3 valores para que seja efetuada a media que voce escolheu: ");
    scanf("%f %f %f", &x, &y, &z);
    if (operacao == 1)
    {
        r = cbrt(x * y * z);
        printf("O resultado da media geometrica eh %f", r);
    }
    else if (operacao == 2)
    {
        r = (x + 2*y + 3*z) / 6;
        printf("O resultado da media ponderada eh %f", r);
    }
    else if (operacao == 3)
    {
        r = 3 / ((1/x) + (1/y) + (1/z));
        printf("O resultado da media harmoncia eh %f", r);
    }
    else{
        r = (x + y + z) / 3;
        printf("O resultado da media aritmetica eh %f", r);
    }
    return 0;
}
    
    