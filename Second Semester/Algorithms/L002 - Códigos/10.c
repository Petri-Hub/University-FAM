#include <stdio.h>
#include <stdlib.h>

int main()
{

    int studentCode;

    float firstGrade;
    float secondGrade;
    float thirdGrade;

    printf("Digite o código do aluno: ");
    scanf("%d", &studentCode);

    printf("Digite a primeira nota: ");
    scanf("%f", &firstGrade);

    printf("Digite a segunda nota: ");
    scanf("%f", &secondGrade);

    printf("Digite a terceira nota: ");
    scanf("%f", &thirdGrade);

    float firstGradeValue = (firstGrade / 10) * 3;
    float secondGradeValue = (secondGrade / 10) * 3;
    float thirdGradeValue = (thirdGrade / 10) * 4;
    float averageGrade = firstGradeValue + secondGradeValue + thirdGradeValue;

    char concept;
    int isApproved;

    if (averageGrade < 4)
    {
        concept = 'E';
        isApproved = 0;
    }
    else if (averageGrade < 6)
    {
        concept = 'D';
        isApproved = 0;
    }
    else if (averageGrade < 7.5)
    {
        concept = 'C';
        isApproved = 1;
    }
    else if (averageGrade < 9)
    {
        concept = 'B';
        isApproved = 1;
    }
    else
    {
        concept = 'A';
        isApproved = 1;
    }

    printf("\nCódigo do aluno: %d", studentCode);
    printf("\nPrimeira nota: %.1f", firstGrade);
    printf("\nSegunda nota: %.1f", secondGrade);
    printf("\nTerceira nota: %.1f", thirdGrade);
    printf("\nMédia final: %.1f", averageGrade);
    printf("\nConceito: %c", concept);

    return 0;
}