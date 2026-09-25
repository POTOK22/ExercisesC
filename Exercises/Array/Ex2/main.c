#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("Input the number of elements to store in the array: ");
    if(scanf("%d", &n) != 1)
    {
        return 1;
    }

    int arr[n];

    printf("Input %d number of elements in the array:\n", n);
    for(int i=0; i<n; i++)
    {
        printf("element - %d: ", i);
        if(scanf("%d", &arr[i]) != 1)
        {
            return 1;
        }
    }

    printf("The values store into the array are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\nThe values store into the array in reverse are:\n");
    for(int i=n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}