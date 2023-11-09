#include<stdio.h>

int main() {
    int capacidade = 100;
    int quantidade_otimo = 0;
    int quantidade_bom = 0;
    int quantidade_regular = 0;
    int quantidade_ruim = 0;
    int quantidade_pessimo = 0;
    int soma_idade_ruim = 0;
    int maior_idade_pessimo = 0;
    int maior_idade_otimo = 0;
    int maior_idade_ruim = 0;

    for (int i = 0; i < capacidade; i++) {
        char nota;
        int idade;

        printf("Informe a nota (A, B, C, D, E):  ", i + 1);
        scanf(" %c", &nota);

        printf("Informe a idade: ", i + 1);
        scanf("%d", &idade);

        // Contagem de respostas
        switch (nota) {
            case 'A':
                quantidade_otimo++;
                if (idade > maior_idade_otimo) {
                    maior_idade_otimo = idade;
                }
                break;
            case 'B':
                quantidade_bom++;
                break;
            case 'C':
                quantidade_regular++;
                break;
            case 'D':
                quantidade_ruim++;
                soma_idade_ruim += idade;
                if (idade > maior_idade_ruim) {
                    maior_idade_ruim = idade;
                }
                break;
            case 'E':
                quantidade_pessimo++;
                if (idade > maior_idade_pessimo) {
                    maior_idade_pessimo = idade;
                }
                break;
            default:
                printf("Opcao invalida.\n");
                i--; 
        }
    }

    // Calculos e as impressoes
    printf("\nQuantidade de respostas otimo: %d\n", quantidade_otimo);

    if (quantidade_bom > quantidade_regular) {
        printf("Diferenca percentual entre respostas Bom e Regular: %.2f%%\n",
               ((float)(quantidade_bom - quantidade_regular) / capacidade) * 100);
    } else {
        printf("Diferenca percentual entre respostas Bom e Regular: %.2f%%\n",
               ((float)(quantidade_regular - quantidade_bom) / capacidade) * 100);
    }

    if (quantidade_ruim > 0) {
        float media_idade_ruim = (float)soma_idade_ruim / quantidade_ruim;
        printf("Media de idade das pessoas que responderam Ruim: %.2f\n", media_idade_ruim);
    } else {
        printf("Nenhuma pessoa respondeu Ruim.\n");
    }

    float percentual_pessimo = (float)quantidade_pessimo / capacidade * 100;
    printf("Percentagem de respostas Pessimo: %.2f%%\n", percentual_pessimo);

    if (maior_idade_pessimo > 0) {
        printf("Maior idade que respondeu Pessimo: %d\n", maior_idade_pessimo);
    } else {
        printf("Nenhuma pessoa respondeu Pessimo.\n");
    }

    int diferenca_idade = maior_idade_otimo - maior_idade_ruim;
    printf("Diferenca de idade entre a maior idade que respondeu Otimo e Ruim: %d\n", diferenca_idade);

    return 0;
}
