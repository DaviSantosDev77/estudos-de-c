#include <stdio.h>

int main() {
    printf("----- Números primos de 1 a 500 -----\n\n");
    for (int i = 1; i <= 500; i++) {
        int contador_de_divisores = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                contador_de_divisores++;
            }

        }
        
        if (contador_de_divisores == 2) {
            printf("%d ", i);
        }
    }

    printf("\n\nFim da Lista.\n");
    
    return 0;
}