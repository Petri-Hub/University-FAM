#include <stdio.h>

int main()
{
   int number;

   printf("Digite um número: ");
   scanf("%d", &number);

   if (number >= 0)
   {
      printf("\nO número digitado é positivo.");
   }
   else
   {
      printf("\nO número digitado é negativo.");
   }

   return 0;
}