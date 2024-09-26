#include <stdio.h>

int main()
{
   int number;

   printf("Digite um número: ");
   scanf("%d", &number);

   if (number % 2 == 0)
   {
      printf("\nO número digitado é par.");
   }
   else
   {
      printf("\nO número digitado é impar.");
   }

   return 0;
}