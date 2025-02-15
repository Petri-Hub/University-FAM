#include <stdio.h>
#include <stdlib.h>

struct Address {
    char street[50];
    int number;
    char city[50];
};

struct Person {
    char name[50];
    int age;
    struct Address* address;
};

int main(){
    struct Address* address = (struct Address*) malloc(sizeof(struct Address));
    struct Person* person = (struct Person*) malloc(sizeof(struct Person));

    *address = (struct Address) {"Rua da Silva", 50, "Americana"};
    *person = (struct Person) {"Rogério da Silva", 18, address};

    printf("O nome da pessoa é: %s\n", person->name);
    printf("A rua que essa pessoa mora é: %s\n", person->address->street);

    return 0;
}