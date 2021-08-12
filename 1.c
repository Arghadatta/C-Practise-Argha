#include <stdio.h>

int main()
{
    int a;
    printf("Enter your thing: %lld\n", a);
    scanf("%lld", &a);
    if (a % 2 == 0)
    {
        printf("Even\n");
    }
    /*else if (a >= 15)
    {
        printf("Correct++\n");
    }*/
    else
    {
        printf("Odd\n");
    }

    return 0;
}
