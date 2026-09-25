#include <stdio.h>

int main(void)
{
    int myNum = 10; // value
    int *ptr = &myNum; // pointer to value
    int **pptr = &ptr; // pointer to pointer

    printf("%d\n", myNum); // value
    printf("%d\n", *ptr); // dereference to value
    printf("%d\n", **pptr); // dereference to dereference to value 

    return 0;
}