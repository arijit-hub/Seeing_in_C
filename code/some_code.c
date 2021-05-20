#include <stdio.h>

float CumulativeDiscount(float arr[] , int n)
{
    int i;
    float disc , disc_price = 100.0;

    for(i = 0 ; i < n; i++)
    {
        disc_price = disc_price * (100 - arr[i]) / 100.0;
    }

    disc = 100 - (disc_price * 100 / 100.0) ;

    return disc;

}

int main()
{
    float arr[3] = {10 , 20 , 30};
    int n = 3;
    CumulativeDiscount(arr , n);
}