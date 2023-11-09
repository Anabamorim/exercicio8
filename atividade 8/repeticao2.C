#include<stdio.h>

int main() {
    int num_moradores = 50;
    char elevador, periodo;
    int cont_elevador_A = 0, cont_elevador_B = 0, cont_elevador_C = 0;
    int cont_matutino = 0, cont_vespertino = 0, cont_noturno = 0;

    for (int i = 0; i < num_moradores; i++) {
        printf("Morador %d:\n", i + 1);

        printf("Elevador mais utilizado (A, B ou C): ");
        scanf(" %c", &elevador);

        printf("Período mais utilizado (M, V ou N): ");
        scanf(" %c", &periodo);

        switch (elevador) {
            case 'A':
                cont_elevador_A++;
                break;
            case 'B':
                cont_elevador_B++;
                break;
            case 'C':
                cont_elevador_C++;
                break;
            default:
                printf("Elevador invalido. Tente novamente.\n");
                i--;
                continue;
        }

        switch (periodo) {
            case 'M':
                cont_matutino++;
                break;
            case 'V':
                cont_vespertino++;
                break;
            case 'N':
                cont_noturno++;
                break;
            default:
                printf("Periodo invalido. Tente novamente.\n");
                i--;
                continue;
        }
    }

    // mais usados de todos os elevadores e seus periodos 
    char periodo_mais_usado = (cont_matutino >= cont_vespertino && cont_matutino >= cont_noturno) ? 'M' :
                              (cont_vespertino >= cont_matutino && cont_vespertino >= cont_noturno) ? 'V' : 'N';

    char elevador_mais_usado = (cont_elevador_A >= cont_elevador_B && cont_elevador_A >= cont_elevador_C) ? 'A' :
                               (cont_elevador_B >= cont_elevador_A && cont_elevador_B >= cont_elevador_C) ? 'B' : 'C';

    printf("O periodo mais usado de todos e %c e pertence ao elevador %c.\n", periodo_mais_usado, elevador_mais_usado);

    // mais frequentado e maior fluxo
    char periodo_mais_frequente = (cont_matutino >= cont_vespertino && cont_matutino >= cont_noturno) ? 'M' :
                                   (cont_vespertino >= cont_matutino && cont_vespertino >= cont_noturno) ? 'V' : 'N';

    printf("O elevador mais frequentado é %c e se concentra no período %c.\n", elevador_mais_usado, periodo_mais_frequente);

    // percentual mais usados e menos usados 
    int min_usado = (cont_matutino < cont_vespertino) ? cont_matutino : cont_vespertino;
    min_usado = (min_usado < cont_noturno) ? min_usado : cont_noturno;

    int max_usado = (cont_matutino > cont_vespertino) ? cont_matutino : cont_vespertino;
    max_usado = (max_usado > cont_noturno) ? max_usado : cont_noturno;

    float diferenca_percentual = ((float)(max_usado - min_usado) / min_usado) * 100;
    printf("Diferença percentual entre o mais usado e o menos usado: %.2f%%\n", diferenca_percentual);

    //porcentagem e media 
    int total_servicos = cont_elevador_A + cont_elevador_B + cont_elevador_C;
    int media_utilizacao = (cont_elevador_A + cont_elevador_B + cont_elevador_C) / 3;

    float percentagem_media_utilizacao = ((float)media_utilizacao / total_servicos) * 100;
    printf("Porcentagem sobre o total de serviços do elevador da média de utilização: %.2f%%\n", percentagem_media_utilizacao);

    return 0;
}
