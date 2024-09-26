#include <stdio.h>
#include <math.h>

int main(){
    float number = -INFINITY;

    while(number < 12 | number > 20){
        printf("Digite um número: ");
        scanf("%d", &number);

        if(number < 12 | number > 20){
            printf("Número inválido");
        } else {
            printf("%d", number);
        }
    }

    return 0;
}