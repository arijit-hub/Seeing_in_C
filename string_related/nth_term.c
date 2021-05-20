#include<stdio.h>
int findNthTerm(int n)
{   
    int s=0;
    int m=0;

    if (n == 1 && n == 2)
    {
        return 0;
    }
    // If n is even
    if (n % 2 == 0)
    {
        int d=275;
        m = (n / 2) - 1;
        s = m  * d;
        return s;
    }
     
    // If n is odd
    else
    {
        int d = 550;
        m = n / 2;
        s = m  * d;
        return s;
    }
}

int main()
{
    int x = 0;
    printf("Input: N = ");
    scanf("%d",&x);
    int s = findNthTerm(x);
    printf("Output : %d",s);
}