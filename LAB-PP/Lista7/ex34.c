#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float nota;
    int faltas;
    printf("Digite a nota do aluno e quantas faltas ele teve: ");
    scanf("%f %d", &nota, &faltas);
    if (nota >= 9 && nota <=10 && faltas < 20)
    {
        printf("Seu conceito eh A");
    }
    else if (nota >= 9 && nota <=10 && faltas > 20){
        printf("Seu conceito eh B");
    }
    else if (nota >= 7.5 && nota < 9 && faltas < 20)
    {
        printf("Seu conceito eh B");
    }
    else if (nota >= 7.5 && nota < 9 && faltas > 20)
    {
        printf("Seu conceito eh C");
    }
    else if (nota >= 5.0 && nota < 7.4 && faltas < 20)
    {
        printf("Seu conceito eh C");
    }
    else if (nota >= 5.0 && nota < 7.4 && faltas > 20)
    {
        printf("Seu conceito eh D");
    }
    else if (nota >= 4.0 && nota < 4.9 && faltas < 20)
    {
        printf("Seu conceito eh D");
    }
    else if (nota >= 4.0 && nota < 4.9 && faltas > 20)
    {
        printf("Seu conceito eh E");
    }
    else if (nota >= 0 && nota <= 3.9)
    {
        printf("Seu conceito eh E");
    }
    else{
        printf("Nota invalida");
    }
    return 0;
}
    