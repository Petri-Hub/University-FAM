#include <stdio.h>

int main(){

    int numbersAmount;
    int sum;

    printf("Digite quantos números você quer calcular a média: ");
    scanf("%d", &numbersAmount);

    for(int i = 0; i < numbersAmount; i++){
        int number;

        printf("Digite o %dº número: ");
        scanf("%f", &number);

        sum += number;
    }

    printf("A média destes valores é: %.2f", sum / numbersAmount);

    return 0;
}