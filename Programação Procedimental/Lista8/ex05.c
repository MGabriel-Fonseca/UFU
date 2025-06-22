#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, num = 0, soma = 0;
    printf("Digite 10 valores para serem somados: ");
    do{
        scanf("%d", &a);
        soma += a;
        num++;
    } while (num < 10);

    printf("%d", soma);

    return 0;
}
