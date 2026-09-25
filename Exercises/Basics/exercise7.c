/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main(void)
{   
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("int a = %d\nint b = %d\n", a, b);
    printf("long ax = %ld\n", ax);
    printf("short s = %hd\n", s);
    printf("float x = %f\n", x);
    printf("double dx = %f\n", dx);
    printf("char c = %c\n", c);
    printf("unsigned long = %lu\n", ux);

    return 0;
}