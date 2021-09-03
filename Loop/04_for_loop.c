#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    for (i = 10; i > 0 ; i--)
    {
        printf("The value of i is %d\n", i);
        if (i == n)
        {
            break;
        }
    }

    return 0;
}