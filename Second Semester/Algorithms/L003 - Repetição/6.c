#include <stdio.h>

int main(){

    int salariesAmount = 15;
    int salaryMargin = 1500;
    int salariesBiggerThanMargin = 0;

    for(int i = 0; i < salariesAmount; i++){
        float salary = 0;

        printf("Digite o valor do %dº salário: ", i + 1);
        scanf("%f", &salary);

        if(salary >= salaryMargin){
            salariesBiggerThanMargin++;
        }
    }

    int salariesOverMarginPercentage = (salariesBiggerThanMargin / salariesAmount) * 100;

    printf("Salários: %d", salariesAmount);
    printf("Porcentagem de salários maior que %d: %.2f\%", salariesAmount, salariesOverMarginPercentage);

    return 0;
}