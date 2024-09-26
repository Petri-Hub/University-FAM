#include <stdio.h>

int main()
{

   int numbersAmount = 10;
   int rangeStart = 10;
   int rangeEnd = 15;

   int inRange = 0;
   int outOfRange = 0;

   for (int i = 0; i < numbersAmount; i++)
   {
      float number;

      printf("Digite um número: ");
      scanf("%f", &number);

      int isInRange = (number >= rangeStart) & (number <= rangeEnd);

      if (isInRange)
      {
         inRange++;
      }
      else
      {
         outOfRange++;
      }
   }

   printf("\nVocê digitou %d números DENTRO do intervalo de %d-%d", inRange, rangeStart, rangeEnd);
   printf("\nVocê digitou %d números FORA do intervalo de %d-%d", outOfRange, rangeStart, rangeEnd);

   return 0;
}