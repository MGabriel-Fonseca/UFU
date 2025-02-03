#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float venda, com;
    printf("Digite o valor da venda mensal do vendedor para mostrar o valor que ele recebera de comissao: ");
    scanf("%f", &venda);
    if (venda >= 100000)
    {
        com = 700 + (venda * 0.16);
        printf("O valor da comissao sera %f", com);
    }
    else if (venda >= 80000 && venda < 100000)
    {
        com = 650 + (venda * 0.14);
        printf("O valor da comissao sera %f", com);
    }
    else if (venda < 80000 && venda >= 60000)
    {
        com = 600 + (venda * 0.14);
        printf("O valor da comissao sera %f", com);
    }
    else if (venda < 60000 && venda >= 40000)
    {
        com = 550 + (venda * 0.14);
        printf("O valor da comissao sera %f", com);
    }
    else if (venda < 40000 && venda >= 20000)
    {
        com = 500 + (venda * 0.14);
        printf("O valor da comissao sera %f", com);
    }
    else if (venda < 20000)
    {
        com = 400 + (venda * 0.14);
        printf("O valor da comissao sera %f", com);
    }
    else if (venda < 0)
    {
        printf("Valor invalido");
    }
    return 0;
}
    
    