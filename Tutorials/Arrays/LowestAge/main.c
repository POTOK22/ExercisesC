#include <stdio.h>

int main(void)
{
    int age[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int i;
    int length = sizeof(age)/sizeof(age[0]);
    int lowestAge = age[0];

    for (i=0; i<length; i++)
    {
        if (lowestAge > age[i])
        {
            lowestAge = age[i];
        }
    }

    printf("The lowest age is: %d\n", lowestAge);

    return 0;
}