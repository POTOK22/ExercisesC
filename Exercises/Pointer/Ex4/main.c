#include <stdio.h>

int main(void)
{
    int a, b;
    int* ptra = &a;
    int* ptrb = &b;

    printf("Input the first number: ");
    if (scanf("%d", ptra) != 1){
        return 1;
    }
    printf("Input the second number: ");
    if (scanf("%d", ptrb) != 1){
        return 1;
    }
    
    printf("The sum of the entered numbers is : %d\n", *ptra + *ptrb);
    
    return 0;
}