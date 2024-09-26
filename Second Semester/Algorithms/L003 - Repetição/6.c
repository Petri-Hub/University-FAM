#include <stdio.h>

int main()
{

   int salariesAmount = 15;
   int salaryMargin = 1500;
   int salariesBiggerThanMargin = 0;

   for (int i = 0; i < salariesAmount; i++)
   {
      float salary = 0;

      printf("Digite o valor do %dº salário: ", i + 1);
      scanf("%f", &salary);

      if (salary >= salaryMargin)
      {
         salariesBiggerThanMargin++;
      }
   }

   float salariesOverMarginPercentage = ((float)salariesBiggerThanMargin / (float)salariesAmount) * 100;

   printf("\nSalários: %d", salariesAmount);
   printf("\nPorcentagem de salários maior que %d: %.2f%%", salaryMargin, salariesOverMarginPercentage);

   return 0;
}