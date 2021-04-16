/*
    Circle Area
    Arijit Ghosh
    April 7, 2021
*/  

#include<stdio.h>

#define PI 3.14159

int main()
{
    double area = 0.0 , radius = 0.0;
    printf("Enter the radius:");
    scanf("%lf" , &radius);
    area = PI * radius * radius;
    printf("The area is %lf." , area);
    return 0;
}