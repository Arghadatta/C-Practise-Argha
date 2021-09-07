#include <stdio.h>

int main()
{
    int i, i1, n;
    printf("Enter n number:\n");
    scanf("%d", &n);
    printf("Enter i number:\n");
    scanf("%d", &i);
    i1 = i;
    for (i; i > 0; i--)
    {
        printf("The value of i is %d\n", i);
        if (i == i1 - n)
        {
            break;
        }
    }

    return 0;
}