#include <stdio.h>

int MostFrequentCharacter(char str[] , int n)
{
    int count = 0, temp;
    int init_i = 0;
    char letter = str[init_i];

    while (letter != '\0')
    {
        temp = 0;
        for(int i=0; i < n; i++)
        {
            if (str[i] == letter)
            {
                temp = temp + 1;
            }
        }
        if(temp > count)
        {
            count = temp;
        }
        init_i = init_i + 1;
        letter = str[init_i];
    }

    return count;
}

int main()
{
    int m = MostFrequentCharacter("yztzxzyx" , 8);
    printf("%d" , m);
}