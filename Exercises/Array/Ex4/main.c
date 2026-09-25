#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("Input the number of elements to be stored on the array: ");
    if(scanf("%d", &n) != 1)
    {
        return 1;
    }

    int arr1[n];
    int arr2[n];

    printf("Input %d elements in the array:\n", n);
    for(int i=0; i<n; i++)
    {
        printf("element - %d: ", i);
        if(scanf("%d", &arr1[i]) != 1)
        {
            return 1;
        }
        arr2[i] = arr1[i];
    }

    printf("The elements stored in the first array are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d", arr1[i]);
    }

    printf("\nThe elements stored in the second array are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d", arr2[i]);
    }

    return 0;
}