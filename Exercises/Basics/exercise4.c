/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main()
{
    // first way
    // printf("The reverse of %c%c%c is %c%c%c\n", 'X', 'M', 'L', 'L' ,'M' ,'X');

    // second way
    char X = 'X';
    char M = 'M';
    char L = 'L';

    printf("The reverse of %c%c%c is %c%c%c\n", X, M, L, L, M, X);

    return 0;
}