#include<stdio.h>

int main() {
    char resposta;

    do {
        int ano, mes, dias;

       
        printf("Digite o mes (1-12): ");
        scanf("%d", &mes);

        
        if (mes < 1 || mes > 12) {
            printf("Mes invalido. Tente novamente.\n");
            continue;  // Retorna ao inicio do loop
        }

        printf("Digite o ano: ");
        scanf("%d", &ano);

        // Verifica se o ano e bissexto
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
            // Se o ano for bissexto, arrumar os dias de fevereiro
            if (mes == 2) {
                dias = 29;
            } else {
                //  outros meses
                int diasPorMes[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
                dias = diasPorMes[mes];
            }
        } else {
            // Se o ano não e bissexto,  padrao de dias por mes
            int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            dias = diasPorMes[mes];
        }

       
        printf("O mês %d/%d tem %d dias.\n", mes, ano, dias);

        
        printf("VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &resposta);  

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
