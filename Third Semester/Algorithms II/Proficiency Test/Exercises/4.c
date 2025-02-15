#include <stdio.h>

struct Pessoa {
    char name[50];
    int age;
};

int main(){
    
    struct Pessoa person1 = {"Pessoa 1", 12};
    struct Pessoa person2 = {"Pessoa 2", 14};
    struct Pessoa person3 = {"Pessoa 3", 16};

    printf("Nome 1: %s\n", person1.name);
    printf("Nome 2: %s\n", person2.name);
    printf("Nome 2: %s\n", person2.name);


    return 0;
}