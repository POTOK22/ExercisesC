#include <stdio.h>

int tripleSumCondition(int n, int m)
{
    if(n == m)
    {
        return (n + m)*3;
    }
    else
    {
        return n + m;
    }
}

int main(void)
{
    int n=0, m=0;

    printf("Give me first number: ");
    if(scanf("%d", &n) != 1)
    {
        return 1;
    }

    printf("Give me second number: ");
    if(scanf("%d", &m) != 1)
    {
        return 1;
    }

    printf("%d\n", tripleSumCondition(n, m));

    return 0;
}