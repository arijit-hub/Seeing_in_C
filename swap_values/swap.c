/*
Swap two numbers.
April 16, 2021.
Arijit Ghosh.
*/

#include <stdio.h>

void swap(int *i ,int *j) 
// Sending in the address of a and b. *i and *j is dereferencing them and taking them as whats inside address i and j.
{
    int temp = *i; // value of temp is the value which is inside the address of i, i.e., by a.
    *i = *j; //value in address i is the value in address j, i.e., by b.
    *j = temp; //replacing the value in address j as temp, i.e., by a.
}

int main(void)
{
    int a = 5 , b = 3;

    printf("Before Swapping\na = %d , b = %d\n" , a , b);

    swap(&a , &b);

    printf("\nAfter Swapping\na = %d , b = %d" , a , b);

    return 0;   
}