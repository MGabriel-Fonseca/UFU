#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int dia, qtdia, mes, ano;

    printf("Digite uma data com formado dd mm aaaa: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    switch (mes)
    {
    case 1:
        qtdia = 31;
        break;
    case 2:
        if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
                qtdia = 29;
            } else {
                qtdia = 28;
            }
        break;
    case 3:
        qtdia = 31;
        break;
    case 4:
        qtdia = 30;
        break;
    case 5:
        qtdia = 31;
        break;
    case 6:
        qtdia = 30;
        break;
    case 7:
        qtdia = 31;
        break;
    case 8:
        qtdia = 31;
        break;
    case 9:
        qtdia = 30;
        break;
    case 10:
        qtdia = 31;
        break;
    case 11:
        qtdia = 30;
        break;
    case 12:
        qtdia = 31;
        break;
    
    default:
        printf("Data invalida");
        break;
    }
    if (dia >= 1 && dia <= qtdia){
        printf("A data %d %d %d existe", dia, mes, ano);
    }
    else{
        printf("Data invalida");
    }
    return 0;
}

    