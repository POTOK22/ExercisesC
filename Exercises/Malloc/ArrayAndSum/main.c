#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0, sum = 0;
    printf("Podaj n: ");
    if(scanf("%d", &n) != 1 || n <= 0)
    {
        return 1;
    }

    int* ptr = malloc(n*sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i=0; i<n; i++)
    {
        printf("Liczba #%d: ", i+1);
        if(scanf("%d", ptr+i) != 1)
        {
            free(ptr);
            return 1;
        }
        sum += *(ptr+i);
    }
    
    double avg = (double)sum/n;
    printf("Suma: %d\nSrednia: %lf\n", sum, avg);

    free(ptr);
    ptr = NULL;

    return 0;
}