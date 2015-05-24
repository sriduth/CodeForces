#include<stdio.h>
int fun(int);
int main()
{
    float k=3;

    // Here k is assigned to f
    // hence output is 5
    fun(k=fun(fun(k)));
    printf("%f\n", k);
    return 0;
}

int fun(int i)
{
    i++;
    return i;
}