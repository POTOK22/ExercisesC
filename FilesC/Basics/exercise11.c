/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

void clear_buffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(void)
{   
    int weight1 = 0, number1 = 0, weight2 = 0, number2 = 0;
    double average = 0;

    printf("Weight - Item1: \n");
    if (scanf("%d", &weight1) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        clear_buffer();
        return 1;
    }

    printf("No. of item 2: \n");
    if (scanf("%d", &number1) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        clear_buffer();
        return 1;
    }

    printf("Weight - Item2: \n");
    if (scanf("%d", &weight2) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        clear_buffer();
        return 1;
    }
    printf("No. of item 1: \n");
    if (scanf("%d", &number2) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        clear_buffer();
        return 1;
    }

    average = (weight1*number1 + weight2*number2)*1.0 / (number1 + number2);
    printf("Average value = %f\n", average);
    
    return 0;
}