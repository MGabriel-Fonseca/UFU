#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float nota1, nota2, nota3, media;
    printf("Digite o valor das notas das suas 3 provas, onde a terceira nota tem peso 2: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media = (nota1 + nota2 + (2 * nota3)) / 4;
    printf("Sua media eh: %f\n", media);
    if (media >= 60)
    {
        printf("Parabens, voce foi aprovado\n");
    }
    else{
        printf("Voce foi reporvado\n");
    }
    return 0;
}