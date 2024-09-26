#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;
    
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &number);

    if(number < 0){
        printf("O número é negativo, digite outro número.");
        exit(1);
    }

    int isPrime = 1;

    for(int i = 2; i < number; i++){
        if(number % i == 0){
            isPrime = 0;
        }
    }

    return 0;
}