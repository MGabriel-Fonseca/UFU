#include <stdio.h>

int main() {
    int palin = 0;
    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            int produto = i * j;
            int r = 0, original = produto;
            while (original > 0) 
            {
                r = r * 10 + original % 10;
                original /= 10;
            }
            if (produto == r && produto > palin) {
                palin = produto;
            }
        }
    }
    printf("O maior palindromo eh: %d\n", palin);

    return 0;
}