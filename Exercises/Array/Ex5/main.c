#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n = 0, counter = 0;

    printf("Input the number of elements to be stored in the array: ");
    if(scanf("%d", &n) != 1)
    {
        return 1;
    }

    int arr[n];

    printf("Input %d elements in the array:\n", n);
    for(int i=0; i<n; i++)
    {
        printf("element - %d: ", i);
        if(scanf("%d", &arr[i]) != 1)
        {
            return 1;
        }
    }

    printf("Total number of duplicate elements found in the array is: %d\n", counter);

    return 0;
}