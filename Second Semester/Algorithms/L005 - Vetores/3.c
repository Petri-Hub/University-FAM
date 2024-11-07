#include <stdio.h>

int main()
{
    int terms[10];
    int initialNumber;
    int reason;

    printf("Digite o número inicial: ");
    scanf("%d", &initialNumber);

    printf("Digite a razão: ");
    scanf("%d", &reason);

    for (int i = 0; i < 10; i++)
    {
        terms[i] = initialNumber + i * reason;
    }

    printf("\nNúmeros calculados:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", terms[i]);
    }

    return 0;
}