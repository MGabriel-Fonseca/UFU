#include <stdio.h>

int main(){
    int A, *B= &A, **C= &B, ***D= &C;

    printf("Digite um numero: ");
    scanf("%d" , &A);

    printf("O numero eh: %d\n" , A);
    
    printf("Seu dobro eh: %d\n" , *(B) * 2);
    
    printf("Seu triplo eh: %d\n" , *(*C) *3);
    
    printf("Seu quadruplo eh: %d\n" , *(*(*D)) *4);
    return 0;
}