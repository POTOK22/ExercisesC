# include <stdio.h>

int main(void)
{
    int x;
    printf("Give me a number to check if it is a prime:");
    scanf("%d", &x);

    if (x < 2)
    {
        printf("The given number is not a prime!\n");
        return 0;
    }
    
    for (int i = 2; i <= x/2; i++)
    {
        if (x % i == 0)
        {
            printf("The given number is not a prime\n");
            return 0;
        }
    }
    
    printf("The given number is a prime!\n");   
    
    return 0;
}