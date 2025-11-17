/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main(void)
{   
    const double PI = 3.1415;
    int radius = 0;
    double perimeter = 0.0;
    double area = 0.0;

    printf("Enter the radius of the circle: ");
    fflush(stdout);
    scanf("%d", &radius);

    perimeter = 2 * PI * radius;
    area = PI * radius * radius;
    printf("Perimeter of the Circle = %.6f inches\n", perimeter);
    printf("Area of the Circle = %.6f square inches\n", area);

    return 0;
}