#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, resposta, acertos = 0;
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;
        printf("Qual eh a soma de %d + %d ? ", a, b);
        scanf("%d", &resposta);
        if (resposta == a + b) {
            printf("Resposta correta\n");
            acertos++;
        } else {
            printf("Resposta errada, a correta eh %d.\n", a + b);
        }
    }
    printf("Voce acertou %d perguntas de 5.\n", acertos);
    return 0;
}