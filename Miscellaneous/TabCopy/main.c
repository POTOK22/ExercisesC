#include <stdio.h>

int main(void)
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int copy[size];
    for (int i=0; i<size; i++)
    {
        copy[i] = arr[i];
    }

    for (int i=0; i<size; i++)
    {
        printf("%d ", copy[i]);
    }

    return 0;
}