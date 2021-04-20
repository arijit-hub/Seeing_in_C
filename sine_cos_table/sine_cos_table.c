/*
Tabulating sine and cosine values for angle between 0 and 1.
Arijit Ghosh.
April 11, 2021.
*/

// Including preprocessor directives.

#include <stdio.h>
#include <math.h>

// Main Function to tabulate sin and cos values.
// We are going to take angle values between 0 and 1 with 0.1 interval range.

int main(void)
{
    double angle = 0.0, interval_step = 0.1 , sinValue = 0.0 , cosValue = 0.0;

    printf("--------------------------------------------\n");
    printf("(x)\t\t|| sin(x)\t || cos(x)\n");
    printf("--------------------------------------------\n");

    // Looping for 10 times, since 0.1 * 10 = 1

    for (int i = 0 ; i <= 10 ; i++)
    {
        sinValue = sin(angle); // Getting the sine value.
        cosValue = cos(angle); // Getting the cosine value.
        printf("%lf\t|| %lf\t || %lf\n" , angle , sinValue , cosValue); // Printing the table.
        angle = (i + 1) * interval_step; // Incrementing angle.
    }

    return 0;
}