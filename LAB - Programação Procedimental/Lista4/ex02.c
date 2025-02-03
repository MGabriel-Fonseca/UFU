#include <stdio.h>


int main(){
    int inteiro;
    float real;
    char charactere;
    printf("Digite os valores do numero inteiro, real, e caractere respectivsamente: ");
    scanf("%d %f %c", &inteiro, &real, &charactere);

    int *p;
    float *p1;
    char *p2;

    p = &inteiro;
    p1 = &real;
    p2 = &charactere;

    (*p)++; 
    (*p1)++;
    (*p2)++;

    printf("Os valores alterados sao: %d %f %c", inteiro, real, charactere);

    return 0;  
}