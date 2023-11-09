#include<stdio.h>

int main() {
    
    int numHomens = 0, numMulheres = 0;

    // armazenar as somas
    float somaAlturaHomens = 0, somaAlturaMulheres = 0, somaAlturaTotal = 0;
    float somaPesoHomens = 0, somaPesoMulheres = 0, somaPesoTotal = 0;

    
    for (int i = 1; i <= 10; ++i) {
       
        char nome[50], sexo;
        float altura, peso;

        printf("\nDigite o nome da pessoa %d: ", i);
        scanf("%s", nome);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);  

        printf("Digite a altura (em metros): ");
        scanf("%f", &altura);

        printf("Digite o peso (em quilogramas): ");
        scanf("%f", &peso);

        
        if (sexo == 'M' || sexo == 'm') {
           
            numHomens++;
            somaAlturaHomens += altura;
            somaPesoHomens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
           
            numMulheres++;
            somaAlturaMulheres += altura;
            somaPesoMulheres += peso;
        }

        // somas gerais
        somaAlturaTotal += altura;
        somaPesoTotal += peso;
    }

    // Calculos das medias
    float mediaAlturaHomens = numHomens > 0 ? somaAlturaHomens / numHomens : 0;
    float mediaAlturaMulheres = numMulheres > 0 ? somaAlturaMulheres / numMulheres : 0;
    float mediaAlturaTotal = somaAlturaTotal / 10;  

    float mediaPesoHomens = numHomens > 0 ? somaPesoHomens / numHomens : 0;
    float mediaPesoMulheres = numMulheres > 0 ? somaPesoMulheres / numMulheres : 0;
    float mediaPesoTotal = somaPesoTotal / 10; 

    //  resultados
    printf("\nResultados:\n");
    printf("Numero de homens: %d\n", numHomens);
    printf("Numero de mulheres: %d\n", numMulheres);
    printf("Altura media dos homens: %.2f metros\n", mediaAlturaHomens);
    printf("Altura media das mulheres: %.2f metros\n", mediaAlturaMulheres);
    printf("Altura media do grupo: %.2f metros\n", mediaAlturaTotal);
    printf("Peso medio dos homens: %.2f quilogramas\n", mediaPesoHomens);
    printf("Peso medio das mulheres: %.2f quilogramas\n", mediaPesoMulheres);
    printf("Peso medio do grupo: %.2f quilogramas\n", mediaPesoTotal);

    return 0;
}
