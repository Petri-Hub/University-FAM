#include <stdio.h>
#include <math.h>

int main()
{
   float number = -INFINITY;

   while (number < 12 | number > 20)
   {
      printf("Digite um número: ");
      scanf("%f", &number);

      if (number < 12 | number > 20)
      {
         printf("\nEntrada inválido\n\n");
      }
      else
      {
         printf("\nNúmero enviado: %f", number);
      }
   }

   return 0;
}