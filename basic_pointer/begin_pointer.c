/*
Trying out the concept of Pointers.
Arijit Ghosh.
April 15, 2021.
*/

#include <stdio.h>

int main(void)
{
    int var = 4;

    int* p = &var;

    printf("The address is : %d" , *p);
    printf("\nThe value is : %p" , p);

    return 0;
}