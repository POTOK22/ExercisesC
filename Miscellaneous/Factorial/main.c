#include <stdio.h>

int main (void)
{
    int x, result = 1;
    printf("Give a number to calculate the factorial: ");

    scanf("%d", &x);

    for (int i = 1; i<=x; i++)
    {
        result = result*i;
    }

    printf("%d! = %d\n", x, result);

    return 0;
}