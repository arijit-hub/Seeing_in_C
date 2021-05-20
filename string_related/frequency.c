#include<stdio.h>
#include <stdlib.h>

#define MAX_LIMIT  1000

int main()
{
    char str[MAX_LIMIT] , check;
    int i = 0 , count = 0;
    printf("Enter a string : ");
    scanf(" ");
    fgets(str , MAX_LIMIT , stdin);
    printf("Input : ");
    scanf("%c" , &check);

    while(str[i] != '\0')
    {
        if ((str[i] == check) || (str[i] == check - 32))
        {
            count++;
        }

        if (str[i] == ' ')
        {
            if ((str[i + 1] != '\0') && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }

        i++;
    }
    int rand_char = (rand() % (47 - 33 + 1)) + 33;
    //char a = rand_char;
    str[i] = rand_char;

    printf("Frequency : %d\n" , count);
    printf("Final String = %s" , str );

}