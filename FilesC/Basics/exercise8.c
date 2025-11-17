/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main(void)
{   
    int days = 0;
    int years = 0;
    int weeks = 0;

    printf("Enter number of days: ");
    fflush(stdout);
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - (365*years + 7*weeks);
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}