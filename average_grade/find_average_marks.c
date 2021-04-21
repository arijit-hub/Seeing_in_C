/*
Calculates average of 3 input marks by a student out of 100.
Arijit Ghosh.
April 14, 2021.
*/

// Including Preprocessor directives.
#include <stdio.h>

// Coding main program.

int main(void)
{
    const int SIZE = 3;
    int marks_arr[SIZE];
    double total = 0.0;
    double average = 0.0;
    int i;

    printf("----------Please Enter your marks-------\n");

    for (i = 0; i < SIZE ; i++)
    {
        printf("Enter marks of Subject-%d : " , i);
        scanf("%d" , &marks_arr[i]);
    }

    for (i = 0; i < SIZE ; i++)
    {
        total = total + marks_arr[i];
    }

    average = total / SIZE;

    printf("Total Marks is : %.3lf\nAverage Marks is : %.3lf" , total , average);

    return 0;

}