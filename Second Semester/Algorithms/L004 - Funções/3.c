#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void promptSquareAreaCalculation()
{
   float size;

   printf("\nDigite o tamanho do quadrado: ");
   scanf("%f", &size);

   float area = pow(size, 2);

   printf("\nA área do quadrado é:\n");
   printf("%.1f x %.1f = %.1f", size, size, area);
}

void promptCubeVolumeCalculation()
{
   float size;

   printf("\nDigite o tamanho do cubo: ");
   scanf("%f", &size);

   float volume = pow(size, 3);

   printf("\nO volume do cubo é:\n");
   printf("%.1f x %.1f x %.1f = %.1f", size, size, size, volume);
}

int main()
{
   int choice;

   printf("Digite o que você quer calcular:\n\n");
   printf("[1] - Calcular a área de um quadrado\n");
   printf("[2] - Calcular o volume de um cubo\n\n");
   scanf("%d", &choice);

   switch (choice)
   {
   case 1:
      promptSquareAreaCalculation();
      break;
   case 2:
      promptCubeVolumeCalculation();
      break;
   default:
      printf("Tipo de escolha inválida. Tente novamente.");
      exit(1);
   }
}