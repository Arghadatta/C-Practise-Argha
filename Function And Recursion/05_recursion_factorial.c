#include <stdio.h>

int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}

int main()
{
    printf("factorial of something is %d\n", factorial(8));
    return 0;
}