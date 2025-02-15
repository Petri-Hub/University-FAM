#include <stdio.h>

int main(){

    int number;

    printf("Digite o número que você quer o factorial:\n");
    scanf("%d", &number);

    int i = number;
    long int factorial = 1;

    while(i > 0){
        factorial *= i;
        i--;
    }

    printf("O número %d em factorial é %ld", number, factorial);

    return 0;
}