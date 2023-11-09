#include<stdio.h>

int main() {
    int numero;

   
    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    
    printf("Os divisores do numero %d são: ", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d", i);

            /
            if (i != numero) {
                printf(", ");
            }
        }
    }

    
}
