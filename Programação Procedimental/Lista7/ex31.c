#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float peso, altura;
    printf("Digite seu peso e sua altura, em kg e metros, para que receba a classifcacao: ");
    scanf("%f %f", &peso, &altura);
    if ((altura < 1.20) && (peso < 60))
    {
        printf("Sua classificacao eh A");
    }
    else if ((altura < 1.20) && (peso >= 60) && (peso <= 90))
    {
        printf("Sua classificacao eh D");
    }
    else if ((altura < 1.20) && (peso >= 90))
    {
        printf("Sua classificacao eh G");
    }
    else if ((altura >= 1.20) && (altura <= 1.70) && (peso < 60))
    {
        printf("Sua classificacao eh B");
    }
    else if ((altura >= 1.20) && (altura <= 1.70) && (peso >= 60) && (peso <= 90))
    {
        printf("Sua classificacao eh E");
    }
    else if ((altura >= 1.20) && (altura <= 1.70) && (peso > 90))
    {
        printf("Sua classificacao eh H");
    }
    else if ((altura > 1.70) && (peso < 60))
    {
        printf("Sua classificacao eh C");
    }
    else if ((altura > 1.70) && (peso >= 60) && (peso <= 90))
    {
        printf("Sua classificacao eh F");
    }
    else if ((altura > 1.70) && (peso > 90))
    {
        printf("Sua classificacao eh I");
    }
    else{
        printf("Valores invalidos");
    }
    return 0;
}
    
    
    
    
    
    