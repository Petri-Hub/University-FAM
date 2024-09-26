#include <stdio.h>
#include <math.h>

int main(){

    int peopleAmount = 15;
    int biggestHeight = -INFINITY;
    int smallestHeight = +INFINITY;

    for(int i = 0; i < peopleAmount; i++){
        float height;

        printf("Digite a altrura da %d pessoa: ", i + 1);
        scanf("%f", &height);

        if(height > biggestHeight){
            biggestHeight = height;
        }
        if(height < smallestHeight){
            smallestHeight = height;
        }
    }

    printf("MENOR altura entre os participantes: %.2f", smallestHeight);
    printf("MAIOR altura entre os participantes: %.2f", biggestHeight);

    return 0;
}