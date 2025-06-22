#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int chegadaH, chegadaM, partidaH, partidaM;
    int duracaoH, duracaoM, minuto_total;
    float preco;
    printf("Digite a hora e o minuto da chegada (hh mm): ");
    scanf("%d %d", &chegadaH, &chegadaM);
    printf("Digite a hora e o minuto da partida (hh mm): ");
    scanf("%d %d", &partidaH, &partidaM);
    chegadaM = chegadaH * 60 + chegadaM;
    partidaM = partidaH * 60 + partidaM;
    if (partidaM > chegadaM) {
        minuto_total = partidaM - chegadaM;
    } else if (partidaM <= chegadaM)
    {
        minuto_total = 24 * 60 - chegadaM + partidaM;
    }
    duracaoH = minuto_total / 60;
    duracaoM = minuto_total % 60;
    if (minuto_total <= 120) {
        preco = duracaoH * 1.0;
    } else if (minuto_total <= 240) {
        preco = 2.0 + (duracaoH - 2) * 1.4;
    } else {
        preco = 4.4 + (duracaoH - 4) * 2.0;
    }
    printf("Tempo de estacionamento (hh mm): %d %d\n", duracaoH, duracaoM);
    printf("O valor total eh: %f", preco);
    return 0;
}