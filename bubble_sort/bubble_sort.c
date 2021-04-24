/*
Sorting with Bubble sort-- Highest element sorted first algorithm.
Arijit Ghosh.
April 16, 2021.
*/

#include <stdio.h>
#include <stdbool.h>

// Swapping function
void swap(int *i , int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp; 
}

// Displaying the array function
void display(int size , int arr[])
{
    int i;
    for (i = 0 ; i < size ; i++)
    {
        printf("%d " , arr[i]);
    }
}

//Bubble sort main function

int main(void)
{
    const int SIZE = 5;
    int i , j;
    int arr[5] = {72 , 92 , 67 , 83 , 88};
    bool continue_swap = false;

    printf("Original Array: ");
    display(SIZE , arr);
    printf("\n");

    for (i = 0 ; i < SIZE ; i++)
    {
        continue_swap = false; 
        for (j = 0; j < SIZE - (1 + i) ; j++)
        {  
            if (arr[j] > arr[j + 1])
            {
                continue_swap = true;
                swap(&arr[j] , &arr[j + 1]);
            }
        }


        if (continue_swap == false)
        {
            printf("We are done already!");
            break;
        }

        else
        {
            printf("Pass : %d\n" , i + 1);
            display(SIZE , arr);
            printf("\n");
        }


    }

    return 0;

}

