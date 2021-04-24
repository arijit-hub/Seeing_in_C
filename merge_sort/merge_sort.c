/*
Implementation of Merge Sort algorithm.
Arijit Ghosh.
April 17, 2021.
*/

#include <stdio.h>


void merge_sort(int a[] , int b[] , int c[],  int num_elem)
{
    int i = 0 , j = 0 , k = 0;
    const int max_k = 2 * num_elem;

    while ((i < num_elem) && (j < num_elem))
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }

        else
        {
            c[k++] = b[j++];
        }

    }

    while(i < num_elem)
    {
        c[k++] = a[i++];
    }

    while (j < num_elem)
    {
        c[k++] = b[j++];
    }

}

int merge(int a[] , int size)
{
    int w[size];
    int j , k;
    
    for ( j = 1 ; j < size  ; j *= 2)
    {
        for (k = 0 ; k < size - j; k += 2* j )
        {
            merge_sort(a + k , a + k + j , w + k, j);
        }
        for ( k = 0 ; k < size ; k++)
        {
            a[k] = w[k];
        }
    }
}

int main(void)
{
    const int size = 4;
    int a[4] = {7,2,5,3};

    merge(a , size);

    for (int i  = 0; i < size ; i++)
    {
        printf("%d " , a[i]);
    }

    return 0;
}