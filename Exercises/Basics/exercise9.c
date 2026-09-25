/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main(void)
{   
    int number1 = 0;
    int number2 = 0;
    int result = 0;

    printf("Enter first number: \n");
    scanf("%d", &number1);

    printf("Enter second number: \n");
    scanf("%d", &number2);
    
    result = number1 + number2;
    printf("Sum of the above two integers = %d\n", result);

    return 0;
}