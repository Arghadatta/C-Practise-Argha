#include <stdio.h>

void sumBuser(int a , int b , int *s1)
{
    int sumInFunc = a + b ;
    *s1 = sumInFunc;

}

int main()
{
    int a = 50 , b = 60,sum;
    sumBuser(a , b , &sum);
    printf("The Sum of a and b is %d",sum);
    
    return 0;
}