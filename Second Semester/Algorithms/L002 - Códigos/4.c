#include <stdio.h>

int main()
{
   int salary;
   int code;

   printf("Digite o seu salário atual: ");
   scanf("%d", &salary);

   printf("Digite o código de seu cargo: ");
   scanf("%d", &code);

   float bonusPercent;

   switch (code)
   {
   case 310:
      bonusPercent = 5;
      break;
   case 456:
      bonusPercent = 7.5;
      break;
   case 885:
      bonusPercent = 10;
      break;
   default:
      bonusPercent = 15;
      break;
   }

   float bonusValue = (salary / 100) * bonusPercent;
   float newSalary = salary + bonusValue;
   float difference = newSalary - salary;

   printf("\nSalário atual: %d", salary);
   printf("\nSalário novo: %2.f", newSalary);
   printf("\nSalário atual: %2.f", difference);
}