#include<stdio.h>

int main() {
    int n;

    do {
        printf("Digite um numero inteiro maior ou igual a zero: ");
        scanf("%d", &n);
    } while (n < 0);

    int primeiro_termo = 0, segundo_termo = 1, proximo_termo;

    // Calcula os termos da sequencia de Fibonacci 
    for (int i = 2; i <= n; i++) {
        proximo_termo = primeiro_termo + segundo_termo;
        primeiro_termo = segundo_termo;
        segundo_termo = proximo_termo;
    }

   
    printf("O %dº termo da sequencia de Fibonacci e: %d\n", n, segundo_termo);

    return 0;
}
