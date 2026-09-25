#include <stdio.h>

double fahrenheitToCelsius(int value)
{
    double temperature = (value-32)*(5/9.0); 
    return temperature;
}

int main(void)
{
    int temperature;

    printf("Give me temperature in fahrenheit: ");
    if (scanf("%d", &temperature) != 1){
        return 1;
    }

    printf("%lf\n", fahrenheitToCelsius(temperature));
    return 0;
}