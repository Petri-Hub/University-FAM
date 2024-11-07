#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumbers[10];

    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        randomNumbers[i] = rand() % 10;
    }

    int guessNumber;
    int isPresent = 0;
    int indexPosition;

    printf("Digite um número: ");
    scanf("%d", &guessNumber);

    for (int i = 0; i < 10; i++)
    {
        if (randomNumbers[i] == guessNumber)
        {
            isPresent = 1;
            indexPosition = i;
        }
    }

    if (isPresent)
    {
        printf("O número %d está presente na posição %d", guessNumber, indexPosition);
    }
    else
    {
        printf("O número não está presenta na lista de números aleatórios.");
    }

    return 0;
}