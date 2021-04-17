/*
Calculating Sine Function for values between 0 and 1.
*/

#include <stdio.h>
#include <math.h>


int main(void)
{

    double angle = 0.0 , sine_value1 = 0.0 , sine_value2 = 0.0;

    printf("Please enter the angle value (It needs to be in the range (0 , 1) :");
    scanf("%lf" , &angle);

    // Approach 1 : Using math.h package.

    sine_value1 = sin(angle);

    printf("\nsin(%lf) = %lf\n" , angle , sine_value1);

    // Approach 2 : Using elementary mathematics where it suggests sinx = x when x is small.
    // Answer detoriates with increase in value of angle.

    sine_value2 = angle;

    printf("\nsin(%lf) = %lf\n" , angle , sine_value2);

    return 0;

}