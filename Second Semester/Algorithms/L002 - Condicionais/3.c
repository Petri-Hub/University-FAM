#include <stdio.h>

int main()
{
	int number;

	printf("Digite um número: ");
	scanf("%d", &number);

	int isPositive = number >= 0;
	int isEven = number % 2 == 0;

	if(isPositive) 
	{
		printf("\nO número digitado é positivo.");
	} 
	else 
	{
		printf("\nO número digitado é negativo.");
	}

	if (isEven)
	{
		printf("\nO número digitado é par.");
	}
	else
	{
		printf("\nO número digitado é impar.");
	}

	return 0;
}