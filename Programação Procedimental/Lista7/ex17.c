#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float maior, menor, altura, area;
    printf("Digite a medida da base maior, menor, e a altura respectivamente para que seja calculada a area do trapezio: \n");
    scanf("%f %f %f", &maior, &menor, &altura);
    if (maior <= 0 || menor <= 0 || altura <=0)
    {
        printf("As medidas sao invalidas");
    }
    else{
        area = ((maior + menor) * altura) / 2;
        printf("A area do trapezio eh: %f", area);
    }
    return 0;
}

    