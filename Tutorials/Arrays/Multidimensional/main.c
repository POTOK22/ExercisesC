#include <stdio.h>

int main(void)
{
    int matrix[2][3] = {{1,2,4},{3,6,8}}; // first rows, second columns

    printf("%d\n", matrix[0][2]); // first row, second column

    matrix[0][0] = 9; // change of first value
    printf("%d\n", matrix[0][0]);

    // loop through a matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}