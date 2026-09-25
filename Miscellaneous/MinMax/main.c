#include <stdio.h>

void find_min_max(int arr[], int size, int *min, int *max)
{
        *min = arr[0];
        *max = arr[0];

        for (int i=0; i<size; i++)
        {
            if (arr[i] < *min)
            {
                *min = arr[i];
            }
            if (arr[i] > *max)
            {
                *max = arr[i];
            }
        }
}

int main(void)
{
    int arr[] = {1,4,2,6,-5,-9,9,10,15,0,17};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int min, max;

    for (int i=0; i<arr_size; i++)
    {
        printf("%d ", arr[i]);    
    }

    find_min_max(arr, arr_size, &min, &max);
    
    printf("min: %d, max: %d\n", min, max);
    
    return 0;
}