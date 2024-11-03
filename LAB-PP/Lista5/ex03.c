#include <stdio.h>

int main(){
    int i, vet[5], *p;
    for(i = 0; i < 5; i++){
        printf("Digite o valor da posicao %d do array: ", i);
        scanf("%d", &vet[i]);
        p = &vet[i]; 
        *p = 2 * (*p); 
        printf("O dobro do valor da posicao %d eh: %d\n", i, *p);
    }

    return 0;
}
