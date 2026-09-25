#include <stdio.h>

int main(void)
{
    int myNumbers[4] = {25, 50, 75, 100};

    for (int i=0; i<4; i++)
    {
        printf("%p\n", &myNumbers[i]); // each element has 4 bytes
    }

    printf("%p\n", myNumbers);
    printf("%p\n", &myNumbers[0]); // memory address of first element is the same as the name of the array

    printf("%d\n", *myNumbers); // value of first element of the array
    printf("%d\n", *(myNumbers+1)); // value of second element of the array

    int* ptr = myNumbers;
    for (int i=0; i<4; i++)
    {
        printf("%d\n", *(ptr+i));
    }

    return 0;
}