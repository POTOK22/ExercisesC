/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

static void clear_line(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        continue;
}

int main(void)
{
    int amount;

    printf("Input the amount: ");
    fflush(stdout);

    if (scanf("%d", &amount) != 1)
    {
        fprintf(stderr, "Invalid input!\n");
        clear_line();
        return 1;
    }
    clear_line();

    /* First version */
    // printf("%d Note(s) of 100.00\n", amount / 100);
    // amount -= 100 * (amount / 100);

    // printf("%d Note(s) of 50.00\n", amount / 50);
    // amount -= 50 * (amount / 50);

    // printf("%d Note(s) of 20.00\n", amount / 20);
    // amount -= 20 * (amount / 20);

    // printf("%d Note(s) of 10.00\n", amount / 10);
    // amount -= 10 * (amount / 10);

    // printf("%d Note(s) of 5.00\n", amount / 5);
    // amount -= 5 * (amount / 5);

    // printf("%d Note(s) of 2.00\n", amount / 2);
    // amount -= 2 * (amount / 2);

    // printf("%d Note(s) of 1.00\n", amount);
    
    /* Second version */
    const int denominations[] = {100, 50, 20, 10, 5, 2, 1};

    for (size_t i = 0; i < (sizeof(denominations) / sizeof(denominations[0])); i++) 
    {
        int count = amount / denominations[i];
        printf("%d Note(s) of %d.00\n", count, denominations[i]);
        amount %= denominations[i];
    }

    return 0;
}