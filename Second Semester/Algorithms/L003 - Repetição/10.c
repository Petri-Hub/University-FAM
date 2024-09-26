#include <stdio.h>
#include <math.h>

int main()
{
   float number = +INFINITY;

   while (number > 1)
   {
      printf("Digite um número: ");
      scanf("%f", &number);
   }

   printf("\nVocê digitou um número menor que 1");

   return 0;
}