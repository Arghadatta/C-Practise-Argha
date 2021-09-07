// MY VERSION
#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the n number:\n");
    scanf("%d",&n);
    printf("The Multiplication Table of %d is given below:\n",n);
    
    for (i = 10;i; i--)
    {
        printf("%d X %d = %d\n",n,i,n*i);   
    }
    
    return 0;
}