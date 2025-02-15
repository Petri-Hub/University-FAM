#include <stdio.h>

struct Carro
{
    char name[50];
    char brand[50];
    int year;
    long double price;
};

int main()
{
    struct Carro car = {"Ford KA", "Ford", 2021, 50000.00};

    printf("Car name: %s\n", car.name);
    printf("Car brand: %s\n", car.brand);
    printf("Car year: %d\n", car.year);
    printf("Car price: %.2Lf\n", car.price);

    return 0;
}