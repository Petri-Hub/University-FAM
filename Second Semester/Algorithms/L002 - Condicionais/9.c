#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sex;
    int civilState;

    printf("Digite o seu sexo (F/M): ");
    scanf("%c", &sex);

    printf("Digite seu estado civil:\n\n");
    printf("1 - Solteiro\n");
    printf("2 - Casada\n\n");
    scanf("%d", &civilState);

    int isFeminine = sex == 'F';
    int isMarried = civilState == 2;

    if (isFeminine && isMarried)
    {
        int marriedYears;

        printf("\nDigite quantos anos de casada: ");
        scanf("%d", &marriedYears);
        printf("\n%d anos de casada", marriedYears);
    }
    else
    {
        printf("Tudo certo.");
    }

    return 0;
}