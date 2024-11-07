#include <stdio.h>

int main()
{
    int numbers[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        int number = numbers[i];
        int newSum = sum + number;

        sum = newSum;
    }

    float average = ((float)sum / 10);

    printf("\nA média de todos os valores é: %.1f", average);

    return 0;
}