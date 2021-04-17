/*
Suggests to take an umbrella by learning if you are outside and also about the weather.
Arijit Ghosh.
April 10, 2021.
*/

#include <stdio.h>

int main(void)
{
    int outside, rainy_weather;
    printf("Are you outside?\n1. Yes\n0. No\n\nPlease Enter 1 or 0.: ");
    scanf("%d" , &outside);
    printf("Is it going to rain?\n1. Yes\n0. No\n\nPlease Enter 1 or 0.: ");
    scanf("%d" , &rainy_weather);

    if (outside && rainy_weather)
    {
        printf("Use an umbrella!!");
    }
    else
    {
        printf("Dress Normally!!");
    }

    return 0;
}
