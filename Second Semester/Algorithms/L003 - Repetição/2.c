#include <stdio.h>

int main(){

    int number;

    printf("Digite um número de 1 a 10: ");
    scanf("%d", &number);
    
    int isSmallerThanNeeded = number < 1;
    int isBiggerThanLimit = number > 10;
    
    if(isSmallerThanNeeded | isBiggerThanLimit){
        printf("O número é menor que 1 ou maior que 10, tente novamente.");
        exit(1);
    }

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}