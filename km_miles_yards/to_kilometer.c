/*
Conversion to kilometers from miles and yards.
Arijit Ghosh.
7 April, 2021.
*/

#include<stdio.h>

int main(void)
{
    double yards = 0.0 , miles = 0.0 , km = 0.0;
    printf("Enter miles and yards : ");
    scanf("%lf%lf" , &miles , &yards);
    km = 1.609 * (miles + yards / 1760.0);
    printf("The respective kilometer value is : %lf" , km);
    return 0;
}