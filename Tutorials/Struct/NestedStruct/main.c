#include <stdio.h>

struct Owner {
    char firstName[30];
    char secondName[30];
};

struct Car {
    char brand[30];
    int year;
    struct Owner owner; // nested structure
};

int main(void)
{
    struct Owner person = {"John", "Smith"};
    struct Car car1 = {"BMW", 1990, person};

    printf("%s, %d, %s, %s\n", car1.brand, car1.year, car1.owner.firstName, car1.owner.secondName);
    return 0;
}