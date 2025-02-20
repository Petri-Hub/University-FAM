#include <stdio.h>
#include <stdlib.h>

int main(){
    int* arr = (int *) calloc(5, sizeof(int));

    for(int i = 0; i < 5; i++){
        arr[i] = i;
    };

    for(int i = 0; i < 5; i++){
        printf("Value of the array in position %d: %d\n", i, arr[i]);
    }

    printf("\n\nI will reallocate memory\n\n");

    arr = (int *) realloc(arr, sizeof(int) * 20);

    for(int i = 5; i < 20; i++){
        arr[i] = 999;
    }

    for(int i = 0; i < 20; i++){
        printf("Value of the array in position %d: %d\n", i, arr[i]);
    }

    free(arr);

    return 0;
}