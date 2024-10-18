#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void calculateRoots(float a, float b, float c)
{
   float delta = b * b - 4 * a * c;
   float root1;
   float root2;

   if (delta < 0)
   {
      printf("A equação não possui raízes reais.\n");
   }
   else if (delta == 0)
   {
      root1 = -b / (2 * a);
      printf("A equação possui uma raiz real: x = %.2f\n", root1);
   }
   else
   {
      root1 = (-b + sqrt(delta)) / (2 * a);
      root2 = (-b - sqrt(delta)) / (2 * a);
      printf("A equação possui duas raízes reais: x1 = %.2f e x2 = %.2f\n", root1, root2);
   }
}

int main()
{
   float a;
   float b;
   float c;

   printf("Digite o valor de A: ");
   scanf("%f", &a);
   printf("Digite o valor de B: ");
   scanf("%f", &b);
   printf("Digite o valor de C: ");
   scanf("%f", &c);

   if (a == 0)
   {
      printf("O valor de A deve ser diferente de zero para uma equação do segundo grau.\n");
      exit(1);
   }

   calculateRoots(a, b, c);

   return 0;
}
