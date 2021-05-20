#include <stdio.h>

int* RearrangeArray(int* arr , int length)
{
    int temp;
    for(int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] >= 0)
            {
                for (int j = i + 1; j <= length ; j ++)
                {
                    temp = arr[i];
                    if (arr[j] < 0)
                    {
                        arr[i] = arr[j];
                        arr[j] = temp;
                        break;
                    }
                }
            }
        }

        else
        {
            if (arr[i] < 0)
            {
                for (int j = i + 1; j <= length ; j ++)
                {
                    temp = arr[i];
                    if (arr[j] > 0)
                    {
                        arr[i] = arr[j];
                        arr[j] = temp;
                        break;
                    }
                }

            }
        }
    }

    return arr;

int main()
{

    int *a;
    int arr[4] = {1,2,-1,4};
    RearrangeArray( arr,  4);

    return 0;
}