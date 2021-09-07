#include <stdio.h>

int main()
{
    int n,i,m,sum = 0;//problem holo sum = 0 na dile
    printf("Enter the n number:\n");
    scanf("%d",&n);
    printf("The Multiplication Table of %d is given below:\n",n);
    
    for (i = 1; i < 11;i++)
    {
        
        printf("%d X %d = %d\n",n,i,n*i);
        sum = sum+(n*i);
    }
    
    printf("The sum is %d",sum);

    return 0;
}