#include <stdio.h>

int main(void)
{
    int a, b, *ptra, *ptrb;
    ptra = &a;
    ptrb = &b;

    printf("Input the first number: ");
    if (scanf("%d", ptra) != 1){
        return 1;
    }
    printf("Input the second number: ");
    if (scanf("%d", ptrb) != 1){
        return 1;
    }

    if (*ptra > *ptrb){
        printf("%d is the maximum number", *ptra);
    }
    else {
        printf("%d is the maximum number", *ptrb);
    }

    return 0;
}