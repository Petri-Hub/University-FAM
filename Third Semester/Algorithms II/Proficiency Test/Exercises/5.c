#include <stdio.h>

struct Carro
{
    char modelo[50];
    int ano;
    float preco;
};

void exibirCarro(struct Carro car)
{
    printf("Modelo: %s, Ano: %d, Preço: %.2f\n", car.modelo, car.ano, car.preco);
}

int main()
{
    struct Carro meuCarro = {"Civic", 2020, 85000.00};
    exibirCarro(meuCarro);
    return 0;
}