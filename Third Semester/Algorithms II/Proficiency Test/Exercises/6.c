#include <stdio.h>
#include <stdlib.h>

struct Product {
    char name[100];
    double price;
    int quantity;
};

void showProductInformation(struct Product* product){
    printf("\n\nProduct name: %s\n", product->name);
    printf("Product price: %f\n", product->price);
    printf("Product quantity: %d\n", product->quantity);
};

int main(){
    struct Product* agua = (struct Product*) malloc(sizeof(struct Product));
    struct Product* banana = (struct Product*) malloc(sizeof(struct Product));

    *agua = (struct Product) {"Água", 5, 20};
    *banana = (struct Product) {"Banana", 10, 20};

    showProductInformation(agua);
    showProductInformation(banana);

    free(agua);
    free(banana);

    return 0;
}