#include <stdio.h>

int main(void)
{
    int n=0, sum = 0;
    
    printf("Input the number of elements to be stored on the array: ");
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
        sum += arr[i];
    }

    printf("Sum of all elements stored in the arrays is: %d", sum);

    return 0;
}