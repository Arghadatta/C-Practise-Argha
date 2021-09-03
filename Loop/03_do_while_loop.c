#include <stdio.h>

int main()
{
    int i = 0, n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    do
    {
        printf("The value of i is %d\n", i++);
    } while (i < n);

    return 0;
}