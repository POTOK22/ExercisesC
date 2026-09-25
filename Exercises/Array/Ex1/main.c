#include <stdio.h>

int main(void)
{
    int array[10];

    printf("Input 10 elements in the array:\n");

    for(int i=0; i<10; i++)
    {
        printf("element - %d : ", i);
        if(scanf("%d", &array[i]) != 1)
        {
            return 1;
        }
    }

    printf("Elements in array are: ");
    for (int i=0; i<10; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}