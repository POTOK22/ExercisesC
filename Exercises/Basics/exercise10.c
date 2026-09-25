/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main(void)
{   
    long long number1 = 0, number2 = 0, result = 0;

    printf("Enter first number:\n");
    if (scanf("%lld", &number1) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        return 1;
    }

    printf("Enter second number:\n");
    if (scanf("%lld", &number2) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        return 1;
    }
    
    result = number1 * number2;
    printf("Product of the above two integers = %lld\n", result);

    return 0;
}