#include <stdio.h>

int main(void)
{
    int myNumbers[] = {25, 50, 75, 100}; // array declaration
    printf("%d\n", myNumbers[0]);

    myNumbers[0] = 33; // change value of element
    printf("%d\n", myNumbers[0]);

    printf("%zu\n", sizeof(myNumbers)); // output is 16 because sizeof() returns size in bytes

    // how many element does the array store
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("%d\n", length);

    return 0;
}