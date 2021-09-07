#include <stdio.h>

int main()
{
    int n,i,m;
    printf("Enter the n number:\n");
    scanf("%d",&n);
    printf("The Multiplication Table of %d is given below:\n",n);
    
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);   
    }
    
    return 0;
}