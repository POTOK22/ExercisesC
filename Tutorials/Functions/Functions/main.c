#include <stdio.h>

void myFunction(void)
{
    printf("I just got executed!\n");
}

int calculateSum(int x, int y)
{
    return x + y;
}

int main(void)
{
    myFunction();
    printf("%d\n", calculateSum(5,6));
    return 0;
}