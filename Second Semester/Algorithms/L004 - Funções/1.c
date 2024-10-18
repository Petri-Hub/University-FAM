#include <stdio.h>

float promptGradeQuestion(int number)
{
   float grade;

   printf("Digite a nota %d: ", number);
   scanf("%f", &grade);

   return grade;
}

float calculateAverageGrade(float gradesSum, int gradesAmount)
{
   return gradesSum / gradesAmount;
}

int main()
{
   int GRADE_FOR_APPROVAL = 6;
   int GRADES_AMOUNT = 4;

   float gradesSum = 0;

   for (int i = 1; i <= GRADES_AMOUNT; i++)
   {
      float grade = promptGradeQuestion(i);
      float newSum = gradesSum + grade;

      gradesSum = newSum;
   }

   float gradeAverage = calculateAverageGrade(gradesSum, GRADES_AMOUNT);
   int isApproved = gradeAverage >= GRADE_FOR_APPROVAL;

   if (isApproved)
   {
      printf("\n\nO aluno foi aprovado pois teve uma média de %.1f", gradeAverage);
   }
   else
   {
      printf("\n\nO aluno não foi aprovado pois teve uma média de %.1f", gradeAverage);
   }
}