#include <stdio.h>
#include <math.h>

int main()
{
    int numberA;
    int numberB;
    int numberC;

    printf("Digite o primeiro número: ");
    scanf("%d", &numberA);

    printf("Digite o segundo número: ");
    scanf("%d", &numberB);

    printf("Digite o terceiro número: ");
    scanf("%d", &numberC);

    float biggest = -INFINITY;
    float smallest = +INFINITY;

    if (numberA >= biggest)
    {
        biggest = numberA;
    }
    if (numberA <= smallest)
    {
        smallest = numberA;
    }
    if (numberB >= biggest)
    {
        biggest = numberB;
    }
    if (numberB <= smallest)
    {
        smallest = numberB;
    }
    if (numberC >= biggest)
    {
        biggest = numberC;
    }
    if (numberC <= smallest)
    {
        smallest = numberC;
    }

    printf("\nMaior número: %.1f", biggest);
    printf("\nMenor número: %.1f", smallest);

    return 0;
}