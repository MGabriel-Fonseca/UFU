#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int idade, tempo;
    printf("Digite sua idade em anos: ");
    scanf("%d", &idade);
    printf("Digite o tempo de servico prestado, em anos: ");
    scanf("%d", &tempo);
    if ((idade >= 60 && tempo >=  25) || (tempo >= 30) || idade >=65){
        printf("Voce pode se apostentar");
    }
    else{
        printf("Voce ainda nao pode se apostentar");
    }
    return 0;
}