/*
Finding the volume of sphere.
Arijit Ghosh.
April 10, 2021.
*/

#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
    int radius = 0;
    double volume = 0.0;
    printf("Enter radius:");
    scanf("%d", &radius);
    printf("volume is : %lf \n\n", 4*PI*radius*radius*radius/3.0 );
    return 0;
}