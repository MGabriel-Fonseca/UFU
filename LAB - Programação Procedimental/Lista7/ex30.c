#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, y, z;
    printf("Digite 3 numeros inteiros para que sejam mostrados de forma crescente: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z && y > z)
    {
        printf("%d %d %d", z, y, x);
    }
    else if (x > y && x > z && z > y)
    {
        printf("%d %d %d", y, z, x);
    }
    else if (y > x && y > z && x > z)
    {
        printf("%d %d %d", z, x, y);
    }
    else if (y > x && y > z && z > x)
    {
        printf("%d %d %d", x, z, y);
    }
    else if (z > x && z > y && x > y)
    {
        printf("%d %d %d", y, x, z);
    }
    else if (z > x && z > y && y > x)
    {
        printf("%d %d %d", x, y, z);
    }
    else{
        printf("Alguns dos numeros digitados tem o mesmo valor");
    }
    return 0;
}
    
    