#include <stdio.h>

// this is function DECLARATION
int myFunction(int x, int y);

int main(void)
{
    int result = myFunction(5,3);

    printf("Result: %d\n", result);

    return 0;
}

// this is funtion DEFINITION
int myFunction(int x, int y)
{
    return x+y;
}