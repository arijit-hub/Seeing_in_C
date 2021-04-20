/*
Outputting factorial of a number using recursion.
Arijit Ghosh.
April 13, 2021.
*/

// Including preprocessor directives.

#include <stdio.h>

// Defining factorial function.
int fact(int num)
{
    // Defining base conditions.
    if (num == 0 || num == 1)
    {
        return 1;
    }

    // Developing factorial of number.
    else
    {
        return (fact(num - 1) * num);
    }
}

// Defining the main function
int main(void)
{
    int num = 0 , factorial = 0;
    
    printf("Enter the number for which you want to find the factorial of : ");
    
    scanf("%d" , &num);
    
    factorial = fact(num = num);

    printf("Factorial of %d is %d" , num , factorial);

    return 0;
}