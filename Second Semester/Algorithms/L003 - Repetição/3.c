#include <stdio.h>

int main()
{

   int numbersAmount;
   float sum = 0;

   printf("Digite quantos números você quer calcular a média: ");
   scanf("%d", &numbersAmount);

   for (int i = 0; i < numbersAmount; i++)
   {
      float number;

      printf("Digite o %dº número: ", i + 1);
      scanf("%f", &number);

      sum += number;
   }

   printf("A média destes valores é: %.2f", sum / numbersAmount);

   return 0;
}