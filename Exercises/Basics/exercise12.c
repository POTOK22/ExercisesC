/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

void clear_buffer()
{  
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(void)
{
    char employee_id[10];
    int working_hrs = 0;
    double amount_per_hour = 0.0;
    double salary = 0.0;

    printf("Input the Employees ID(Max. 10 chars):\n");
    if (scanf("%9s", employee_id) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        clear_buffer();
        return 1;
    }

    printf("Input the working hours:\n");
    if (scanf("%d", &working_hrs) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        clear_buffer();
        return 1;
    }

    printf("Salary amount/hr:\n");
    if (scanf("%lf", &amount_per_hour) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        clear_buffer();
        return 1;
    }

    if (working_hrs < 0 || amount_per_hour < 0)
    {
        fprintf(stderr, "Invalid input - values must be non-negative\n");
        return 1;
    }

    salary = working_hrs * amount_per_hour;

    printf("Employees ID = %s\n", employee_id);
    printf("Salary = $%.2f\n", salary);

    return 0;
}