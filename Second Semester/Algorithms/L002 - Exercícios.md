# Tarefa de Algorítmos (Estruturas de Repetição)

**Aluno:** Fernando Petri<br>
**RA:** 20240770<br>
**Professor:** Daives

## Exercícios

## 1.

> Escreva um programa que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar

```c
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
```

[Link para o código](https://onlinegdb.com/vTIPXZ4lTX)

## 2.

> Escreva um programa que leia um número inteiro e mostre uma mensagem indicando se este número é positivo ou negativo

```c
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
```

[Link para o código](https://onlinegdb.com/f4c9HalRy)

## 3.

>  Escreva um programa que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo

```c
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
```

[Link para o código](https://onlinegdb.com/FCWhuvjuv)

## 4.

>  Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo. Faça um programa que leia o salário e o código do cargo de um funcionário e calcule o seu novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 15% de aumento. Mostre o salário antigo, o novo salário e a diferença entre ambos.

```c
#include <stdio.h>

int main()
{
   int salary;
   int code;

   printf("Digite o seu salário atual: ");
   scanf("%d", &salary);

   printf("Digite o código de seu cargo: ");
   scanf("%d", &code);

   float bonusPercent;

   switch (code)
   {
   case 310:
      bonusPercent = 5;
      break;
   case 456:
      bonusPercent = 7.5;
      break;
   case 885:
      bonusPercent = 10;
      break;
   default:
      bonusPercent = 15;
      break;
   }

   float bonusValue = (salary / 100) * bonusPercent;
   float newSalary = salary + bonusValue;
   float difference = newSalary - salary;

   printf("\nSalário atual: %d", salary);
   printf("\nSalário novo: %2.f", newSalary);
   printf("\nSalário atual: %2.f", difference);
}
```
[Link para o código](https://onlinegdb.com/Zhj4bki25)

## 5.

> Faça um programa que leia três números inteiros e mostre o maior e o menor deles.

```c

```

[Link para o código]()