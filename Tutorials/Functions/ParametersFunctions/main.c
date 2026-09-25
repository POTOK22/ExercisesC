#include <stdio.h>

void myFunction(char name[])
{
    printf("Hello %s\n", name);
}

// arrays can be passed as arguments as well
void arrayFunction(int myNumbers[5])
{
    for (int i=0; i<5; i++)
    {
        printf("%d\n", *(myNumbers+i));
    }
}

int main(void)
{
    int myNumbers[] = {10,20,30,40,50};

    myFunction("Grzegorz");
    arrayFunction(myNumbers);
    return 0;
}