#include <stdio.h>

struct Car {
    char brand[30];
    int year;
};

int main(void)
{
    struct Car car = {"Toyota", 2020};

    // pointer declaration to car struct
    struct Car *ptr = &car;

    printf("Brand: %s\n", ptr->brand);
    printf("Year: %d\n", ptr->year);

    return 0;
}