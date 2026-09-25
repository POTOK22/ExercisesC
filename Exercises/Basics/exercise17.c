/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

void clear_line(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void)
{
    int seconds, minutes, hours;

    printf("Input seconds: ");
    fflush(stdout);

    if (scanf("%d", &seconds) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        clear_line();
        return 1;
    }
    clear_line();

    if (seconds > 0)
    {
        hours = seconds / 3600;
        minutes = (seconds - (3600*hours)) / 60;
        seconds = (seconds - (3600*hours)) % 60;
    } else {
        return 1;
    } 

    printf("H:M:S - %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}