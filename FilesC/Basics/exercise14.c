/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

void clear_buffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(void)
{
    int distance = 0;
    float fuel_spent = 0.0, result = 0.0;

    printf("Input total distance in km:\n");
    if(scanf("%d", &distance) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        clear_buffer();
        return 1;
    }

    printf("Input total fuel spent in liters:\n");
    if(scanf("%f", &fuel_spent) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        clear_buffer();
        return 1;
    }

    result = distance/fuel_spent;

    printf("Average consumption (km/lt): %.2f\n", result);

    return 0;
}