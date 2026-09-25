#include <stdio.h>
#include <stdint.h>

int count_bits(uint32_t n)
{
    int count = 0;
    while (n)
    {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int main(void)
{
    uint32_t number = 29;

    printf("Number: %u\n", number);

    for (int i=31; i>=0; i--)
    {
        printf("%d", (number >> i) & 1);
        if (i % 4 == 0 && i != 0) printf(" ");
    }

    printf("\n");
    printf("Bit amount: %d\n", count_bits(number));

    return 0;
}