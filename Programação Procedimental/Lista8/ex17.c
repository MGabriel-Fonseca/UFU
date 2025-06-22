#include <stdio.h>

int main() {
    float alturaC = 1.50;
    float alturaZ = 1.10;
    int anos = 0;
    while(alturaZ <= alturaC) {
        alturaC += 0.02; 
        alturaZ += 0.03;
        anos++;
    }
    printf("Serao necessarios %d anos\n", anos);
    return 0;
}