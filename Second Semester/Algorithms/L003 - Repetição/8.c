#include <stdio.h>
#include <math.h>

int main()
{

   int peopleAmount = 3;
   float biggestHeight = -INFINITY;
   float smallestHeight = +INFINITY;

   for (int i = 0; i < peopleAmount; i++)
   {
      float height;

      printf("Digite a altrura da %dª pessoa: ", i + 1);
      scanf("%f", &height);

      if (height > biggestHeight)
      {
         biggestHeight = height;
      }
      if (height < smallestHeight)
      {
         smallestHeight = height;
      }
   }

   printf("\nMENOR altura entre os participantes: %.2fm", smallestHeight);
   printf("\nMAIOR altura entre os participantes: %.2fm", biggestHeight);

   return 0;
}