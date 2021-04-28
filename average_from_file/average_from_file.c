/*
Average weight of elephant seal from the weights given in the elephant_seal.txt file.
Arijit Ghosh.
April 18, 2021.
*/

#include <stdio.h>

void calculate_avg(int w_arr[] , const int SIZE) // defining our utility function.
{
    int i = 0; // Instantiating a local looping variable.
    double sum = 0.0; // sum accumulator.
    double avg = 0.0; // final result calculator.


    for(i = 0 ; i < SIZE ; i++)
    {   
        // checking if the current value and the next value is not zero or if the next iteration is out of bund. If so break out of loop.
        // Check for zero is for efficiency since our array is initially filled with zeros.

        if (w_arr[i] == 0 && (w_arr[i + 1] == 0 || (i + 1) == SIZE)) 
        {
            break;
        }
        else
        {
            sum = sum + w_arr[i]; // adding to our sum accumulator.
        }
    }

    avg = sum / (i - 1); // just diving by the number of values in w_arr. i-1 is taken by looking at our break condition.

    printf("Average weight is : %.2lf" , avg); // Finally printing the final output.
    

}

int main(void)
{
    const int SIZE = 1000; // Setting the size of array
    int weights_arr[1000] = {0}; //Initializing an integer array of size 1000.
    int i = 0; //Instantiating looping variable.

    FILE *file = fopen("elephant_seal.txt" , "r"); // opening our file in reading mode.

    while (fscanf(file , "%d" , &weights_arr[i]) != EOF) // checking if its not the end of file.
    {
        fscanf(file , "%d" , &weights_arr[i]); // scanning for integers from file.
        i++; // incrementing our looping variable.
    }

    calculate_avg(weights_arr , SIZE); //calling our utility function.
    
    return 0;
}