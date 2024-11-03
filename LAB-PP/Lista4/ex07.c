#include <stdio.h>


int main(){
    int a, b, c;
    int *a1 = &a, *b1 = &b, *c1 = &c;

    printf("Digite dois numero inteiros: ");
    scanf("%d%d%d" , &a, &b, &c);

    if(*a1 < *b1 && *a1 < *c1){
        printf("%d: %p\n" , *a1 , a1);
        if(*b1 < *c1){
            printf("%d: %p\n" , *b1 , b1);
            printf("%d: %p\n" , *c1, c1);
        }else{
            printf("%d: %p\n" , *c1, c1);
            printf("%d: %p\n" , *b1 , b1);
        }
    }
    if(*b1 < *c1 && *b1 < *a1){
        printf("%d: %p\n" , *b1 , b1);
        if(*a1 < *c1){
            printf("%d: %p\n" , *a1 , a1);
            printf("%d: %p\n" , *c1 , c1);
        }else{
            printf("%d: %p\n" , *c1 , c1);
            printf("%d: %p\n" , *a1 , a1);
        }
    }
    if(*c1 < *b1 && *c1 < *a1){
        printf("%d: %p\n" , *c1 , c1);
        if(*b1 < *a1){
            printf("%d: %p\n" , *b1 , b1);
            printf("%d: %p\n" , *a1 , a1);
        }else{
            printf("%d: %p\n" , *a1 , a1);
            printf("%d: %p\n" , *b1 , b1);
        }
    }
    return 0;
}