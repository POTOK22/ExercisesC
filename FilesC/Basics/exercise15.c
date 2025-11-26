/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>
#include <math.h>

/* Discard rest of the input until '\n' or EOF*/
static void discard_rest_of_line(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        continue;
}

/* Take an digit as an input and check if it is correct */
static int read_int(const char *prompt, int *out)
{
    printf("%s", prompt);
    fflush(stdout);

    if (scanf("%d", out) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        discard_rest_of_line();
        return 0;
    }
    discard_rest_of_line();
    return 1;
}

int main(void) 
{
    int x1, y1, x2, y2;
    float result;

    if (!read_int("Input x1: ", &x1)) return 1;
    if (!read_int("Input y1: ", &y1)) return 1;
    if (!read_int("Input x2: ", &x2)) return 1;
    if (!read_int("Input y2: ", &y2)) return 1;

    result = sqrt((x2 - x1)*(x2 - x1) + (y2-y1)*(y2-y1));

    printf("Distance between the said points: %.4f\n", result);

    return 0;
}