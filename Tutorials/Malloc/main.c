#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number = 0;
    printf("Enter the number of grades: ");
    if(scanf("%d", &number) != 1){
        return 1;
    }

    char* grades = malloc(number * sizeof(char));

    if(grades == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i=0; i<number; i++)
    {
        printf("Enter grade #%d: ", i+1);
        if(scanf(" %c", grades + i) != 1)
        {
            return 1;
        }
    }

    for(int i=0; i<number; i++)
    {
        printf("%c ", grades + i);
    }

    free(grades); // returning a space to OS
    grades = NULL; // avoid a "dangling" pointer - a pointer that points to memory that is no used anymore

    return 0;
}