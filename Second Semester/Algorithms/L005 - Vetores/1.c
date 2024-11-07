#include <stdio.h>

int main()
{
    int numbers[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int smallest = numbers[0];

    for (int i = 1; i < 10; i++)
    {
        int number = numbers[i];
        int isSmaller = number < smallest;

        if (isSmaller)
        {
            smallest = numbers[i];
        }
    }

    printf("\nO MENOR número do vetor é: %d", smallest);

    return 0;
}