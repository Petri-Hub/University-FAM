#include <stdio.h>
#include <math.h>

int main()
{
    double terms[10];
    double initialNumber;
    double reason;

    printf("Digite o número inicial da P.G.: ");
    scanf("%lf", &initialNumber);

    printf("Digite a razão da P.G.: ");
    scanf("%lf", &reason);

    for (int i = 0; i < 10; i++)
    {
        terms[i] = initialNumber * pow(reason, i);
    }

    printf("\nOs 10 primeiros termos da P.G. são:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%.2f ", terms[i]);
    }

    return 0;
}