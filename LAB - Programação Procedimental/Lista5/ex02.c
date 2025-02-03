#include <stdio.h>

int main(){
    int i, j;
    float vet[3][3];
    float *p = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++){
        p = &vet[i][j];
        printf("Endereco da posicao %d %d: %p\n", i, j, p);
    }}
    return 0;

}