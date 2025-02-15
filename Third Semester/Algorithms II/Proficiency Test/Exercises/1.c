#include <stdio.h>

int main()
{
    int number;
    
    printf("Digite qual número você quer o factorial:\n");
    scanf("%d", &number);
    
    long int factorial = 1;
    
    for(int i = number; i > 0; i--){
        factorial *= i;    
    }
    
    printf("O factorial de %d é %ld", number, factorial);
    
    return 0;
}