/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

void clear_buffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(void)
{
    int first = 0, second = 0, third = 0, result = 0;

    printf("Input the first integer\n");
    if (scanf("%d", &first) != 1)
    {
        fprintf(stderr, "Invalid input\n");
        clear_buffer();
        return 1;
    }

    printf("Input the second integer:\n");
    if (scanf("%d", &second) != 1)
    {
        fprintf(stderr, "Invalid input\n");
        clear_buffer();
        return 1;
    }

    printf("Input the third integer:\n");
    if (scanf("%d", &third) != 1)
    {
        fprintf(stderr, "Invalid input\n");
        clear_buffer();
        return 1;
    }

    if (first > second && first > third)
        result = first;
    else if (second > third)
        result = second;
    else
        result = third;

    printf("Maximum value of three integers: %d\n", result);

    return 0;
}