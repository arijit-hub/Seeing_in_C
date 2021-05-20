#include<stdio.h>

int GrossSalary(int sal)
{
    float gs , da , hra;

    if (sal < 1550)
    {
        hra = (10.0 / 100.0) * sal;
        da = (80.0 / 100.0) * sal;
    }

    else
    {
        hra = (30.0 / 100.0) * sal;
        da = (90.0 / 100.0) * sal;
    }

    gs = sal + hra +da;

    return gs;
}

int main()
{
    float m = GrossSalary(1400);

    printf("%f" , m);
}

