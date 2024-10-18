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

float promptGradesInsertionDialog(int gradesAmount)
{
   float sum;

   for (int i = 1; i <= gradesAmount; i++)
   {
      float grade = promptGradeQuestion(i);
      float newSum = sum + grade;

      sum = newSum;
   }

   return sum;
}

int promptGradesQuantityQuestion()
{
   int amount;

   printf("Digite quantas notas serão analisadas: ");
   scanf("%d", &amount);

   return amount;
}

int main()
{

   int gradesAmount = promptGradesQuantityQuestion();
   float gradesSum = promptGradesInsertionDialog(gradesAmount);
   float averageGrade = calculateAverageGrade(gradesSum, gradesAmount);

   printf("\nA soma das %d notas foi de: %.1f", gradesAmount, gradesSum);
   printf("\nA média das %d notas foi de: %.1f", gradesAmount, averageGrade);
}
