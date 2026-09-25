#include <stdio.h>

void foo(void)
{
    int a = 0;
    static int b = 0;

    a++;
    b++;
    printf("a = %d, b = %d\n", a, b);
}

int main(void)
{
    foo();
    foo();
    foo();
    foo();

    return 0;
}