#include <stdio.h>
#include <stdlib.h>

#define MONTHS_AMOUNT 12

int main()
{
    char months[12][9] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    int monthIndex;

    printf("Digite o número de um mês (1-12): ");
    scanf("%d", &monthIndex);

    if (monthIndex <= 0 || monthIndex > MONTHS_AMOUNT)
    {
        printf("Número do mês inválido, por favor digite um número entre 1-12\n\n");
        exit(1);
    }

    printf("O nome do mês escolhido é: %s\n\n", months[monthIndex - 1]);

    return 0;
}