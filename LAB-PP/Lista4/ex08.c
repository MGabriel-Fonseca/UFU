#include <stdio.h>

int main(){
    int vet[6], *p = &vet[0];

    for(int i = 0; i < 6; i++){
        printf("Digite %d valor:" ,  i +1);
        scanf("%d" , &vet[i]);
        printf("\n");
    }
    for(int i = 0; i < 6; i++ ){
        printf("Valor: %d Endereco: %p" , *p, p);
        p++;
        printf("\n");
    }
    return 0;
}