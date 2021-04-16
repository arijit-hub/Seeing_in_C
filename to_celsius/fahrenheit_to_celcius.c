/*
Conversion from Fahrenheit to Celsius.
Arijit Ghosh
7 April, 2021
*/

#include <stdio.h>

int main(void)
{
    double celsius = 0.0 , fahrenheit = 0.0;
    printf("Enter the temperature in Fahrenheit :");
    scanf("%lf" , &fahrenheit);
    celsius = (fahrenheit - 32) * 5.0 / 9;
    printf("The respective value in Celsius scale is : %lf" , celsius);
    return 0;
}