#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price;
    int paymentMethod;

    printf("Digite o preço do produto: ");
    scanf("%f", &price);

    printf("Digite o número do método de pagamento:\n\n");
    printf("1 - A vista\n");
    printf("2 - Crédito a vista\n");
    printf("3 - Crédito em duas vezes\n");
    printf("4 - Crédito em três vezes\n\n");
    scanf("%d", &paymentMethod);

    float newPrice;

    switch (paymentMethod)
    {
    case 1:
        newPrice = price - ((price / 100) * 20);
        break;
    case 2:
        newPrice = price - ((price / 100) * 5);
        break;
    case 3:
        newPrice = price;
        break;
    case 4:
        newPrice = price + ((price / 100) * 10);
        break;
    default:
        printf("Método de pagamento inválido.");
        exit(1);
    }

    printf("O preço do produto final é: %.2f", newPrice);

    return 0;
}