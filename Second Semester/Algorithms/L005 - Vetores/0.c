#include <stdio.h>

int main()
{
    int numbers[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int biggest = numbers[0];

    for (int i = 1; i < 10; i++)
    {
        int number = numbers[i];
        int isBigger = number > biggest;

        if (isBigger)
        {
            biggest = numbers[i];
        }
    }

    printf("\nO MAIOR número do vetor é: %d", biggest);

    return 0;
}