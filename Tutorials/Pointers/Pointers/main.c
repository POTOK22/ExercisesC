#include <stdio.h>

int main(void)
{
    int myAge = 24;
    int* ptr = &myAge;

    printf("%d\n", myAge); // output is the value - must use %d for integer
    printf("%p\n", &myAge); // output is the address - must use %p for pointer  
    printf("%p\n", ptr); // output is the address
    printf("%d\n", *ptr); // output is the value

    return 0;
}