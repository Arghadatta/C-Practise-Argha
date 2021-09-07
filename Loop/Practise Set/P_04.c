#include <stdio.h>

int main()
{
    int i=0,sum = 0,n;
    printf("Enter the n number:\n");
    scanf("%d",&n);

    do
    {
       sum += i;
       i++;
    } while (i <= n);
    printf("The sum is %d",sum);
    
    return 0;
}