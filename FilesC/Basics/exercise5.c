/* Exercises are from: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main(void)
{
    int height = 0;
    int width = 0;
    int perimeter = 0;
    int area = 0;

    printf("Enter height of the rectangle: ");
    scanf("%d", &height);
    printf("Enter width of the rectangle: ");
    scanf("%d", &width);

    perimeter = height*2 + width*2;
    area = width * height;

    printf("Perimeter of the rectangle = %d inches\n", perimeter);
    printf("Area of the rectangle = %d square inches\n", area);

    return 0;
}