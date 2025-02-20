#include <stdio.h>
#include <stdlib.h>

int main(){
    int* integer = (int *) malloc(sizeof(int));

    if(integer == NULL){
        printf("Allocation failed for integer");
        exit(1);
    }

    *integer = 20;

    printf("The value of the integer is: %d", *integer);

    return 0;
}