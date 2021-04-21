/*
Finding Fibonacci Number using Recursion.
Arijit Ghosh.
13th April, 2021.
*/

// Including Preprocessor directives

#include <stdio.h>

// Instantiating Fibonacci recursive functions.

int fibo(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }

    else
    {
        return (fibo(num - 1) + fibo(num - 2));
    }
}

// Defining the main function.

int main(void)
{
    int num = 0, fibonacci = 0;

    printf("Enter which Fibonacci term you want to : ");

    scanf("%d" , &num);

    fibonacci = fibo(num);

    printf("The %d term of Fibonacci series is %d" , num , fibonacci);

    return 0;
}