#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float lab, semestral, exame, media;
    printf("Digite sua nota do lab, da avaliacao semestral e do exame final, nesta ordem: \n");
    scanf("%f %f %f", &lab, &semestral, &exame);
    if ((lab > 10.0 || lab < 0) || (semestral > 10.0 || semestral < 0) || (exame > 10.0 || exame < 0)) {
        printf("Uma  ou mais de suas notas eh invalida\n");
        return 0;
    }
    media = ((2 * lab) + (3 * semestral) + (5 * exame)) / 10;
    printf("Sua media eh: %.1f\n", media);
    if (media >= 5.0) {
        printf("Parabens, voce foi aprovado\n");
    }
    else if ((media >= 3.0) && (media < 5.0)){
        printf("Calma, voce ainda tem chances. Sera necessaria a recuperacao\n");
    }
    else {
        printf("Voce esta reporvado\n");
    }
    return 0;
}

    
    
