# Tarefa de Algorítimos (Estruturas de Repetição)

**Aluno:** Fernando Petri<br>
**RA:** 20240770<br>
**Professor:** Daives

## Exercícios

## 1.

> Fazer um programa para encontrar todos os números ímpares entre 1 e 1000 

```c
#include <stdio.h>

int main()
{

	int start = 0;
	int end = 1000;

	for (int i = start; i < end; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d,", i);
		}
	}

	return 0;
}
```
[Link para o código](https://onlinegdb.com/CC9DZF4pU)

## 2.

>  Fazer um programa que leia um valor inteiro (aceitar somente valores entre (1 e 10) e escrever a tabuada de 1 a 10 do valor lido

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;

   printf("Digite um número de 1 a 10: ");
   scanf("%d", &number);

   int isSmallerThanNeeded = number < 1;
   int isBiggerThanLimit = number > 10;

   if (isSmallerThanNeeded | isBiggerThanLimit)
   {
      printf("O número é menor que 1 ou maior que 10, tente novamente.");
      exit(1);
   }

   for (int i = 1; i <= 10; i++)
   {
      printf("\n%d x %d = %d", number, i, number * i);
   }

   return 0;
} 
```

[Link para o código](https://onlinegdb.com/b33kGWMSU)

## 3.

>  Fazer um programa que pergunte para o usuário quantos números ele quer ler – Faça a leitura desses números e depois calcule a média aritmética simples dos números cadastrados.

```c
#include <stdio.h>

int main()
{

   int numbersAmount;
   float sum = 0;

   printf("Digite quantos números você quer calcular a média: ");
   scanf("%d", &numbersAmount);

   for (int i = 0; i < numbersAmount; i++)
   {
      float number;

      printf("Digite o %dº número: ", i + 1);
      scanf("%f", &number);

      sum += number;
   }

   printf("A média destes valores é: %.2f", sum / numbersAmount);

   return 0;
}
```

[Link para o código](https://onlinegdb.com/uET35rwb7)

## 4.

>  Fazer um programa que receba 10 números e conte quantos deles estão no intervalo [10,15] e quantos deles estão fora do intervalo, escrevendo estas informações

```c
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
```

[Link para o código](https://onlinegdb.com/GgQtIHhyA)

## 5.

>  Fazer um programa que receba um número inteiro e positivo, e diga se esse número é primo ou não. Obs: Um número é primo somente quando for divisível por 1 e por ele mesmo.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{

   int number;

   printf("Digite um número inteiro e positivo: ");
   scanf("%d", &number);

   if (number < 0)
   {
      printf("O número é negativo, digite outro número.");
      exit(1);
   }

   int isPrime = 1;

   for (int i = 2; i < number; i++)
   {
      if (number % i == 0)
      {
         isPrime = 0;
      }
   }

   if (isPrime)
   {
      printf("\nO número informado É primo.");
   }
   else
   {
      printf("\nO número informado NÃO É primo.");
   }

   return 0;
}
```

[Link para o código](https://onlinegdb.com/8AE_xfjov)

## 6.

>  Faça um programa que faça a leitura de 15 salários e verifique qual a porcentagem desses 15 salários lidos tem valor acima de 1500

```c
#include <stdio.h>

int main()
{

   int salariesAmount = 15;
   int salaryMargin = 1500;
   int salariesBiggerThanMargin = 0;

   for (int i = 0; i < salariesAmount; i++)
   {
      float salary = 0;

      printf("Digite o valor do %dº salário: ", i + 1);
      scanf("%f", &salary);

      if (salary >= salaryMargin)
      {
         salariesBiggerThanMargin++;
      }
   }

   float salariesOverMarginPercentage = ((float)salariesBiggerThanMargin / (float)salariesAmount) * 100;

   printf("\nSalários: %d", salariesAmount);
   printf("\nPorcentagem de salários maior que %d: %.2f%%", salaryMargin, salariesOverMarginPercentage);

   return 0;
}
```

[Link para o código](https://onlinegdb.com/Jvp7z37QT)

## 7.

> TODO:

## 8.

>  Fazer um programa que leia a altura de 15 pessoas e mostre em tela a maior altura e a menor altura digitada

```c
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
```

[Link para o código](https://onlinegdb.com/ypen5PFn6w)

## 9. 

>  Fazer um programa que peça ao usuário um número entre 12 e 20. Se a pessoa digitar um número diferente, mostrar a mensagem "entrada inválida" e solicitar o número novamente. Se digitar correto mostrar o número digitado. 

```c
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
```

[Link para o código](https://onlinegdb.com/jymyLNOEz)

## 10.

>  Escreva um algoritmo que leia um número do teclado até que encontre um número menor ou igual a 1

```c
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
```

[Link para o código](https://onlinegdb.com/UPUnXUahS)