#include <stdio.h>
#include <math.h>

int main() {
	int numberA;
	int numberB;
	int numberC;

	printf("Digite o primeiro número: ");
	scanf("%d", &numberA);

	printf("Digite o segundo número: ");
	scanf("%d", &numberB);

	if(numberA == numberB){
	    numberC = numberA + numberB;
	} else {
	    numberC = numberA * numberB;
	}

	printf("Valor da variável C: %d", numberC);

	return 0;
}