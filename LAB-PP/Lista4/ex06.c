#include <stdio.h>


int main(){
    int a, b;
    int *a1 = &a, *b1 = &b;

    printf("Digite dois numero inteiros: ");
    scanf("%d%d" , &a, &b);


    printf("a = %d\nb = %d\n" , a, b);
    printf("Soma dos numeros = %d\n" , *a1 + *b1);
    printf("Subtracao dos numeros = %d\n" , *a1 - *b1);
    printf("Multiplicacao dos numeros = %d\n" , *a1 * *b1);
    printf("Divisao dos numeros = %d\n" , *a1 / *b1);

    return 0;
}