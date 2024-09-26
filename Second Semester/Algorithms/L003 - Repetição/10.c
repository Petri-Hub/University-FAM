#include <stdio.h>
#include <math.h>

int main(){
    int number = +INFINITY;

    while(number > 1){
        printf("Digite um número: ");
        scanf("%d", &number);
    }

    printf("Você digitou um número menor que 1");

    return 0;
}