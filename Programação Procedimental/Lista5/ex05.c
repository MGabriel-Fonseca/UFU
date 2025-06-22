#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];
    int ocorrencia = 0;

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0'; 
    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0'; 

    const char *p1, *p2;

    for (int i = 0; i <= strlen(string1) - strlen(string2); i++) {
        p1 = &string1[i];
        p2 = string2;

        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (!*p2) {
            ocorrencia = 1; 
            break;
        }
    }

    if (ocorrencia) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string NAO ocorre dentro da primeira.\n");
    }

    return 0;
}
