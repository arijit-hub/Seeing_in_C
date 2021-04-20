/*
Finding absolute value of sine function.
Arijit Ghosh.
April 11,2021.
*/

#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
    double interval = 0.0 , sinValue = 0.0;
    int i;
    for(i = 0; i <30; i++)
    {
        interval = i/10.0;
        sinValue = sin(interval);
        //abs is replaced to fabs since we want absolute value of floating point number.
        printf("sin( %lf ) = %lf \t", interval, fabs(sinValue)); 
    }

    printf("\n+++++++\n");
    return 0;
}